<?php

namespace Drupal\uiowa_apr\Form;

use Drupal\Core\Form\ConfigFormBase;
use Drupal\Core\Form\FormStateInterface;

class UIowaAPRConfigForm extends ConfigFormBase {

  /**
   * {@inheritdoc}
   */
  public function getFormId() {
    return 'uiowa_apr_form';
  }

  /**
   * {@inheritdoc}
   */
  public function buildForm(array $form, FormStateInterface $form_state) {
    $form = parent::buildForm($form, $form_state);
    $config = $this->config('uiowa_apr.settings');

    $form['uiowa_apr_api_key'] = [
      '#type' => 'textfield',
      '#title' => $this->t('API Key'),
      '#default_value' => $config->get('uiowa_apr.api_key'),
      '#description' => $this->t('Enter the API Key from the APR Admin application.'),
    ];

    $form['uiowa_apr_population_id'] = [
      '#type' => 'textfield',
      '#title' => $this->t('Population'),
      '#default_value' => $config->get('uiowa_apr.population_id'),
      '#description' => $this->t('Enter the population ID created for this specific area.'),
    ];

    return $form;
  }

  /**
   * {@inheritdoc}
   */
  public function validateForm(array &$form, FormStateInterface $form_state) {

  }

  /**
   * {@inheritdoc}
   */
  public function submitForm(array &$form, FormStateInterface $form_state) {
    drupal_flush_all_caches();
    drupal_set_message(t('All caches have been cleared.'), 'status');

    $config = $this->config('uiowa_apr.settings');
    $config->set('uiowa_apr.api_key', $form_state->getValue('uiowa_apr_api_key'));
    $config->set('uiowa_apr.population_id', $form_state->getValue('uiowa_apr_population_id'));
    $config->save();
    return parent::submitForm($form, $form_state);
  }

/* REMOVE ME ONCE CRON FUNCTIONS ARE ADDED
  public function uiowa_apr_config_form_import_migration(array &$form, FormStateInterface $form_state) {
    // Get migration objects
    $people = \Drupal::service('plugin.manager.migration')->getInstance('APRPeople');
    $appointments = \Drupal::service('plugin.manager.migration')->getInstance('APRPeopleAppointments');

    if ($appointments->processedCount() > 0) {
      // Rollback existing appointments if appointments already exist
      $rollback = $appointments->rollback();
    }
    if ($people->processedCount() > 0) {
      // Prepare update of existing profiles if profiles already exist
      $update = $people->getIdMap()->prepareUpdate();
    }

    $executable = new MigrateExecutable($people, new MigrateMessage());
    $executable->import();
    $executable = new MigrateExecutable($appointments, new MigrateMessage());
    $executable->import();
  }

  public function uiowa_apr_config_form_rollback_migration(array &$form, FormStateInterface $form_state) {
    // Get migration objects
    $people = \Drupal::service('plugin.manager.migration')->getInstance('APRPeople');
    $appointments = \Drupal::service('plugin.manager.migration')->getInstance('APRPeopleAppointments');

    $executable = new MigrateExecutable($people, new MigrateMessage());
    $executable->rollback();
    $executable = new MigrateExecutable($appointments, new MigrateMessage());
    $executable->rollback();
  }
*/

  /**
   * {@inheritdoc}
   */
  protected function getEditableConfigNames() {
    return [
      'uiowa_apr.settings',
    ];
  }

}