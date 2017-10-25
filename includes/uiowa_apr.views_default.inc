<?php

/**
 * @file
 * Views integration for the University of Iowa APR Profiles module.
 */

/**
 * Implements hook_views_default_views().
 */
function uiowa_apr_views_default_views() {

  /* Exported apr_profiles view */
  $view = new view();
  $view->name = 'apr_profiles';
  $view->description = 'A list of profiles from the University of Iowa APR system.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'APR Profiles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'People';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'apr_profile_phone' => 'apr_profile_phone',
    'apr_profile_email' => 'apr_profile_email',
    'apr_profile_appointments_rank' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_appointments_rank' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'List of Faculty members';
  $handler->display->display_options['style_options']['summary'] = 'List of Faculty members\' phone, email and campus addresses';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Department Chair & Administrator</h2>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  /* Relationship: Content: Appointments (apr_profile_appointments) */
  $handler->display->display_options['relationships']['apr_profile_appointments_value']['id'] = 'apr_profile_appointments_value';
  $handler->display->display_options['relationships']['apr_profile_appointments_value']['table'] = 'field_data_apr_profile_appointments';
  $handler->display->display_options['relationships']['apr_profile_appointments_value']['field'] = 'apr_profile_appointments_value';
  $handler->display->display_options['relationships']['apr_profile_appointments_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['apr_profile_appointments_value']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['apr_profile_phone']['id'] = 'apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['table'] = 'field_data_apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['field'] = 'apr_profile_phone';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['apr_profile_email']['id'] = 'apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['table'] = 'field_data_apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['field'] = 'apr_profile_email';
  /* Field: Content: Room */
  $handler->display->display_options['fields']['apr_profile_room']['id'] = 'apr_profile_room';
  $handler->display->display_options['fields']['apr_profile_room']['table'] = 'field_data_apr_profile_room';
  $handler->display->display_options['fields']['apr_profile_room']['field'] = 'apr_profile_room';
  $handler->display->display_options['fields']['apr_profile_room']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_room']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_room']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_room']['alter']['text'] = '[apr_profile_room] ';
  $handler->display->display_options['fields']['apr_profile_room']['element_label_colon'] = FALSE;
  /* Field: Content: Building */
  $handler->display->display_options['fields']['apr_profile_building']['id'] = 'apr_profile_building';
  $handler->display->display_options['fields']['apr_profile_building']['table'] = 'field_data_apr_profile_building';
  $handler->display->display_options['fields']['apr_profile_building']['field'] = 'apr_profile_building';
  $handler->display->display_options['fields']['apr_profile_building']['label'] = 'Office';
  $handler->display->display_options['fields']['apr_profile_building']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_building']['alter']['text'] = '[apr_profile_room][apr_profile_building]';
  /* Field: Field collection item: Rank */
  $handler->display->display_options['fields']['apr_profile_appointments_rank']['id'] = 'apr_profile_appointments_rank';
  $handler->display->display_options['fields']['apr_profile_appointments_rank']['table'] = 'field_data_apr_profile_appointments_rank';
  $handler->display->display_options['fields']['apr_profile_appointments_rank']['field'] = 'apr_profile_appointments_rank';
  $handler->display->display_options['fields']['apr_profile_appointments_rank']['relationship'] = 'apr_profile_appointments_value';
  $handler->display->display_options['fields']['apr_profile_appointments_rank']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_appointments_rank']['element_type'] = 'p';
  $handler->display->display_options['fields']['apr_profile_appointments_rank']['element_label_type'] = 'em';
  $handler->display->display_options['fields']['apr_profile_appointments_rank']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Last Name (apr_profile_last_name) */
  $handler->display->display_options['sorts']['apr_profile_last_name_value']['id'] = 'apr_profile_last_name_value';
  $handler->display->display_options['sorts']['apr_profile_last_name_value']['table'] = 'field_data_apr_profile_last_name';
  $handler->display->display_options['sorts']['apr_profile_last_name_value']['field'] = 'apr_profile_last_name_value';
  /* Sort criterion: Content: First Name (apr_profile_first_name) */
  $handler->display->display_options['sorts']['apr_profile_first_name_value']['id'] = 'apr_profile_first_name_value';
  $handler->display->display_options['sorts']['apr_profile_first_name_value']['table'] = 'field_data_apr_profile_first_name';
  $handler->display->display_options['sorts']['apr_profile_first_name_value']['field'] = 'apr_profile_first_name_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apr_profile' => 'apr_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_apr_profiles');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apr_profile' => 'apr_profile',
  );
  /* Filter criterion: Content: Sticky */
  $handler->display->display_options['filters']['sticky']['id'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['table'] = 'node';
  $handler->display->display_options['filters']['sticky']['field'] = 'sticky';
  $handler->display->display_options['filters']['sticky']['value'] = '1';
  $handler->display->display_options['path'] = 'people';

  /* Display: Faculty */
  $handler = $view->new_display('page', 'Faculty', 'page_apr_profiles_faculty');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Faculty';
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apr_profile' => 'apr_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Rank (apr_profile_appointments_rank) */
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['id'] = 'apr_profile_appointments_rank_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['table'] = 'field_data_apr_profile_appointments_rank';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['field'] = 'apr_profile_appointments_rank_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['relationship'] = 'apr_profile_appointments_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['operator'] = 'word';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['value'] = 'professor instructor instruction lecturer';
  /* Filter criterion: Field collection item: Rank (apr_profile_appointments_rank) */
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['id'] = 'apr_profile_appointments_rank_value_1';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['table'] = 'field_data_apr_profile_appointments_rank';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['field'] = 'apr_profile_appointments_rank_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['relationship'] = 'apr_profile_appointments_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['operator'] = 'not';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['value'] = 'emeritus';
  /* Filter criterion: Field collection item: Rank (apr_profile_appointments_rank) */
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_2']['id'] = 'apr_profile_appointments_rank_value_2';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_2']['table'] = 'field_data_apr_profile_appointments_rank';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_2']['field'] = 'apr_profile_appointments_rank_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_2']['relationship'] = 'apr_profile_appointments_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_2']['operator'] = 'not';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_2']['value'] = 'emerita';
  $handler->display->display_options['path'] = 'people/faculty';

  /* Display: Faculty Attachment */
  $handler = $view->new_display('attachment', 'Faculty Attachment', 'attachment_apr_profiles_faculty');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Faculty Attachment';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Faculty</h2>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apr_profile' => 'apr_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Rank (apr_profile_appointments_rank) */
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['id'] = 'apr_profile_appointments_rank_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['table'] = 'field_data_apr_profile_appointments_rank';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['field'] = 'apr_profile_appointments_rank_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['relationship'] = 'apr_profile_appointments_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['operator'] = 'word';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['value'] = 'professor lecturer';
  /* Filter criterion: Field collection item: Rank (apr_profile_appointments_rank) */
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['id'] = 'apr_profile_appointments_rank_value_1';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['table'] = 'field_data_apr_profile_appointments_rank';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['field'] = 'apr_profile_appointments_rank_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['relationship'] = 'apr_profile_appointments_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['operator'] = 'not';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['value'] = 'emeritus';
  /* Filter criterion: Field collection item: Rank (apr_profile_appointments_rank) */
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_2']['id'] = 'apr_profile_appointments_rank_value_2';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_2']['table'] = 'field_data_apr_profile_appointments_rank';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_2']['field'] = 'apr_profile_appointments_rank_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_2']['relationship'] = 'apr_profile_appointments_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_2']['operator'] = 'not';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_2']['value'] = 'emerita';
  $handler->display->display_options['displays'] = array(
    'page_apr_profiles' => 'page_apr_profiles',
    'default' => 0,
    'page_apr_profiles_faculty' => 0,
    'page_apr_profiles_emeritus' => 0,
    'page_apr_profiles_staff' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Emeritus */
  $handler = $view->new_display('page', 'Emeritus', 'page_apr_profiles_emeritus');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Emeritus';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'apr_profile_phone' => 'apr_profile_phone',
    'apr_profile_email' => 'apr_profile_email',
    'apr_profile_appointments_rank' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_appointments_rank' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'List of Emeritusy members';
  $handler->display->display_options['style_options']['summary'] = 'List of Emeritus members\' phone, email and campus addresses';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apr_profile' => 'apr_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Rank (apr_profile_appointments_rank) */
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['id'] = 'apr_profile_appointments_rank_value_1';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['table'] = 'field_data_apr_profile_appointments_rank';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['field'] = 'apr_profile_appointments_rank_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['relationship'] = 'apr_profile_appointments_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['value'] = 'professor';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['group'] = 1;
  /* Filter criterion: Field collection item: Rank (apr_profile_appointments_rank) */
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['id'] = 'apr_profile_appointments_rank_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['table'] = 'field_data_apr_profile_appointments_rank';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['field'] = 'apr_profile_appointments_rank_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['relationship'] = 'apr_profile_appointments_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['operator'] = 'word';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['value'] = 'emeritus emerita';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['group'] = 1;
  $handler->display->display_options['path'] = 'people/emeritus';

  /* Display: Emeritus Attachment */
  $handler = $view->new_display('attachment', 'Emeritus Attachment', 'attachment_apr_profiles_emeritus');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Emeritus Attachment';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'apr_profile_phone' => 'apr_profile_phone',
    'apr_profile_email' => 'apr_profile_email',
    'apr_profile_appointments_rank' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_appointments_rank' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'List of Emeritus members';
  $handler->display->display_options['style_options']['summary'] = 'List of Emeritus members\' phone, email and campus addresses';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Emeritus Faculty</h2>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apr_profile' => 'apr_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Rank (apr_profile_appointments_rank) */
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['id'] = 'apr_profile_appointments_rank_value_1';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['table'] = 'field_data_apr_profile_appointments_rank';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['field'] = 'apr_profile_appointments_rank_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['relationship'] = 'apr_profile_appointments_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['value'] = 'professor';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value_1']['group'] = 1;
  /* Filter criterion: Field collection item: Rank (apr_profile_appointments_rank) */
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['id'] = 'apr_profile_appointments_rank_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['table'] = 'field_data_apr_profile_appointments_rank';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['field'] = 'apr_profile_appointments_rank_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['relationship'] = 'apr_profile_appointments_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['operator'] = 'word';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['value'] = 'emeritus emerita';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['group'] = 1;
  $handler->display->display_options['displays'] = array(
    'page_apr_profiles' => 'page_apr_profiles',
    'default' => 0,
    'page_apr_profiles_faculty' => 0,
    'page_apr_profiles_staff' => 0,
    'page_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Staff */
  $handler = $view->new_display('page', 'Staff', 'page_apr_profiles_staff');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Staff';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'apr_profile_phone' => 'apr_profile_phone',
    'apr_profile_email' => 'apr_profile_email',
    'apr_profile_appointments_rank' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_appointments_rank' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'List of Staff members';
  $handler->display->display_options['style_options']['summary'] = 'List of Staff members\' phone, email and campus addresses';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apr_profile' => 'apr_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Rank (apr_profile_appointments_rank) */
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['id'] = 'apr_profile_appointments_rank_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['table'] = 'field_data_apr_profile_appointments_rank';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['field'] = 'apr_profile_appointments_rank_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['relationship'] = 'apr_profile_appointments_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['value'] = 'staff';
  $handler->display->display_options['path'] = 'people/staff';

  /* Display: Staff Attachment */
  $handler = $view->new_display('attachment', 'Staff Attachment', 'attachment_apr_profiles_staff');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Staff Attachment';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'apr_profile_phone' => 'apr_profile_phone',
    'apr_profile_email' => 'apr_profile_email',
    'apr_profile_appointments_rank' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_appointments_rank' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'List of Staff members';
  $handler->display->display_options['style_options']['summary'] = 'List of Staff members\' phone, email and campus addresses';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Staff</h2>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apr_profile' => 'apr_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Rank (apr_profile_appointments_rank) */
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['id'] = 'apr_profile_appointments_rank_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['table'] = 'field_data_apr_profile_appointments_rank';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['field'] = 'apr_profile_appointments_rank_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['relationship'] = 'apr_profile_appointments_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['value'] = 'staff';
  $handler->display->display_options['displays'] = array(
    'page_apr_profiles' => 'page_apr_profiles',
    'default' => 0,
    'page_apr_profiles_faculty' => 0,
    'page_apr_profiles_emeritus' => 0,
    'page_apr_profiles_staff' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Graduate Students */
  $handler = $view->new_display('page', 'Graduate Students', 'page_apr_profiles_graduate_students');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Graduate Students';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'apr_profile_phone' => 'apr_profile_phone',
    'apr_profile_email' => 'apr_profile_email',
    'apr_profile_room' => 'apr_profile_room',
    'apr_profile_building' => 'apr_profile_building',
    'apr_profile_appointments_rank' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_room' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_building' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_appointments_rank' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'List of Graduate Students';
  $handler->display->display_options['style_options']['summary'] = 'List of Graduate Student phone, email and campus addresses';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apr_profile' => 'apr_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Rank (apr_profile_appointments_rank) */
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['id'] = 'apr_profile_appointments_rank_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['table'] = 'field_data_apr_profile_appointments_rank';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['field'] = 'apr_profile_appointments_rank_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['relationship'] = 'apr_profile_appointments_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['value'] = 'student';
  $handler->display->display_options['path'] = 'people/graduate-students';

  /* Display: Graduate Students Attachment */
  $handler = $view->new_display('attachment', 'Graduate Students Attachment', 'attachment_apr_profiles_graduate_students');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Graduate Students Attachment';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'apr_profile_phone' => 'apr_profile_phone',
    'apr_profile_email' => 'apr_profile_email',
    'apr_profile_room' => 'apr_profile_room',
    'apr_profile_building' => 'apr_profile_building',
    'apr_profile_appointments_rank' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_room' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_building' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_appointments_rank' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['caption'] = 'List of Graduate Students';
  $handler->display->display_options['style_options']['summary'] = 'List of Graduate Student phone, email and campus addresses';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Graduate Students</h2>';
  $handler->display->display_options['header']['area']['format'] = 'filtered_html';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'apr_profile' => 'apr_profile',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field collection item: Rank (apr_profile_appointments_rank) */
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['id'] = 'apr_profile_appointments_rank_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['table'] = 'field_data_apr_profile_appointments_rank';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['field'] = 'apr_profile_appointments_rank_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['relationship'] = 'apr_profile_appointments_value';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['apr_profile_appointments_rank_value']['value'] = 'student';
  $handler->display->display_options['displays'] = array(
    'page_apr_profiles' => 'page_apr_profiles',
    'default' => 0,
    'page_apr_profiles_faculty' => 0,
    'page_apr_profiles_emeritus' => 0,
    'page_apr_profiles_staff' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  // Add view to list of views to provide.
  $views[$view->name] = $view;

  return $views;
}
