<?php
/**
 * @file
 * Using migrate to import people nodes from APR
 **/

/**
 * NodeMigration class extension from Migration.
 */
 class APRPeopleNodeMigration extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import APR Profile nodes.');

    // Source url.
    $source_url = 'https://apps.its.uiowa.edu/facadmin/api/listing/?key='.variable_get('uiowa_apr_api_key').'&population_id='.variable_get('uiowa_apr_population_id');
//    $source_url = 'https://test.its.uiowa.edu/facadmin/api/listing/?key='.variable_get('uiowa_apr_api_key').'&population_id='.variable_get('uiowa_apr_population_id');

    $fields = array(
      'apr_profile_id' => 'Unique ID',
      'title' => 'Name',
      'apr_profile_first_name' => 'First Name',
      'apr_profile_middle_name' => 'Middle Name',
      'apr_profile_last_name' => 'Last Name',
      'apr_profile_credentials' => 'Credentials',
      'apr_profile_email' => 'Email',
      'apr_profile_phone' => 'Phone',
      'apr_profile_room' => 'Room',
      'apr_profile_building' => 'Building',
      'apr_profile_address' => 'Address',
      'apr_profile_city' => 'City',
      'apr_profile_state' => 'State',
      'apr_profile_zip' => 'Zip',
    );

    $this->source = new MigrateSourceList(new APRPeopleListJSON($source_url),
      new APRPeopleItemJSON($source_url, array()), $fields);

    // We migrate into "people" nodes.
    $this->destination = new MigrateDestinationNode('apr_profile');
    // We instantiate the MigrateMap
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'apr_profile_id' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $this->addFieldMapping('title', 'full_name');
    $this->addFieldMapping('apr_profile_hawkid', 'hawkid');
    $this->addFieldMapping('apr_profile_first_name', 'fname');
    $this->addFieldMapping('apr_profile_middle_name', 'mname');
    $this->addFieldMapping('apr_profile_last_name', 'lname');
    $this->addFieldMapping('apr_profile_credentials', 'credentials');
    $this->addFieldMapping('apr_profile_email', 'email');
    $this->addFieldMapping('apr_profile_phone', 'phone');
    $this->addFieldMapping('apr_profile_room', 'room');
    $this->addFieldMapping('apr_profile_building', 'building');
    $this->addFieldMapping('apr_profile_address', 'address');
    $this->addFieldMapping('apr_profile_city', 'city');
    $this->addFieldMapping('apr_profile_state', 'state');
    $this->addFieldMapping('apr_profile_zip', 'zip');
  }

  public function preImport() {
    parent::preImport();
    if(!variable_get('uiowa_apr_api_key') && !variable_get('uiowa_apr_population_id')){
      throw new MigrateException('No API and/or Population ID');
    }
  }
}

class APRPeopleListJSON extends MigrateListJSON {
  protected function getIDsFromJSON(array $data) {
    $ids = array();
    foreach ($data as $item) {
      $ids[] = $item['uid'];
    }
    return $ids;
  }
}

class APRPeopleItemJSON extends MigrateItemJSON {
  protected $data = array();
  public function getItem($id) {
    // We cache the parsed JSON at $this->data.
    if (empty($this->data)) {
      $data = $this->loadJSONUrl($this->itemUrl);
      if ($data) {
        // Let's index the array by the ID for easy retrieval.
        foreach ($data as $item) {
          $item->full_name = $item->fname.' '.$item->lname;
          $this->data[$item->uid] = $item;
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
