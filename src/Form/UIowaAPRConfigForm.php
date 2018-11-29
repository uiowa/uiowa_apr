<?php

namespace Drupal\uiowa_apr\Form;

use Drupal\Core\Form\ConfigFormBase;
use Drupal\Core\Form\FormStateInterface;

/**
 * The configuration form for the APR module.
 */
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

    $form['uiowa_apr_api_root'] = [
      '#type' => 'textfield',
      '#title' => $this->t('API Root'),
      '#default_value' => $config->get('uiowa_apr.api_root'),
      '#description' => $this->t('Enter the API Root from the APR Feed URL. This is the full API path without parameters and query string. Do NOT include trailing slash.'),
    ];

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
    $config->set('uiowa_apr.api_root', rtrim($form_state->getValue('uiowa_apr_api_root'), DIRECTORY_SEPARATOR));
    $config->set('uiowa_apr.api_key', $form_state->getValue('uiowa_apr_api_key'));
    $config->set('uiowa_apr.population_id', $form_state->getValue('uiowa_apr_population_id'));
    $config->save();
    return parent::submitForm($form, $form_state);
  }

  /**
   * {@inheritdoc}
   */
  protected function getEditableConfigNames() {
    return [
      'uiowa_apr.settings',
    ];
  }

}
