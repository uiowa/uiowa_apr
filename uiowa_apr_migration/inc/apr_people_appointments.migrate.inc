<?php

/**
 * @file
 * Using migrate to import profile data from the University of Iowa APR module.
 */

/**
 * FieldCollectionMigration class extension from Migration.
 */
class APRPeopleAppointmentsFieldCollectionMigration extends Migration {

  /**
   * {@inheritdoc}
   */
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import APR Profile Appointments.');
    $this->dependencies = array('APRPeople');

    // Source url.
    $source_url = variable_get('uiowa_apr_api_root') . '/listing/?key=' . variable_get('uiowa_apr_api_key') . '&population_id=' . variable_get('uiowa_apr_population_id');

    $fields = array(
      'apr_profile_appointments_id' => t('APR Appointment ID'),
      'apr_profile' => t('APR Profile ID'),
      'apr_profile_appointments_type' => t('Type'),
      'apr_profile_appointments_rank' => t('Rank'),
      'apr_profile_appointments_dept' => t('Department'),
      'apr_profile_appointments_college' => t('College'),
      'apr_profile_appointments_div' => t('Division'),
      'apr_profile_appointments_jobcode' => t('Job Code'),
      'apr_profile_appointments_ptype' => t('Person Type'),
    );

    $this->source = new MigrateSourceList(new APRPeopleAppointmentsListJSON($source_url),
      new APRPeopleAppointmentsItemJSON($source_url, array()), $fields);

    $this->destination = new MigrateDestinationFieldCollection(
      'apr_profile_appointments',
      array('host_entity_type' => 'node')
    );

    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'apr_profile_appointments_id' => array(
          'type' => 'varchar',
          'length' => 255,
          'description' => 'Appointment ID',
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationFieldCollection::getKeySchema()
    );

    $this->addFieldMapping('host_entity_id', 'apr_profile')->sourceMigration('APRPeople');
    $this->addFieldMapping('apr_profile_appointments_type', 'appointment_type');
    $this->addFieldMapping('apr_profile_appointments_rank', 'rank');
    $this->addFieldMapping('apr_profile_appointments_dept', 'dep');
    $this->addFieldMapping('apr_profile_appointments_college', 'college');
    $this->addFieldMapping('apr_profile_appointments_div', 'division');
    $this->addFieldMapping('apr_profile_appointments_jobcode', 'job_code');
    $this->addFieldMapping('apr_profile_appointments_ptype', 'person_type');
  }

}

/**
 * Extends MigrateListJSON to get ID values from JSON feed.
 */
class APRPeopleAppointmentsListJSON extends MigrateListJSON {

  /**
   * Parse JSON feed and retrieve ID values.
   */
  protected function getIdsFromJson(array $data) {
    $ids = array();
    foreach ($data as $item) {
      foreach ($item['admin_perms'] as $appt) {
        $ids[] = $appt['id'];
      }
    }
    return $ids;
  }

}

/**
 * Extends MigrateItemJSON to get data from JSON feed.
 */
class APRPeopleAppointmentsItemJSON extends MigrateItemJSON {
  protected $data = array();

  /**
   * Retrieve data item indexed by ID.
   */
  public function getItem($id) {
    // Cache the parsed JSON at $this->data.
    if (empty($this->data)) {
      $data = $this->loadJSONUrl($this->itemUrl);
      if ($data) {
        // Index the array by the ID for easy retrieval.
        foreach ($data as $item) {
          foreach ($item->admin_perms as $appt) {
            $appt->apr_profile = $item->userid;
            $this->data[$appt->id] = $appt;
          }
        }
      }
      else {
        // Error-handling here....
      }
    }
    // Return the requested item.
    if (isset($this->data[$id])) {
      return $this->data[$id];
    }
    else {
      return NULL;
    }
  }

}
