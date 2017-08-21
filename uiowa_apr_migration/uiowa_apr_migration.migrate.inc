
<?php
/**
 * @file
 * Using migrate to import people nodes from APR
 **/

/**
 * PersonNodeMigration class extension from Migration.
 */
 class APRPeopleNodeMigration extends Migration {
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import APR Profile nodes.');

    // Source url.
    $source_url = 'https://apps.its.uiowa.edu/facadmin/api/listing/?key=5X44M0gzOzVtt1Pl6V3e9ak61M6yX9Bm&population_id=13';

    $fields = array(
      'id' => 'Unique ID',
      'title' => 'HawkID',
      'apr_profile_first_name' => 'First Name',
      'apr_profile_last_name' => 'Last Name',
    );

    $this->source = new MigrateSourceList(new APRPeopleListJSON($source_url),
      new APRPeopleItemJSON($source_url, array()), $fields);

    // We migrate into "people" nodes.
    $this->destination = new MigrateDestinationNode('apr_profile');
    // We instantiate the MigrateMap
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          )
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $this->addFieldMapping('title', 'hawkid');
    $this->addFieldMapping('apr_profile_first_name', 'fname');
    $this->addFieldMapping('apr_profile_last_name', 'lname');
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