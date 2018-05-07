<?php

/**
 * @file
 * Administrative form functions for the University of Iowa APR module.
 */

/**
 * Page callback: University of Iowa APR configuration form.
 *
 * @see uiowa_apr_menu()
 */
function uiowa_apr_config_form($form, &$form_state) {
  $form['uiowa_apr_api_key'] = array(
    '#type' => 'textfield',
    '#title' => t('API Key'),
    '#default_value' => variable_get('uiowa_apr_api_key'),
    '#description' => t('Enter the API Key from the Faculty Admin application'),
    '#size' => 60,
    '#required' => TRUE,
  );

  $form['uiowa_apr_population_id'] = array(
    '#type' => 'textfield',
    '#title' => t('Population'),
    '#default_value' => variable_get('uiowa_apr_population_id'),
    '#description' => t('Enter the population ID created for this specific area'),
    '#size' => 60,
    '#required' => TRUE,
  );

  if (!empty(variable_get('uiowa_apr_api_key', '')) && !empty(variable_get('uiowa_apr_population_id', '')) && module_exists('uiowa_apr_migration')) {
    $form['uiowa_apr_operations_fieldset'] = array(
      '#type' => 'fieldset',
      '#title' => t('Operations'),
      '#description' => t('Import - Imports all previously unprocessed records from the source, plus
        any records marked for update, into destination Drupal objects.<br />
        Rollback - Deletes all Drupal objects created by the import.'),
      '#collapsible' => TRUE,
      '#collapsed' => TRUE,
    );

    $form['uiowa_apr_operations_fieldset']['uiowa_apr_import_migration'] = array(
      '#type' => 'submit',
      '#value' => t('Import'),
      '#submit' => array('uiowa_apr_config_form_import_migration'),
    );

    $form['uiowa_apr_operations_fieldset']['uiowa_apr_rollback_migration'] = array(
      '#type' => 'submit',
      '#value' => t('Rollback'),
      '#attributes' => ['onclick' => 'if(!confirm("Are you sure you want to delete all APR entries from this site? This action cannot be undone.")){return false;}'],
      '#submit' => array('uiowa_apr_config_form_rollback_migration'),
    );
  }

  $form = system_settings_form($form);
  $form['#submit'][] = 'uiowa_apr_config_form_submit';
  return $form;
}

/**
 * Additional submit handler for uiowa_apr_config_form().
 */
function uiowa_apr_config_form_submit($form, &$form_state) {
  drupal_flush_all_caches();
  drupal_set_message(t('All caches have been cleared.'), 'status');
}

/**
 * Additional migration handler for uiowa_apr_config_form().
 */
function uiowa_apr_config_form_import_migration($form, &$form_state) {
  // Get migration objects
  $people = Migration::getInstance('APRPeople');
  $appointments = Migration::getInstance('APRPeopleAppointments');

  if ($appointments->processedCount() > 0) {
    // Rollback existing appointments if appointments already exist
    $rollback = $appointments->processRollback();
  }
  if ($people->processedCount() > 0) {
    // Prepare update of existing profiles if profiles already exist
    $update = $people->prepareUpdate();
  }
  $result = $people->processImport();
  $result = $appointments->processImport();
}

/**
 * Additional migration handler for uiowa_apr_config_form().
 */
function uiowa_apr_config_form_rollback_migration($form, &$form_state) {
  // Get migration objects
  $people = Migration::getInstance('APRPeople');
  $appointments = Migration::getInstance('APRPeopleAppointments');

  $rollback = $appointments->processRollback();
  $rollback = $people->processRollback();
}
