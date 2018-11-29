<?php

namespace Drupal\uiowa_apr_migration\Plugin\migrate_plus\data_parser;

use Drupal\migrate_plus\Plugin\migrate_plus\data_parser\Json;

/**
 * Obtain JSON data for migration.
 *
 * @DataParser(
 *   id = "json_apr_appointments",
 *   title = @Translation("JSON Parser for APR Appointments")
 * )
 */
class APRAppointmentsJsonParser extends Json {

  /**
   * Retrieves the JSON data and returns it as an array.
   *
   * @param string $url
   *   URL of a JSON feed.
   *
   * @return array
   *   The selected data to be iterated.
   *
   * @throws \GuzzleHttp\Exception\RequestException
   */
  protected function getSourceData($url) {
    $response = $this->getDataFetcherPlugin()->getResponseContent($url);

    // Convert objects to associative arrays.
    $source_data = json_decode($response, TRUE);

    if (is_null($source_data)) {
      $utf8response = utf8_encode($response);
      $source_data = json_decode($utf8response);
    }

    // Create new array that will contain only appointments.
    $app_source_data = [];
    foreach ($source_data as $key => $person) {
      // Add each appointment to this new array.
      $app_source_data = array_merge($app_source_data, $person['admin_perms']);
    }
    $source_data = $app_source_data;

    $modified_data = $this->prepareRows($source_data);

    return $modified_data;
  }

  /**
   * Modify any of the rows in the file.
   *
   * @param array $source_data
   *   Array of data.
   *
   * @return array
   *   Modified data.
   */
  protected function prepareRows(array $source_data) {
    return $source_data;
  }

}
