<?php

/**
 * NodeMigration class extension from Migration.
 */
 class APRPeopleAppointmentFieldCollectionMigration extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import APR Profile Appointments.');
    $this->dependencies = array('APRPeople');

    // Source url.
    $source_url = 'https://apps.its.uiowa.edu/facadmin/api/listing/?key='.variable_get('uiowa_apr_api_key').'&population_id='.variable_get('uiowa_apr_population_id');

    $fields = array(
      'appointments_id' => 'Unique ID',
      'apr_person' => 'Person ID',
      'apr_profile_appointments_type' => 'Type',
      'apr_profile_appointments_rank' => 'Rank',
      'apr_profile_appointments_dept' => 'Department',
      'apr_profile_appointments_college' => 'College',
      'apr_profile_appointments_div' => 'Division',
      'apr_profile_appointments_jobcode' => 'Job Code',
    );

    $this->source = new MigrateSourceList(new APRPeopleAppointmentsListJSON($source_url),
      new APRPeopleAppointmentsItemJSON($source_url, array()), $fields);

    $this->destination = new MigrateDestinationFieldCollection('apr_profile_appointments', array('host_entity_type' => 'node'));

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'appointments_id' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $this->addFieldMapping('host_entity_id', 'apr_person')->sourceMigration('APRPeople');
    $this->addFieldMapping('apr_profile_appointments_type', 'appointment_type');
    $this->addFieldMapping('apr_profile_appointments_rank', 'rank');
    $this->addFieldMapping('apr_profile_appointments_dept', 'dep');
    $this->addFieldMapping('apr_profile_appointments_college', 'college');
    $this->addFieldMapping('apr_profile_appointments_div', 'division');
    $this->addFieldMapping('apr_profile_appointments_jobcode', 'job_code');
  }
}

class APRPeopleAppointmentsListJSON extends MigrateListJSON {
  protected function getIDsFromJSON(array $data) {
    $ids = array();
    foreach ($data as $item) {
      foreach($item['admin_perms'] as $appt){
        $ids[] = $appt['id'];
      }
    }
    return $ids;
  }
}



class APRPeopleAppointmentsItemJSON extends MigrateItemJSON {
  protected $data = array();
  public function getItem($id) {
    // We cache the parsed JSON at $this->data.
    if (empty($this->data)) {
      $data = $this->loadJSONUrl($this->itemUrl);
      if ($data) {
        // Let's index the array by the ID for easy retrieval.
        foreach ($data as $item) {
          foreach($item->admin_perms as $appt){
            $appt->apr_person = $item->uid;
            $this->data[$appt->id] = $appt;
          }
          
        }
      }
      else {
        // Error-handling here....
      }
    }
    // Return the requested item
    if (isset($this->data[$id])) {
      return $this->data[$id];
    }
    else {
      return NULL;
    }
  }
}