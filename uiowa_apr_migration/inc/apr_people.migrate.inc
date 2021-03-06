<?php

/**
 * @file
 * Using migrate to import profile data from the University of Iowa APR module.
 */

/**
 * NodeMigration class extension from Migration.
 */
class APRPeopleNodeMigration extends Migration {

  /**
   * {@inheritdoc}
   */
  public function __construct($arguments) {
    parent::__construct($arguments);
    $this->description = t('Import APR Profile nodes.');

    // Source url.
    $source_url = variable_get('uiowa_apr_api_root') . '/listing/?key=' . variable_get('uiowa_apr_api_key') . '&population_id=' . variable_get('uiowa_apr_population_id');

    $fields = array(
      'apr_profile_id' => t('APR Profile ID'),
      'title' => t('Full Name'),
      'apr_profile_hawkid' => t('HawkID'),
      'apr_profile_first_name' => t('First Name'),
      'apr_profile_pref_first_name' => t('Preferred First Name'),
      'apr_profile_middle_name' => t('Middle Name'),
      'apr_profile_last_name' => t('Last Name'),
      'apr_profile_suffix' => t('Suffix'),
      'apr_profile_credentials' => t('Credentials'),
      'apr_profile_email' => t('Email'),
      'apr_profile_phone' => t('Phone'),
      'apr_profile_room' => t('Room'),
      'apr_profile_building' => t('Building'),
      'apr_profile_address' => t('Address'),
      'apr_profile_city' => t('City'),
      'apr_profile_state' => t('State'),
      'apr_profile_zip' => t('Zip'),
      'apr_profile_rank' => t('Rank'),
      'apr_profile_working_title' => t('Working Title'),
      'apr_profile_person_type' => t('Person Type'),
    );

    $this->source = new MigrateSourceList(new APRPeopleListJSON($source_url),
      new APRPeopleItemJSON($source_url, array()), $fields);

    $this->destination = new MigrateDestinationNode('apr_profile');

    $this->map = new MigrateSQLMap(
      $this->machineName,
      array(
        'apr_profile_id' => array(
          'type' => 'varchar',
          'length' => 255,
          'description' => 'APR Profile ID',
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    $this->addFieldMapping('title', 'full_name');
    $this->addFieldMapping('apr_profile_hawkid', 'hawkid');
    $this->addFieldMapping('apr_profile_first_name', 'fname');
    $this->addFieldMapping('apr_profile_pref_first_name', 'pfname');
    $this->addFieldMapping('apr_profile_middle_name', 'mname');
    $this->addFieldMapping('apr_profile_last_name', 'lname');
    $this->addFieldMapping('apr_profile_suffix', 'suffix');
    $this->addFieldMapping('apr_profile_credentials', 'credentials');
    $this->addFieldMapping('apr_profile_email', 'email');
    $this->addFieldMapping('apr_profile_phone', 'phone');
    $this->addFieldMapping('apr_profile_room', 'room');
    $this->addFieldMapping('apr_profile_building', 'building');
    $this->addFieldMapping('apr_profile_address', 'address');
    $this->addFieldMapping('apr_profile_city', 'city');
    $this->addFieldMapping('apr_profile_state', 'state');
    $this->addFieldMapping('apr_profile_zip', 'zip');
    $this->addFieldMapping('apr_profile_rank', 'rank');
    $this->addFieldMapping('apr_profile_working_title', 'working_title');
    $this->addFieldMapping('apr_profile_person_type', 'person_type');
  }

  /**
   * {@inheritdoc}
   */
  public function preImport() {
    parent::preImport();
    if (!variable_get('uiowa_apr_api_root') && !variable_get('uiowa_apr_api_key') && !variable_get('uiowa_apr_population_id')) {
      throw new MigrateException('No API and/or Population ID');
    }

    $maptable = 'migrate_map_aprpeople';
    $subquery = db_select($maptable, 'm');
    $subquery->innerJoin('node', 'n', 'm.destid1 = n.nid');
    $subquery->addField('m', 'destid1', 'destid1');
    $subquery->isNotNull('m.destid1');

    $query = db_select($maptable, 'm');
    $query->addField('m', 'destid1', 'destid1');
    $query->condition('m.destid1', $subquery, 'NOT IN');

    $result = $query->execute();

    while ($record = $result->fetchAssoc()) {
      $delete = db_delete($maptable)
        ->condition('destid1', $record['destid1'])
        ->execute();
    }
  }

}

/**
 * Extends MigrateListJSON to get ID values from JSON feed.
 */
class APRPeopleListJSON extends MigrateListJSON {

  /**
   * Parse JSON feed and retrieve ID values.
   */
  protected function getIdsFromJson(array $data) {
    $ids = array();
    foreach ($data as $item) {
      $ids[] = $item['userid'];
    }
    return $ids;
  }

}

/**
 * Extends MigrateItemJSON to get data from JSON feed.
 */
class APRPeopleItemJSON extends MigrateItemJSON {
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
          $item->full_name = '';
          if (!empty($item->fname)) {
            $item->full_name .= $item->fname . ' ';
            if (!empty($item->pfname)) {
              $item->full_name .= '(' . $item->pfname . ') ';
            }
          }
          elseif (!empty($item->pfname)) {
            $item->full_name .= $item->pfname . ' ';
          }
          if (!empty($item->mname)) {
            $item->full_name .= substr($item->mname, 0, 1) . ' ';
          }
          if (!empty($item->lname)) {
            $item->full_name .= $item->lname;
          }
          if (!empty($item->suffix)) {
            $item->full_name .= ', ' . $item->suffix;
          }
          $this->data[$item->userid] = $item;
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
