<?php

/**
 * @file
 * Views integration for the University of Iowa APR module.
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
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'path' => 'path',
    'apr_profile_first_name' => 'apr_profile_first_name',
    'apr_profile_pref_first_name' => 'apr_profile_pref_first_name',
    'apr_profile_middle_name' => 'apr_profile_middle_name',
    'apr_profile_last_name' => 'apr_profile_last_name',
    'apr_profile_suffix' => 'apr_profile_suffix',
    'apr_profile_credentials' => 'apr_profile_credentials',
    'nothing' => 'nothing',
    'apr_profile_working_title' => 'title',
    'apr_profile_rank' => 'title',
    'apr_profile_email' => 'apr_profile_email',
    'apr_profile_phone' => 'apr_profile_phone',
    'apr_profile_room' => 'apr_profile_room',
    'apr_profile_building' => 'apr_profile_building',
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
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_pref_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_middle_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_suffix' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_credentials' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_working_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_rank' => array(
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
    'apr_profile_phone' => array(
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
  );
  $handler->display->display_options['style_options']['caption'] = 'A list of all faculty, emeritus, staff and graduate students';
  $handler->display->display_options['style_options']['summary'] = 'A list of all faculty, emeritus, staff and graduate student phone, email and campus addresses';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Department Chair & Administrators</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['apr_profile_first_name']['id'] = 'apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['table'] = 'field_data_apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['field'] = 'apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Preferred First Name */
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['id'] = 'apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['table'] = 'field_data_apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['field'] = 'apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['empty'] = '[apr_profile_first_name]';
  /* Field: Content: Middle Name */
  $handler->display->display_options['fields']['apr_profile_middle_name']['id'] = 'apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['table'] = 'field_data_apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['field'] = 'apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_middle_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['text'] = ' [apr_profile_middle_name]';
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['max_length'] = '2';
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['hide_empty'] = TRUE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['apr_profile_last_name']['id'] = 'apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['table'] = 'field_data_apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['field'] = 'apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_last_name']['alter']['text'] = ' [apr_profile_last_name]';
  $handler->display->display_options['fields']['apr_profile_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Suffix */
  $handler->display->display_options['fields']['apr_profile_suffix']['id'] = 'apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['table'] = 'field_data_apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['field'] = 'apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_suffix']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_suffix']['alter']['text'] = ', [apr_profile_suffix]';
  $handler->display->display_options['fields']['apr_profile_suffix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_suffix']['hide_empty'] = TRUE;
  /* Field: Content: Credentials */
  $handler->display->display_options['fields']['apr_profile_credentials']['id'] = 'apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['table'] = 'field_data_apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['field'] = 'apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_credentials']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_credentials']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_credentials']['alter']['text'] = ', [apr_profile_credentials]';
  $handler->display->display_options['fields']['apr_profile_credentials']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_credentials']['hide_empty'] = TRUE;
  /* Field: Custom: Full Name */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Full Name';
  $handler->display->display_options['fields']['nothing']['label'] = 'Name';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]">[apr_profile_pref_first_name][apr_profile_middle_name][apr_profile_last_name][apr_profile_suffix][apr_profile_credentials]</a>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'h3';
  /* Field: Content: Working Title */
  $handler->display->display_options['fields']['apr_profile_working_title']['id'] = 'apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['table'] = 'field_data_apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['field'] = 'apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_working_title']['element_type'] = 'div';
  $handler->display->display_options['fields']['apr_profile_working_title']['element_label_colon'] = FALSE;
  /* Field: Content: Rank */
  $handler->display->display_options['fields']['apr_profile_rank']['id'] = 'apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['table'] = 'field_data_apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['field'] = 'apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_rank']['element_type'] = 'div';
  $handler->display->display_options['fields']['apr_profile_rank']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['apr_profile_email']['id'] = 'apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['table'] = 'field_data_apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['field'] = 'apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['hide_empty'] = TRUE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['apr_profile_phone']['id'] = 'apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['table'] = 'field_data_apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['field'] = 'apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_phone']['alter']['text'] = '<a href="tel:+1-[apr_profile_phone-value]">[apr_profile_phone]</a>';
  $handler->display->display_options['fields']['apr_profile_phone']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['apr_profile_building']['hide_empty'] = TRUE;
  /* Field: Content: Person Type */
  $handler->display->display_options['fields']['apr_profile_person_type']['id'] = 'apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['field'] = 'apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_person_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_person_type']['element_label_colon'] = FALSE;
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
  
  /* Display: A-Z Page */
  $handler = $view->new_display('page', 'A-Z Page', 'page_apr_profiles_atoz');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'People A-Z';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear All';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'path' => 'path',
    'apr_profile_first_name' => 'apr_profile_first_name',
    'apr_profile_pref_first_name' => 'apr_profile_pref_first_name',
    'apr_profile_middle_name' => 'apr_profile_middle_name',
    'apr_profile_last_name' => 'apr_profile_last_name',
    'apr_profile_suffix' => 'apr_profile_suffix',
    'apr_profile_credentials' => 'apr_profile_credentials',
    'nothing' => 'nothing',
    'apr_profile_working_title' => 'title',
    'apr_profile_rank' => 'title',
    'apr_profile_email' => 'apr_profile_email',
    'apr_profile_phone' => 'apr_profile_phone',
    'apr_profile_room' => 'apr_profile_room',
    'apr_profile_building' => 'apr_profile_building',
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
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_pref_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_middle_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_suffix' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_credentials' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_working_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_rank' => array(
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
    'apr_profile_phone' => array(
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
  );
  $handler->display->display_options['style_options']['caption'] = 'A list of all faculty, emeritus, staff and graduate students';
  $handler->display->display_options['style_options']['summary'] = 'A list of all faculty, emeritus, staff and graduate student phone, email and campus addresses';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>A-Z Listing</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
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
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search by Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Combine fields filter';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['combine']['group_info']['label'] = 'By Category';
  $handler->display->display_options['filters']['combine']['group_info']['identifier'] = 'category';
  $handler->display->display_options['filters']['combine']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Faculty',
      'operator' => 'contains',
      'value' => 'Faculty',
    ),
    2 => array(
      'title' => 'Emeritus',
      'operator' => 'contains',
      'value' => 'Emeritus',
    ),
    3 => array(
      'title' => 'Staff',
      'operator' => 'contains',
      'value' => 'Staff',
    ),
    4 => array(
      'title' => 'Student',
      'operator' => 'contains',
      'value' => 'Student',
    ),
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'apr_profile_person_type' => 'apr_profile_person_type',
  );
  $handler->display->display_options['path'] = 'people';
  
  /* Display: Faculty / Staff A-Z Page */
  $handler = $view->new_display('page', 'Faculty / Staff A-Z Page', 'page_apr_profiles_faculty_staff');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Faculty & Staff A-Z';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Clear All';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'path' => 'path',
    'apr_profile_first_name' => 'apr_profile_first_name',
    'apr_profile_pref_first_name' => 'apr_profile_pref_first_name',
    'apr_profile_middle_name' => 'apr_profile_middle_name',
    'apr_profile_last_name' => 'apr_profile_last_name',
    'apr_profile_suffix' => 'apr_profile_suffix',
    'apr_profile_credentials' => 'apr_profile_credentials',
    'nothing' => 'nothing',
    'apr_profile_working_title' => 'title',
    'apr_profile_rank' => 'title',
    'apr_profile_email' => 'apr_profile_email',
    'apr_profile_phone' => 'apr_profile_phone',
    'apr_profile_room' => 'apr_profile_room',
    'apr_profile_building' => 'apr_profile_building',
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
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_pref_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_middle_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_suffix' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_credentials' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_working_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_rank' => array(
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
    'apr_profile_phone' => array(
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
  );
  $handler->display->display_options['style_options']['caption'] = 'A list of all faculty and staff';
  $handler->display->display_options['style_options']['summary'] = 'A list of all faculty and staff phone, email and campus addresses';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Faculty & Staff Listing</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
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
  /* Filter criterion: Content: Person Type (apr_profile_person_type) */
  $handler->display->display_options['filters']['apr_profile_person_type_value']['id'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['field'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['value'] = array(
    'Faculty' => 'Faculty',
    'Staff' => 'Staff',
  );
  $handler->display->display_options['filters']['apr_profile_person_type_value']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Search by Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Global: Combine fields filter */
  $handler->display->display_options['filters']['combine']['id'] = 'combine';
  $handler->display->display_options['filters']['combine']['table'] = 'views';
  $handler->display->display_options['filters']['combine']['field'] = 'combine';
  $handler->display->display_options['filters']['combine']['group'] = 1;
  $handler->display->display_options['filters']['combine']['exposed'] = TRUE;
  $handler->display->display_options['filters']['combine']['expose']['operator_id'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['label'] = 'Combine fields filter';
  $handler->display->display_options['filters']['combine']['expose']['operator'] = 'combine_op';
  $handler->display->display_options['filters']['combine']['expose']['identifier'] = 'combine';
  $handler->display->display_options['filters']['combine']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['combine']['group_info']['label'] = 'By Category';
  $handler->display->display_options['filters']['combine']['group_info']['identifier'] = 'category';
  $handler->display->display_options['filters']['combine']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Faculty',
      'operator' => 'contains',
      'value' => 'Faculty',
    ),
    2 => array(
      'title' => 'Staff',
      'operator' => 'contains',
      'value' => 'Staff',
    ),
  );
  $handler->display->display_options['filters']['combine']['fields'] = array(
    'apr_profile_person_type' => 'apr_profile_person_type',
  );
  $handler->display->display_options['path'] = 'people';
  
  /* Display: People Page */
  $handler = $view->new_display('page', 'People Page', 'page_apr_profiles');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'apr_profile_phone' => 'apr_profile_phone',
    'apr_profile_email' => 'apr_profile_email',
    'apr_profile_building' => 'apr_profile_building',
  );
  $handler->display->display_options['row_options']['separator'] = '<br/>';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['apr_profile_first_name']['id'] = 'apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['table'] = 'field_data_apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['field'] = 'apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Preferred First Name */
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['id'] = 'apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['table'] = 'field_data_apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['field'] = 'apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['empty'] = '[apr_profile_first_name]';
  /* Field: Content: Middle Name */
  $handler->display->display_options['fields']['apr_profile_middle_name']['id'] = 'apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['table'] = 'field_data_apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['field'] = 'apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_middle_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['text'] = ' [apr_profile_middle_name]';
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['max_length'] = '2';
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['hide_empty'] = TRUE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['apr_profile_last_name']['id'] = 'apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['table'] = 'field_data_apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['field'] = 'apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_last_name']['alter']['text'] = ' [apr_profile_last_name]';
  $handler->display->display_options['fields']['apr_profile_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Suffix */
  $handler->display->display_options['fields']['apr_profile_suffix']['id'] = 'apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['table'] = 'field_data_apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['field'] = 'apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_suffix']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_suffix']['alter']['text'] = ', [apr_profile_suffix]';
  $handler->display->display_options['fields']['apr_profile_suffix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_suffix']['hide_empty'] = TRUE;
  /* Field: Content: Credentials */
  $handler->display->display_options['fields']['apr_profile_credentials']['id'] = 'apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['table'] = 'field_data_apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['field'] = 'apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_credentials']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_credentials']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_credentials']['alter']['text'] = ', [apr_profile_credentials]';
  $handler->display->display_options['fields']['apr_profile_credentials']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_credentials']['hide_empty'] = TRUE;
  /* Field: Custom: Full Name */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Full Name';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]">[apr_profile_pref_first_name][apr_profile_middle_name][apr_profile_last_name][apr_profile_suffix][apr_profile_credentials]</a>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'h3';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Working Title */
  $handler->display->display_options['fields']['apr_profile_working_title']['id'] = 'apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['table'] = 'field_data_apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['field'] = 'apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_working_title']['element_type'] = 'div';
  $handler->display->display_options['fields']['apr_profile_working_title']['element_label_colon'] = FALSE;
  /* Field: Content: Rank */
  $handler->display->display_options['fields']['apr_profile_rank']['id'] = 'apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['table'] = 'field_data_apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['field'] = 'apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_rank']['element_type'] = 'div';
  $handler->display->display_options['fields']['apr_profile_rank']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['apr_profile_email']['id'] = 'apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['table'] = 'field_data_apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['field'] = 'apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_email']['hide_empty'] = TRUE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['apr_profile_phone']['id'] = 'apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['table'] = 'field_data_apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['field'] = 'apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_phone']['alter']['text'] = '<a href="tel:+1-[apr_profile_phone-value]">[apr_profile_phone]</a>';
  $handler->display->display_options['fields']['apr_profile_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_phone']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['apr_profile_building']['hide_empty'] = TRUE;
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
  
  /* Display: Faculty Page */
  $handler = $view->new_display('page', 'Faculty Page', 'page_apr_profiles_faculty');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Faculty';
  $handler->display->display_options['enabled'] = FALSE;
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
  /* Filter criterion: Content: Person Type (apr_profile_person_type) */
  $handler->display->display_options['filters']['apr_profile_person_type_value']['id'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['field'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['value'] = array(
    'Faculty' => 'Faculty',
  );
  $handler->display->display_options['filters']['apr_profile_person_type_value']['group'] = 1;
  $handler->display->display_options['path'] = 'people/faculty';
  
  /* Display: Faculty Attachment */
  $handler = $view->new_display('attachment', 'Faculty Attachment', 'attachment_apr_profiles_faculty');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Faculty Attachment';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Faculty</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
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
  /* Filter criterion: Content: Person Type (apr_profile_person_type) */
  $handler->display->display_options['filters']['apr_profile_person_type_value']['id'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['field'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['value'] = array(
    'Faculty' => 'Faculty',
  );
  $handler->display->display_options['filters']['apr_profile_person_type_value']['group'] = 1;
  $handler->display->display_options['displays'] = array(
    'page_apr_profiles' => 'page_apr_profiles',
    'default' => 0,
    'page_apr_profiles_faculty' => 0,
    'page_apr_profiles_emeritus' => 0,
    'page_apr_profiles_staff' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  
  /* Display: Emeritus Page */
  $handler = $view->new_display('page', 'Emeritus Page', 'page_apr_profiles_emeritus');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Emeritus';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'path' => 'path',
    'apr_profile_first_name' => 'apr_profile_first_name',
    'apr_profile_pref_first_name' => 'apr_profile_pref_first_name',
    'apr_profile_middle_name' => 'apr_profile_middle_name',
    'apr_profile_last_name' => 'apr_profile_last_name',
    'apr_profile_suffix' => 'apr_profile_suffix',
    'apr_profile_credentials' => 'apr_profile_credentials',
    'nothing' => 'nothing',
    'apr_profile_working_title' => 'title',
    'apr_profile_rank' => 'title',
    'apr_profile_email' => 'apr_profile_email',
    'apr_profile_phone' => 'apr_profile_phone',
    'apr_profile_room' => 'apr_profile_room',
    'apr_profile_building' => 'apr_profile_building',
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
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_pref_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_middle_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_suffix' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_credentials' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_working_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_rank' => array(
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
    'apr_profile_phone' => array(
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
  );
  $handler->display->display_options['style_options']['caption'] = 'A list of all emeritus faculty members';
  $handler->display->display_options['style_options']['summary'] = 'A list of all emeritus faculty phone and email addresses';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['apr_profile_first_name']['id'] = 'apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['table'] = 'field_data_apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['field'] = 'apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Preferred First Name */
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['id'] = 'apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['table'] = 'field_data_apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['field'] = 'apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['empty'] = '[apr_profile_first_name]';
  /* Field: Content: Middle Name */
  $handler->display->display_options['fields']['apr_profile_middle_name']['id'] = 'apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['table'] = 'field_data_apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['field'] = 'apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_middle_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['text'] = ' [apr_profile_middle_name]';
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['max_length'] = '2';
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['hide_empty'] = TRUE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['apr_profile_last_name']['id'] = 'apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['table'] = 'field_data_apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['field'] = 'apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_last_name']['alter']['text'] = ' [apr_profile_last_name]';
  $handler->display->display_options['fields']['apr_profile_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Suffix */
  $handler->display->display_options['fields']['apr_profile_suffix']['id'] = 'apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['table'] = 'field_data_apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['field'] = 'apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_suffix']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_suffix']['alter']['text'] = ', [apr_profile_suffix]';
  $handler->display->display_options['fields']['apr_profile_suffix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_suffix']['hide_empty'] = TRUE;
  /* Field: Content: Credentials */
  $handler->display->display_options['fields']['apr_profile_credentials']['id'] = 'apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['table'] = 'field_data_apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['field'] = 'apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_credentials']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_credentials']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_credentials']['alter']['text'] = ', [apr_profile_credentials]';
  $handler->display->display_options['fields']['apr_profile_credentials']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_credentials']['hide_empty'] = TRUE;
  /* Field: Custom: Full Name */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Full Name';
  $handler->display->display_options['fields']['nothing']['label'] = 'Name';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]">[apr_profile_pref_first_name][apr_profile_middle_name][apr_profile_last_name][apr_profile_suffix][apr_profile_credentials]</a>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'h3';
  /* Field: Content: Working Title */
  $handler->display->display_options['fields']['apr_profile_working_title']['id'] = 'apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['table'] = 'field_data_apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['field'] = 'apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_working_title']['element_type'] = 'div';
  $handler->display->display_options['fields']['apr_profile_working_title']['element_label_colon'] = FALSE;
  /* Field: Content: Rank */
  $handler->display->display_options['fields']['apr_profile_rank']['id'] = 'apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['table'] = 'field_data_apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['field'] = 'apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_rank']['element_type'] = 'div';
  $handler->display->display_options['fields']['apr_profile_rank']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['apr_profile_email']['id'] = 'apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['table'] = 'field_data_apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['field'] = 'apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['hide_empty'] = TRUE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['apr_profile_phone']['id'] = 'apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['table'] = 'field_data_apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['field'] = 'apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_phone']['alter']['text'] = '<a href="tel:+1-[apr_profile_phone-value]">[apr_profile_phone]</a>';
  $handler->display->display_options['fields']['apr_profile_phone']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['apr_profile_building']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_building']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_building']['alter']['text'] = '[apr_profile_room][apr_profile_building]';
  $handler->display->display_options['fields']['apr_profile_building']['hide_empty'] = TRUE;
  /* Field: Content: Person Type */
  $handler->display->display_options['fields']['apr_profile_person_type']['id'] = 'apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['field'] = 'apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_person_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_person_type']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Person Type (apr_profile_person_type) */
  $handler->display->display_options['filters']['apr_profile_person_type_value']['id'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['field'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['value'] = array(
    'Emeritus' => 'Emeritus',
  );
  $handler->display->display_options['filters']['apr_profile_person_type_value']['group'] = 1;
  $handler->display->display_options['path'] = 'people/emeritus';
  
  /* Display: Emeritus Attachment */
  $handler = $view->new_display('attachment', 'Emeritus Attachment', 'attachment_apr_profiles_emeritus');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Emeritus Attachment';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'path' => 'path',
    'apr_profile_first_name' => 'apr_profile_first_name',
    'apr_profile_pref_first_name' => 'apr_profile_pref_first_name',
    'apr_profile_middle_name' => 'apr_profile_middle_name',
    'apr_profile_last_name' => 'apr_profile_last_name',
    'apr_profile_suffix' => 'apr_profile_suffix',
    'apr_profile_credentials' => 'apr_profile_credentials',
    'nothing' => 'nothing',
    'apr_profile_working_title' => 'title',
    'apr_profile_rank' => 'title',
    'apr_profile_email' => 'apr_profile_email',
    'apr_profile_phone' => 'apr_profile_phone',
    'apr_profile_room' => 'apr_profile_room',
    'apr_profile_building' => 'apr_profile_building',
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
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_pref_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_middle_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_suffix' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_credentials' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_working_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_rank' => array(
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
    'apr_profile_phone' => array(
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
  );
  $handler->display->display_options['style_options']['caption'] = 'A list of all emeritus faculty members';
  $handler->display->display_options['style_options']['summary'] = 'A list of all emeritus faculty phone and email addresses';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Emeritus Faculty</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['apr_profile_first_name']['id'] = 'apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['table'] = 'field_data_apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['field'] = 'apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Preferred First Name */
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['id'] = 'apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['table'] = 'field_data_apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['field'] = 'apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['empty'] = '[apr_profile_first_name]';
  /* Field: Content: Middle Name */
  $handler->display->display_options['fields']['apr_profile_middle_name']['id'] = 'apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['table'] = 'field_data_apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['field'] = 'apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_middle_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['text'] = ' [apr_profile_middle_name]';
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['max_length'] = '2';
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['hide_empty'] = TRUE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['apr_profile_last_name']['id'] = 'apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['table'] = 'field_data_apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['field'] = 'apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_last_name']['alter']['text'] = ' [apr_profile_last_name]';
  $handler->display->display_options['fields']['apr_profile_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Suffix */
  $handler->display->display_options['fields']['apr_profile_suffix']['id'] = 'apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['table'] = 'field_data_apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['field'] = 'apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_suffix']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_suffix']['alter']['text'] = ', [apr_profile_suffix]';
  $handler->display->display_options['fields']['apr_profile_suffix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_suffix']['hide_empty'] = TRUE;
  /* Field: Content: Credentials */
  $handler->display->display_options['fields']['apr_profile_credentials']['id'] = 'apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['table'] = 'field_data_apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['field'] = 'apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_credentials']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_credentials']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_credentials']['alter']['text'] = ', [apr_profile_credentials]';
  $handler->display->display_options['fields']['apr_profile_credentials']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_credentials']['hide_empty'] = TRUE;
  /* Field: Custom: Full Name */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Full Name';
  $handler->display->display_options['fields']['nothing']['label'] = 'Name';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]">[apr_profile_pref_first_name][apr_profile_middle_name][apr_profile_last_name][apr_profile_suffix][apr_profile_credentials]</a>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'h3';
  /* Field: Content: Working Title */
  $handler->display->display_options['fields']['apr_profile_working_title']['id'] = 'apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['table'] = 'field_data_apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['field'] = 'apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_working_title']['element_type'] = 'div';
  $handler->display->display_options['fields']['apr_profile_working_title']['element_label_colon'] = FALSE;
  /* Field: Content: Rank */
  $handler->display->display_options['fields']['apr_profile_rank']['id'] = 'apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['table'] = 'field_data_apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['field'] = 'apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_rank']['element_type'] = 'div';
  $handler->display->display_options['fields']['apr_profile_rank']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['apr_profile_email']['id'] = 'apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['table'] = 'field_data_apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['field'] = 'apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['hide_empty'] = TRUE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['apr_profile_phone']['id'] = 'apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['table'] = 'field_data_apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['field'] = 'apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_phone']['alter']['text'] = '<a href="tel:+1-[apr_profile_phone-value]">[apr_profile_phone]</a>';
  $handler->display->display_options['fields']['apr_profile_phone']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['apr_profile_building']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_building']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_building']['alter']['text'] = '[apr_profile_room][apr_profile_building]';
  $handler->display->display_options['fields']['apr_profile_building']['hide_empty'] = TRUE;
  /* Field: Content: Person Type */
  $handler->display->display_options['fields']['apr_profile_person_type']['id'] = 'apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['field'] = 'apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_person_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_person_type']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Person Type (apr_profile_person_type) */
  $handler->display->display_options['filters']['apr_profile_person_type_value']['id'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['field'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['value'] = array(
    'Emeritus' => 'Emeritus',
  );
  $handler->display->display_options['filters']['apr_profile_person_type_value']['group'] = 1;
  $handler->display->display_options['displays'] = array(
    'page_apr_profiles' => 'page_apr_profiles',
    'default' => 0,
    'page_apr_profiles_faculty' => 0,
    'page_apr_profiles_staff' => 0,
    'page_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  
  /* Display: Staff Page */
  $handler = $view->new_display('page', 'Staff Page', 'page_apr_profiles_staff');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Staff';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'path' => 'path',
    'apr_profile_first_name' => 'apr_profile_first_name',
    'apr_profile_pref_first_name' => 'apr_profile_pref_first_name',
    'apr_profile_middle_name' => 'apr_profile_middle_name',
    'apr_profile_last_name' => 'apr_profile_last_name',
    'apr_profile_suffix' => 'apr_profile_suffix',
    'apr_profile_credentials' => 'apr_profile_credentials',
    'nothing' => 'nothing',
    'apr_profile_working_title' => 'title',
    'apr_profile_rank' => 'title',
    'apr_profile_email' => 'apr_profile_email',
    'apr_profile_phone' => 'apr_profile_phone',
    'apr_profile_room' => 'apr_profile_room',
    'apr_profile_building' => 'apr_profile_building',
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
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_pref_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_middle_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_suffix' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_credentials' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_working_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_rank' => array(
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
    'apr_profile_phone' => array(
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
  );
  $handler->display->display_options['style_options']['caption'] = 'A list of all staff members';
  $handler->display->display_options['style_options']['summary'] = 'A list of all staff phone, email and campus addresses';
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
  /* Filter criterion: Content: Person Type (apr_profile_person_type) */
  $handler->display->display_options['filters']['apr_profile_person_type_value']['id'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['field'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['value'] = array(
    'Staff' => 'Staff',
  );
  $handler->display->display_options['filters']['apr_profile_person_type_value']['group'] = 1;
  $handler->display->display_options['path'] = 'people/staff';
  
  /* Display: Staff Attachment */
  $handler = $view->new_display('attachment', 'Staff Attachment', 'attachment_apr_profiles_staff');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Staff Attachment';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'path' => 'path',
    'apr_profile_first_name' => 'apr_profile_first_name',
    'apr_profile_pref_first_name' => 'apr_profile_pref_first_name',
    'apr_profile_middle_name' => 'apr_profile_middle_name',
    'apr_profile_last_name' => 'apr_profile_last_name',
    'apr_profile_suffix' => 'apr_profile_suffix',
    'apr_profile_credentials' => 'apr_profile_credentials',
    'nothing' => 'nothing',
    'apr_profile_working_title' => 'title',
    'apr_profile_rank' => 'title',
    'apr_profile_email' => 'apr_profile_email',
    'apr_profile_phone' => 'apr_profile_phone',
    'apr_profile_room' => 'apr_profile_room',
    'apr_profile_building' => 'apr_profile_building',
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
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_pref_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_middle_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_suffix' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_credentials' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_working_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_rank' => array(
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
    'apr_profile_phone' => array(
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
  );
  $handler->display->display_options['style_options']['caption'] = 'A list of all staff members';
  $handler->display->display_options['style_options']['summary'] = 'A list of all staff phone, email and campus addresses';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Staff</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
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
  /* Filter criterion: Content: Person Type (apr_profile_person_type) */
  $handler->display->display_options['filters']['apr_profile_person_type_value']['id'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['field'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['value'] = array(
    'Staff' => 'Staff',
  );
  $handler->display->display_options['filters']['apr_profile_person_type_value']['group'] = 1;
  $handler->display->display_options['displays'] = array(
    'page_apr_profiles' => 'page_apr_profiles',
    'default' => 0,
    'page_apr_profiles_faculty' => 0,
    'page_apr_profiles_emeritus' => 0,
    'page_apr_profiles_staff' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  
  /* Display: Grad Students Page */
  $handler = $view->new_display('page', 'Grad Students Page', 'page_apr_profiles_graduate_students');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Graduate Students';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'path' => 'path',
    'apr_profile_first_name' => 'apr_profile_first_name',
    'apr_profile_pref_first_name' => 'apr_profile_pref_first_name',
    'apr_profile_middle_name' => 'apr_profile_middle_name',
    'apr_profile_last_name' => 'apr_profile_last_name',
    'apr_profile_suffix' => 'apr_profile_suffix',
    'apr_profile_credentials' => 'apr_profile_credentials',
    'nothing' => 'nothing',
    'apr_profile_working_title' => 'title',
    'apr_profile_rank' => 'title',
    'apr_profile_email' => 'apr_profile_email',
    'apr_profile_phone' => 'apr_profile_phone',
    'apr_profile_room' => 'apr_profile_room',
    'apr_profile_building' => 'apr_profile_building',
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
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_pref_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_middle_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_suffix' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_credentials' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_working_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_rank' => array(
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
    'apr_profile_phone' => array(
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
  );
  $handler->display->display_options['style_options']['caption'] = 'A list of all graduate students';
  $handler->display->display_options['style_options']['summary'] = 'A list of all graduate student phone, email and campus addresses';
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
  /* Filter criterion: Content: Person Type (apr_profile_person_type) */
  $handler->display->display_options['filters']['apr_profile_person_type_value']['id'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['field'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['value'] = array(
    'Student' => 'Student',
  );
  $handler->display->display_options['filters']['apr_profile_person_type_value']['group'] = 1;
  $handler->display->display_options['path'] = 'people/graduate-students';
  
  /* Display: Grad Students Attachment */
  $handler = $view->new_display('attachment', 'Grad Students Attachment', 'attachment_apr_profiles_graduate_students');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Graduate Students Attachment';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'path' => 'path',
    'apr_profile_first_name' => 'apr_profile_first_name',
    'apr_profile_pref_first_name' => 'apr_profile_pref_first_name',
    'apr_profile_middle_name' => 'apr_profile_middle_name',
    'apr_profile_last_name' => 'apr_profile_last_name',
    'apr_profile_suffix' => 'apr_profile_suffix',
    'apr_profile_credentials' => 'apr_profile_credentials',
    'nothing' => 'nothing',
    'apr_profile_working_title' => 'title',
    'apr_profile_rank' => 'title',
    'apr_profile_email' => 'apr_profile_email',
    'apr_profile_phone' => 'apr_profile_phone',
    'apr_profile_room' => 'apr_profile_room',
    'apr_profile_building' => 'apr_profile_building',
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
    'path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_pref_first_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_middle_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_last_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_suffix' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_credentials' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_working_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'apr_profile_rank' => array(
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
    'apr_profile_phone' => array(
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
  );
  $handler->display->display_options['style_options']['caption'] = 'A list of all graduate students';
  $handler->display->display_options['style_options']['summary'] = 'A list of all graduate student phone, email and campus addresses';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Graduate Students</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
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
  /* Filter criterion: Content: Person Type (apr_profile_person_type) */
  $handler->display->display_options['filters']['apr_profile_person_type_value']['id'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['field'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['value'] = array(
    'Student' => 'Student',
  );
  $handler->display->display_options['filters']['apr_profile_person_type_value']['group'] = 1;
  $handler->display->display_options['displays'] = array(
    'page_apr_profiles' => 'page_apr_profiles',
    'default' => 0,
    'page_apr_profiles_faculty' => 0,
    'page_apr_profiles_emeritus' => 0,
    'page_apr_profiles_staff' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  
  /* Display: Faculty List Page */
  $handler = $view->new_display('page', 'Faculty List Page', 'page_apr_profiles_faculty_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Faculty';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'apr_profile_phone' => 'apr_profile_phone',
    'apr_profile_email' => 'apr_profile_email',
    'apr_profile_building' => 'apr_profile_building',
  );
  $handler->display->display_options['row_options']['separator'] = '<br/>';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['apr_profile_first_name']['id'] = 'apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['table'] = 'field_data_apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['field'] = 'apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Preferred First Name */
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['id'] = 'apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['table'] = 'field_data_apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['field'] = 'apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['empty'] = '[apr_profile_first_name]';
  /* Field: Content: Middle Name */
  $handler->display->display_options['fields']['apr_profile_middle_name']['id'] = 'apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['table'] = 'field_data_apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['field'] = 'apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_middle_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['text'] = ' [apr_profile_middle_name]';
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['max_length'] = '2';
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['hide_empty'] = TRUE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['apr_profile_last_name']['id'] = 'apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['table'] = 'field_data_apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['field'] = 'apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_last_name']['alter']['text'] = ' [apr_profile_last_name]';
  $handler->display->display_options['fields']['apr_profile_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Suffix */
  $handler->display->display_options['fields']['apr_profile_suffix']['id'] = 'apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['table'] = 'field_data_apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['field'] = 'apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_suffix']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_suffix']['alter']['text'] = ', [apr_profile_suffix]';
  $handler->display->display_options['fields']['apr_profile_suffix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_suffix']['hide_empty'] = TRUE;
  /* Field: Content: Credentials */
  $handler->display->display_options['fields']['apr_profile_credentials']['id'] = 'apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['table'] = 'field_data_apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['field'] = 'apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_credentials']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_credentials']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_credentials']['alter']['text'] = ', [apr_profile_credentials]';
  $handler->display->display_options['fields']['apr_profile_credentials']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_credentials']['hide_empty'] = TRUE;
  /* Field: Custom: Full Name */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Full Name';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]">[apr_profile_pref_first_name][apr_profile_middle_name][apr_profile_last_name][apr_profile_suffix][apr_profile_credentials]</a>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'h3';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Working Title */
  $handler->display->display_options['fields']['apr_profile_working_title']['id'] = 'apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['table'] = 'field_data_apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['field'] = 'apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_working_title']['element_type'] = 'div';
  $handler->display->display_options['fields']['apr_profile_working_title']['element_label_colon'] = FALSE;
  /* Field: Content: Rank */
  $handler->display->display_options['fields']['apr_profile_rank']['id'] = 'apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['table'] = 'field_data_apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['field'] = 'apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_rank']['element_type'] = 'div';
  $handler->display->display_options['fields']['apr_profile_rank']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['apr_profile_email']['id'] = 'apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['table'] = 'field_data_apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['field'] = 'apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_email']['hide_empty'] = TRUE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['apr_profile_phone']['id'] = 'apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['table'] = 'field_data_apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['field'] = 'apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_phone']['alter']['text'] = '<a href="tel:+1-[apr_profile_phone-value]">[apr_profile_phone]</a>';
  $handler->display->display_options['fields']['apr_profile_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_phone']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['apr_profile_building']['hide_empty'] = TRUE;
  /* Field: Content: Person Type */
  $handler->display->display_options['fields']['apr_profile_person_type']['id'] = 'apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['field'] = 'apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_person_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_person_type']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Person Type (apr_profile_person_type) */
  $handler->display->display_options['filters']['apr_profile_person_type_value']['id'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['field'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['value'] = array(
    'Faculty' => 'Faculty',
  );
  $handler->display->display_options['filters']['apr_profile_person_type_value']['group'] = 1;
  $handler->display->display_options['path'] = 'people/faculty';
  
  /* Display: Faculty List Attachment */
  $handler = $view->new_display('attachment', 'Faculty List Attachment', 'attachment_apr_profiles_faculty_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Faculty Attachment';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'apr_profile_phone' => 'apr_profile_phone',
    'apr_profile_email' => 'apr_profile_email',
    'apr_profile_building' => 'apr_profile_building',
  );
  $handler->display->display_options['row_options']['separator'] = '<br/>';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Faculty</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['apr_profile_first_name']['id'] = 'apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['table'] = 'field_data_apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['field'] = 'apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Preferred First Name */
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['id'] = 'apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['table'] = 'field_data_apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['field'] = 'apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['empty'] = '[apr_profile_first_name]';
  /* Field: Content: Middle Name */
  $handler->display->display_options['fields']['apr_profile_middle_name']['id'] = 'apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['table'] = 'field_data_apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['field'] = 'apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_middle_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['text'] = ' [apr_profile_middle_name]';
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['max_length'] = '2';
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['hide_empty'] = TRUE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['apr_profile_last_name']['id'] = 'apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['table'] = 'field_data_apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['field'] = 'apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_last_name']['alter']['text'] = ' [apr_profile_last_name]';
  $handler->display->display_options['fields']['apr_profile_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Suffix */
  $handler->display->display_options['fields']['apr_profile_suffix']['id'] = 'apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['table'] = 'field_data_apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['field'] = 'apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_suffix']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_suffix']['alter']['text'] = ', [apr_profile_suffix]';
  $handler->display->display_options['fields']['apr_profile_suffix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_suffix']['hide_empty'] = TRUE;
  /* Field: Content: Credentials */
  $handler->display->display_options['fields']['apr_profile_credentials']['id'] = 'apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['table'] = 'field_data_apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['field'] = 'apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_credentials']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_credentials']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_credentials']['alter']['text'] = ', [apr_profile_credentials]';
  $handler->display->display_options['fields']['apr_profile_credentials']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_credentials']['hide_empty'] = TRUE;
  /* Field: Custom: Full Name */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Full Name';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]">[apr_profile_pref_first_name][apr_profile_middle_name][apr_profile_last_name][apr_profile_suffix][apr_profile_credentials]</a>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'h3';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Working Title */
  $handler->display->display_options['fields']['apr_profile_working_title']['id'] = 'apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['table'] = 'field_data_apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['field'] = 'apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_working_title']['element_type'] = 'div';
  $handler->display->display_options['fields']['apr_profile_working_title']['element_label_colon'] = FALSE;
  /* Field: Content: Rank */
  $handler->display->display_options['fields']['apr_profile_rank']['id'] = 'apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['table'] = 'field_data_apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['field'] = 'apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_rank']['element_type'] = 'div';
  $handler->display->display_options['fields']['apr_profile_rank']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['apr_profile_email']['id'] = 'apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['table'] = 'field_data_apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['field'] = 'apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_email']['hide_empty'] = TRUE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['apr_profile_phone']['id'] = 'apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['table'] = 'field_data_apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['field'] = 'apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_phone']['alter']['text'] = '<a href="tel:+1-[apr_profile_phone-value]">[apr_profile_phone]</a>';
  $handler->display->display_options['fields']['apr_profile_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_phone']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['apr_profile_building']['hide_empty'] = TRUE;
  /* Field: Content: Person Type */
  $handler->display->display_options['fields']['apr_profile_person_type']['id'] = 'apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['field'] = 'apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_person_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_person_type']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Person Type (apr_profile_person_type) */
  $handler->display->display_options['filters']['apr_profile_person_type_value']['id'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['field'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['value'] = array(
    'Faculty' => 'Faculty',
  );
  $handler->display->display_options['filters']['apr_profile_person_type_value']['group'] = 1;
  $handler->display->display_options['displays'] = array(
    'page_apr_profiles' => 'page_apr_profiles',
    'default' => 0,
    'page_apr_profiles_faculty' => 0,
    'page_apr_profiles_emeritus' => 0,
    'page_apr_profiles_staff' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  
  /* Display: Emeritus List Page */
  $handler = $view->new_display('page', 'Emeritus List Page', 'page_apr_profiles_emeritus_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Emeritus';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'apr_profile_phone' => 'apr_profile_phone',
    'apr_profile_email' => 'apr_profile_email',
    'apr_profile_building' => 'apr_profile_building',
  );
  $handler->display->display_options['row_options']['separator'] = '<br/>';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['apr_profile_first_name']['id'] = 'apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['table'] = 'field_data_apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['field'] = 'apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Preferred First Name */
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['id'] = 'apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['table'] = 'field_data_apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['field'] = 'apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['empty'] = '[apr_profile_first_name]';
  /* Field: Content: Middle Name */
  $handler->display->display_options['fields']['apr_profile_middle_name']['id'] = 'apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['table'] = 'field_data_apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['field'] = 'apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_middle_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['text'] = ' [apr_profile_middle_name]';
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['max_length'] = '2';
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['hide_empty'] = TRUE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['apr_profile_last_name']['id'] = 'apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['table'] = 'field_data_apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['field'] = 'apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_last_name']['alter']['text'] = ' [apr_profile_last_name]';
  $handler->display->display_options['fields']['apr_profile_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Suffix */
  $handler->display->display_options['fields']['apr_profile_suffix']['id'] = 'apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['table'] = 'field_data_apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['field'] = 'apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_suffix']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_suffix']['alter']['text'] = ', [apr_profile_suffix]';
  $handler->display->display_options['fields']['apr_profile_suffix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_suffix']['hide_empty'] = TRUE;
  /* Field: Content: Credentials */
  $handler->display->display_options['fields']['apr_profile_credentials']['id'] = 'apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['table'] = 'field_data_apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['field'] = 'apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_credentials']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_credentials']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_credentials']['alter']['text'] = ', [apr_profile_credentials]';
  $handler->display->display_options['fields']['apr_profile_credentials']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_credentials']['hide_empty'] = TRUE;
  /* Field: Custom: Full Name */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Full Name';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]">[apr_profile_pref_first_name][apr_profile_middle_name][apr_profile_last_name][apr_profile_suffix][apr_profile_credentials]</a>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'h3';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Working Title */
  $handler->display->display_options['fields']['apr_profile_working_title']['id'] = 'apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['table'] = 'field_data_apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['field'] = 'apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_working_title']['element_type'] = 'div';
  $handler->display->display_options['fields']['apr_profile_working_title']['element_label_colon'] = FALSE;
  /* Field: Content: Rank */
  $handler->display->display_options['fields']['apr_profile_rank']['id'] = 'apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['table'] = 'field_data_apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['field'] = 'apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_rank']['element_type'] = 'div';
  $handler->display->display_options['fields']['apr_profile_rank']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['apr_profile_email']['id'] = 'apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['table'] = 'field_data_apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['field'] = 'apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_email']['hide_empty'] = TRUE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['apr_profile_phone']['id'] = 'apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['table'] = 'field_data_apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['field'] = 'apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_phone']['alter']['text'] = '<a href="tel:+1-[apr_profile_phone-value]">[apr_profile_phone]</a>';
  $handler->display->display_options['fields']['apr_profile_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_phone']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['apr_profile_building']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_building']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_building']['alter']['text'] = '[apr_profile_room][apr_profile_building]';
  $handler->display->display_options['fields']['apr_profile_building']['hide_empty'] = TRUE;
  /* Field: Content: Person Type */
  $handler->display->display_options['fields']['apr_profile_person_type']['id'] = 'apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['field'] = 'apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_person_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_person_type']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Person Type (apr_profile_person_type) */
  $handler->display->display_options['filters']['apr_profile_person_type_value']['id'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['field'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['value'] = array(
    'Emeritus' => 'Emeritus',
  );
  $handler->display->display_options['filters']['apr_profile_person_type_value']['group'] = 1;
  $handler->display->display_options['path'] = 'people/emeritus';
  
  /* Display: Emeritus List Attachment */
  $handler = $view->new_display('attachment', 'Emeritus List Attachment', 'attachment_apr_profiles_emeritus_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Emeritus Attachment';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'apr_profile_phone' => 'apr_profile_phone',
    'apr_profile_email' => 'apr_profile_email',
    'apr_profile_building' => 'apr_profile_building',
  );
  $handler->display->display_options['row_options']['separator'] = '<br/>';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Emeritus Faculty</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['apr_profile_first_name']['id'] = 'apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['table'] = 'field_data_apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['field'] = 'apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Preferred First Name */
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['id'] = 'apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['table'] = 'field_data_apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['field'] = 'apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['empty'] = '[apr_profile_first_name]';
  /* Field: Content: Middle Name */
  $handler->display->display_options['fields']['apr_profile_middle_name']['id'] = 'apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['table'] = 'field_data_apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['field'] = 'apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_middle_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['text'] = ' [apr_profile_middle_name]';
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['max_length'] = '2';
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['hide_empty'] = TRUE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['apr_profile_last_name']['id'] = 'apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['table'] = 'field_data_apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['field'] = 'apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_last_name']['alter']['text'] = ' [apr_profile_last_name]';
  $handler->display->display_options['fields']['apr_profile_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Suffix */
  $handler->display->display_options['fields']['apr_profile_suffix']['id'] = 'apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['table'] = 'field_data_apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['field'] = 'apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_suffix']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_suffix']['alter']['text'] = ', [apr_profile_suffix]';
  $handler->display->display_options['fields']['apr_profile_suffix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_suffix']['hide_empty'] = TRUE;
  /* Field: Content: Credentials */
  $handler->display->display_options['fields']['apr_profile_credentials']['id'] = 'apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['table'] = 'field_data_apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['field'] = 'apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_credentials']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_credentials']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_credentials']['alter']['text'] = ', [apr_profile_credentials]';
  $handler->display->display_options['fields']['apr_profile_credentials']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_credentials']['hide_empty'] = TRUE;
  /* Field: Custom: Full Name */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Full Name';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]">[apr_profile_pref_first_name][apr_profile_middle_name][apr_profile_last_name][apr_profile_suffix][apr_profile_credentials]</a>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'h3';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Working Title */
  $handler->display->display_options['fields']['apr_profile_working_title']['id'] = 'apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['table'] = 'field_data_apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['field'] = 'apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_working_title']['element_type'] = 'div';
  $handler->display->display_options['fields']['apr_profile_working_title']['element_label_colon'] = FALSE;
  /* Field: Content: Rank */
  $handler->display->display_options['fields']['apr_profile_rank']['id'] = 'apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['table'] = 'field_data_apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['field'] = 'apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_rank']['element_type'] = 'div';
  $handler->display->display_options['fields']['apr_profile_rank']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['apr_profile_email']['id'] = 'apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['table'] = 'field_data_apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['field'] = 'apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_email']['hide_empty'] = TRUE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['apr_profile_phone']['id'] = 'apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['table'] = 'field_data_apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['field'] = 'apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_phone']['alter']['text'] = '<a href="tel:+1-[apr_profile_phone-value]">[apr_profile_phone]</a>';
  $handler->display->display_options['fields']['apr_profile_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_phone']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['apr_profile_building']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_building']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_building']['alter']['text'] = '[apr_profile_room][apr_profile_building]';
  $handler->display->display_options['fields']['apr_profile_building']['hide_empty'] = TRUE;
  /* Field: Content: Person Type */
  $handler->display->display_options['fields']['apr_profile_person_type']['id'] = 'apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['field'] = 'apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_person_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_person_type']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Person Type (apr_profile_person_type) */
  $handler->display->display_options['filters']['apr_profile_person_type_value']['id'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['field'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['value'] = array(
    'Emeritus' => 'Emeritus',
  );
  $handler->display->display_options['filters']['apr_profile_person_type_value']['group'] = 1;
  $handler->display->display_options['displays'] = array(
    'page_apr_profiles' => 'page_apr_profiles',
    'default' => 0,
    'page_apr_profiles_faculty' => 0,
    'page_apr_profiles_staff' => 0,
    'page_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  
  /* Display: Staff List Page */
  $handler = $view->new_display('page', 'Staff List Page', 'page_apr_profiles_staff_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Staff';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'apr_profile_phone' => 'apr_profile_phone',
    'apr_profile_email' => 'apr_profile_email',
    'apr_profile_building' => 'apr_profile_building',
  );
  $handler->display->display_options['row_options']['separator'] = '<br/>';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['apr_profile_first_name']['id'] = 'apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['table'] = 'field_data_apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['field'] = 'apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Preferred First Name */
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['id'] = 'apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['table'] = 'field_data_apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['field'] = 'apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['empty'] = '[apr_profile_first_name]';
  /* Field: Content: Middle Name */
  $handler->display->display_options['fields']['apr_profile_middle_name']['id'] = 'apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['table'] = 'field_data_apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['field'] = 'apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_middle_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['text'] = ' [apr_profile_middle_name]';
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['max_length'] = '2';
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['hide_empty'] = TRUE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['apr_profile_last_name']['id'] = 'apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['table'] = 'field_data_apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['field'] = 'apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_last_name']['alter']['text'] = ' [apr_profile_last_name]';
  $handler->display->display_options['fields']['apr_profile_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Suffix */
  $handler->display->display_options['fields']['apr_profile_suffix']['id'] = 'apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['table'] = 'field_data_apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['field'] = 'apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_suffix']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_suffix']['alter']['text'] = ', [apr_profile_suffix]';
  $handler->display->display_options['fields']['apr_profile_suffix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_suffix']['hide_empty'] = TRUE;
  /* Field: Content: Credentials */
  $handler->display->display_options['fields']['apr_profile_credentials']['id'] = 'apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['table'] = 'field_data_apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['field'] = 'apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_credentials']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_credentials']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_credentials']['alter']['text'] = ', [apr_profile_credentials]';
  $handler->display->display_options['fields']['apr_profile_credentials']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_credentials']['hide_empty'] = TRUE;
  /* Field: Custom: Full Name */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Full Name';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]">[apr_profile_pref_first_name][apr_profile_middle_name][apr_profile_last_name][apr_profile_suffix][apr_profile_credentials]</a>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'h3';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Working Title */
  $handler->display->display_options['fields']['apr_profile_working_title']['id'] = 'apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['table'] = 'field_data_apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['field'] = 'apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_working_title']['element_type'] = 'div';
  $handler->display->display_options['fields']['apr_profile_working_title']['element_label_colon'] = FALSE;
  /* Field: Content: Rank */
  $handler->display->display_options['fields']['apr_profile_rank']['id'] = 'apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['table'] = 'field_data_apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['field'] = 'apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_rank']['element_type'] = 'div';
  $handler->display->display_options['fields']['apr_profile_rank']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['apr_profile_email']['id'] = 'apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['table'] = 'field_data_apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['field'] = 'apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_email']['hide_empty'] = TRUE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['apr_profile_phone']['id'] = 'apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['table'] = 'field_data_apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['field'] = 'apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_phone']['alter']['text'] = '<a href="tel:+1-[apr_profile_phone-value]">[apr_profile_phone]</a>';
  $handler->display->display_options['fields']['apr_profile_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_phone']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['apr_profile_building']['hide_empty'] = TRUE;
  /* Field: Content: Person Type */
  $handler->display->display_options['fields']['apr_profile_person_type']['id'] = 'apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['field'] = 'apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_person_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_person_type']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Person Type (apr_profile_person_type) */
  $handler->display->display_options['filters']['apr_profile_person_type_value']['id'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['field'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['value'] = array(
    'Staff' => 'Staff',
  );
  $handler->display->display_options['filters']['apr_profile_person_type_value']['group'] = 1;
  $handler->display->display_options['path'] = 'people/staff';
  
  /* Display: Staff List Attachment */
  $handler = $view->new_display('attachment', 'Staff List Attachment', 'attachment_apr_profiles_staff_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Staff Attachment';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'apr_profile_phone' => 'apr_profile_phone',
    'apr_profile_email' => 'apr_profile_email',
    'apr_profile_building' => 'apr_profile_building',
  );
  $handler->display->display_options['row_options']['separator'] = '<br/>';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Staff</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['apr_profile_first_name']['id'] = 'apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['table'] = 'field_data_apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['field'] = 'apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Preferred First Name */
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['id'] = 'apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['table'] = 'field_data_apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['field'] = 'apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['empty'] = '[apr_profile_first_name]';
  /* Field: Content: Middle Name */
  $handler->display->display_options['fields']['apr_profile_middle_name']['id'] = 'apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['table'] = 'field_data_apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['field'] = 'apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_middle_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['text'] = ' [apr_profile_middle_name]';
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['max_length'] = '2';
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['hide_empty'] = TRUE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['apr_profile_last_name']['id'] = 'apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['table'] = 'field_data_apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['field'] = 'apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_last_name']['alter']['text'] = ' [apr_profile_last_name]';
  $handler->display->display_options['fields']['apr_profile_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Suffix */
  $handler->display->display_options['fields']['apr_profile_suffix']['id'] = 'apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['table'] = 'field_data_apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['field'] = 'apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_suffix']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_suffix']['alter']['text'] = ', [apr_profile_suffix]';
  $handler->display->display_options['fields']['apr_profile_suffix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_suffix']['hide_empty'] = TRUE;
  /* Field: Content: Credentials */
  $handler->display->display_options['fields']['apr_profile_credentials']['id'] = 'apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['table'] = 'field_data_apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['field'] = 'apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_credentials']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_credentials']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_credentials']['alter']['text'] = ', [apr_profile_credentials]';
  $handler->display->display_options['fields']['apr_profile_credentials']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_credentials']['hide_empty'] = TRUE;
  /* Field: Custom: Full Name */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Full Name';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]">[apr_profile_pref_first_name][apr_profile_middle_name][apr_profile_last_name][apr_profile_suffix][apr_profile_credentials]</a>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'h3';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Working Title */
  $handler->display->display_options['fields']['apr_profile_working_title']['id'] = 'apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['table'] = 'field_data_apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['field'] = 'apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_working_title']['element_type'] = 'div';
  $handler->display->display_options['fields']['apr_profile_working_title']['element_label_colon'] = FALSE;
  /* Field: Content: Rank */
  $handler->display->display_options['fields']['apr_profile_rank']['id'] = 'apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['table'] = 'field_data_apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['field'] = 'apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_rank']['element_type'] = 'div';
  $handler->display->display_options['fields']['apr_profile_rank']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['apr_profile_email']['id'] = 'apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['table'] = 'field_data_apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['field'] = 'apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_email']['hide_empty'] = TRUE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['apr_profile_phone']['id'] = 'apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['table'] = 'field_data_apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['field'] = 'apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_phone']['alter']['text'] = '<a href="tel:+1-[apr_profile_phone-value]">[apr_profile_phone]</a>';
  $handler->display->display_options['fields']['apr_profile_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_phone']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['apr_profile_building']['hide_empty'] = TRUE;
  /* Field: Content: Person Type */
  $handler->display->display_options['fields']['apr_profile_person_type']['id'] = 'apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['field'] = 'apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_person_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_person_type']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Person Type (apr_profile_person_type) */
  $handler->display->display_options['filters']['apr_profile_person_type_value']['id'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['field'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['value'] = array(
    'Staff' => 'Staff',
  );
  $handler->display->display_options['filters']['apr_profile_person_type_value']['group'] = 1;
  $handler->display->display_options['displays'] = array(
    'page_apr_profiles' => 'page_apr_profiles',
    'default' => 0,
    'page_apr_profiles_faculty' => 0,
    'page_apr_profiles_emeritus' => 0,
    'page_apr_profiles_staff' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  
  /* Display: Grad Students List Page */
  $handler = $view->new_display('page', 'Grad Students List Page', 'page_apr_profiles_graduate_students_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Graduate Students';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'apr_profile_phone' => 'apr_profile_phone',
    'apr_profile_email' => 'apr_profile_email',
    'apr_profile_building' => 'apr_profile_building',
  );
  $handler->display->display_options['row_options']['separator'] = '<br/>';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['apr_profile_first_name']['id'] = 'apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['table'] = 'field_data_apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['field'] = 'apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Preferred First Name */
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['id'] = 'apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['table'] = 'field_data_apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['field'] = 'apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['empty'] = '[apr_profile_first_name]';
  /* Field: Content: Middle Name */
  $handler->display->display_options['fields']['apr_profile_middle_name']['id'] = 'apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['table'] = 'field_data_apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['field'] = 'apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_middle_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['text'] = ' [apr_profile_middle_name]';
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['max_length'] = '2';
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['hide_empty'] = TRUE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['apr_profile_last_name']['id'] = 'apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['table'] = 'field_data_apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['field'] = 'apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_last_name']['alter']['text'] = ' [apr_profile_last_name]';
  $handler->display->display_options['fields']['apr_profile_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Suffix */
  $handler->display->display_options['fields']['apr_profile_suffix']['id'] = 'apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['table'] = 'field_data_apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['field'] = 'apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_suffix']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_suffix']['alter']['text'] = ', [apr_profile_suffix]';
  $handler->display->display_options['fields']['apr_profile_suffix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_suffix']['hide_empty'] = TRUE;
  /* Field: Content: Credentials */
  $handler->display->display_options['fields']['apr_profile_credentials']['id'] = 'apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['table'] = 'field_data_apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['field'] = 'apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_credentials']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_credentials']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_credentials']['alter']['text'] = ', [apr_profile_credentials]';
  $handler->display->display_options['fields']['apr_profile_credentials']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_credentials']['hide_empty'] = TRUE;
  /* Field: Custom: Full Name */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Full Name';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]">[apr_profile_pref_first_name][apr_profile_middle_name][apr_profile_last_name][apr_profile_suffix][apr_profile_credentials]</a>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'h3';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Working Title */
  $handler->display->display_options['fields']['apr_profile_working_title']['id'] = 'apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['table'] = 'field_data_apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['field'] = 'apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_working_title']['element_type'] = 'div';
  $handler->display->display_options['fields']['apr_profile_working_title']['element_label_colon'] = FALSE;
  /* Field: Content: Rank */
  $handler->display->display_options['fields']['apr_profile_rank']['id'] = 'apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['table'] = 'field_data_apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['field'] = 'apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_rank']['element_type'] = 'div';
  $handler->display->display_options['fields']['apr_profile_rank']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['apr_profile_email']['id'] = 'apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['table'] = 'field_data_apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['field'] = 'apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_email']['hide_empty'] = TRUE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['apr_profile_phone']['id'] = 'apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['table'] = 'field_data_apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['field'] = 'apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_phone']['alter']['text'] = '<a href="tel:+1-[apr_profile_phone-value]">[apr_profile_phone]</a>';
  $handler->display->display_options['fields']['apr_profile_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_phone']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['apr_profile_building']['hide_empty'] = TRUE;
  /* Field: Content: Person Type */
  $handler->display->display_options['fields']['apr_profile_person_type']['id'] = 'apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['field'] = 'apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_person_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_person_type']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Person Type (apr_profile_person_type) */
  $handler->display->display_options['filters']['apr_profile_person_type_value']['id'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['field'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['value'] = array(
    'Student' => 'Student',
  );
  $handler->display->display_options['filters']['apr_profile_person_type_value']['group'] = 1;
  $handler->display->display_options['path'] = 'people/graduate-students';
  
  /* Display: Grad Students List Attachment */
  $handler = $view->new_display('attachment', 'Grad Students List Attachment', 'attachment_apr_profiles_graduate_students_list');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Graduate Students Attachment';
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'apr_profile_phone' => 'apr_profile_phone',
    'apr_profile_email' => 'apr_profile_email',
    'apr_profile_building' => 'apr_profile_building',
  );
  $handler->display->display_options['row_options']['separator'] = '<br/>';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Graduate Students</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['apr_profile_first_name']['id'] = 'apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['table'] = 'field_data_apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['field'] = 'apr_profile_first_name';
  $handler->display->display_options['fields']['apr_profile_first_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_first_name']['element_label_colon'] = FALSE;
  /* Field: Content: Preferred First Name */
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['id'] = 'apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['table'] = 'field_data_apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['field'] = 'apr_profile_pref_first_name';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_pref_first_name']['empty'] = '[apr_profile_first_name]';
  /* Field: Content: Middle Name */
  $handler->display->display_options['fields']['apr_profile_middle_name']['id'] = 'apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['table'] = 'field_data_apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['field'] = 'apr_profile_middle_name';
  $handler->display->display_options['fields']['apr_profile_middle_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_middle_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['text'] = ' [apr_profile_middle_name]';
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['max_length'] = '2';
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_middle_name']['hide_empty'] = TRUE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['apr_profile_last_name']['id'] = 'apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['table'] = 'field_data_apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['field'] = 'apr_profile_last_name';
  $handler->display->display_options['fields']['apr_profile_last_name']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_last_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_last_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_last_name']['alter']['text'] = ' [apr_profile_last_name]';
  $handler->display->display_options['fields']['apr_profile_last_name']['element_label_colon'] = FALSE;
  /* Field: Content: Suffix */
  $handler->display->display_options['fields']['apr_profile_suffix']['id'] = 'apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['table'] = 'field_data_apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['field'] = 'apr_profile_suffix';
  $handler->display->display_options['fields']['apr_profile_suffix']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_suffix']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_suffix']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_suffix']['alter']['text'] = ', [apr_profile_suffix]';
  $handler->display->display_options['fields']['apr_profile_suffix']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_suffix']['hide_empty'] = TRUE;
  /* Field: Content: Credentials */
  $handler->display->display_options['fields']['apr_profile_credentials']['id'] = 'apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['table'] = 'field_data_apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['field'] = 'apr_profile_credentials';
  $handler->display->display_options['fields']['apr_profile_credentials']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_credentials']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_credentials']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_credentials']['alter']['text'] = ', [apr_profile_credentials]';
  $handler->display->display_options['fields']['apr_profile_credentials']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_credentials']['hide_empty'] = TRUE;
  /* Field: Custom: Full Name */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['ui_name'] = 'Custom: Full Name';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]">[apr_profile_pref_first_name][apr_profile_middle_name][apr_profile_last_name][apr_profile_suffix][apr_profile_credentials]</a>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'h3';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Working Title */
  $handler->display->display_options['fields']['apr_profile_working_title']['id'] = 'apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['table'] = 'field_data_apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['field'] = 'apr_profile_working_title';
  $handler->display->display_options['fields']['apr_profile_working_title']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_working_title']['element_type'] = 'div';
  $handler->display->display_options['fields']['apr_profile_working_title']['element_label_colon'] = FALSE;
  /* Field: Content: Rank */
  $handler->display->display_options['fields']['apr_profile_rank']['id'] = 'apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['table'] = 'field_data_apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['field'] = 'apr_profile_rank';
  $handler->display->display_options['fields']['apr_profile_rank']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_rank']['element_type'] = 'div';
  $handler->display->display_options['fields']['apr_profile_rank']['element_label_colon'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['apr_profile_email']['id'] = 'apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['table'] = 'field_data_apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['field'] = 'apr_profile_email';
  $handler->display->display_options['fields']['apr_profile_email']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_email']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_email']['hide_empty'] = TRUE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['apr_profile_phone']['id'] = 'apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['table'] = 'field_data_apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['field'] = 'apr_profile_phone';
  $handler->display->display_options['fields']['apr_profile_phone']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_phone']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_phone']['alter']['text'] = '<a href="tel:+1-[apr_profile_phone-value]">[apr_profile_phone]</a>';
  $handler->display->display_options['fields']['apr_profile_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['apr_profile_phone']['hide_empty'] = TRUE;
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
  $handler->display->display_options['fields']['apr_profile_building']['hide_empty'] = TRUE;
  /* Field: Content: Person Type */
  $handler->display->display_options['fields']['apr_profile_person_type']['id'] = 'apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['field'] = 'apr_profile_person_type';
  $handler->display->display_options['fields']['apr_profile_person_type']['label'] = '';
  $handler->display->display_options['fields']['apr_profile_person_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['apr_profile_person_type']['element_label_colon'] = FALSE;
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
  /* Filter criterion: Content: Person Type (apr_profile_person_type) */
  $handler->display->display_options['filters']['apr_profile_person_type_value']['id'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['table'] = 'field_data_apr_profile_person_type';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['field'] = 'apr_profile_person_type_value';
  $handler->display->display_options['filters']['apr_profile_person_type_value']['value'] = array(
    'Student' => 'Student',
  );
  $handler->display->display_options['filters']['apr_profile_person_type_value']['group'] = 1;
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
