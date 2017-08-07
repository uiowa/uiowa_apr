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
		'#description' => t('Enter the API Key from the Facilty Admin application'),
		'#size' => 60,
		'#required' => TRUE,
	);

	$form['uiowa_apr_population_id'] = array(
		'#type' => 'textfield',
		'#title' => t('Population'),
		'#default_value' => variable_get('uiowa_apr_population_id'),
		'#description' => t('Enter the population ID to load'),
		'#size' => 60,
		'#required' => TRUE,
	);

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