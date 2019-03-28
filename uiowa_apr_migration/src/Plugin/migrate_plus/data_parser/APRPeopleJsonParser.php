<?php

namespace Drupal\uiowa_apr_migration\Plugin\migrate_plus\data_parser;

use Drupal\migrate_plus\Plugin\migrate_plus\data_parser\Json;

/**
 * Obtain JSON data for migration.
 *
 * @DataParser(
 *   id = "json_apr_people",
 *   title = @Translation("JSON Parser for APR People")
 * )
 */
class APRPeopleJsonParser extends Json {

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

    foreach ($source_data as $key => $person) {
      // Create a new field for each record that will contain the array
      // of appointment_ids (['appointment_id'])
      $source_data[$key]['appointment_id'] = [];
      foreach ($person['admin_perms'] as $appointment) {
        // Add each appointment_id to the array.
        $source_data[$key]['appointment_id'][] = $appointment['id'];
      }
    }
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