<?php
/**
 * @file
 * civil_society_engagement.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function civil_society_engagement_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'civil_society_engagement';
  $view->description = 'Displays a civil society engagement map';
  $view->tag = 'Civil Society Engagement';
  $view->base_table = 'node';
  $view->human_name = 'Civil Society Engagement';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'How UNDP engages with Civil Society';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'leaflet';
  $handler->display->display_options['style_options']['entity_type'] = 'node';
  $handler->display->display_options['style_options']['data_source'] = 'field_coordinates';
  $handler->display->display_options['style_options']['name_field'] = 'title';
  $handler->display->display_options['style_options']['description_field'] = 'body';
  $handler->display->display_options['style_options']['map'] = 'esri-natgeo_world_map';
  $handler->display->display_options['style_options']['height'] = '600';
  $handler->display->display_options['style_options']['hide_empty'] = 0;
  $handler->display->display_options['style_options']['zoom']['initialZoom'] = '-1';
  $handler->display->display_options['style_options']['zoom']['minZoom'] = '4';
  $handler->display->display_options['style_options']['zoom']['maxZoom'] = '12';
  $handler->display->display_options['style_options']['vector_display']['stroke'] = 0;
  $handler->display->display_options['style_options']['vector_display']['fill'] = 0;
  $handler->display->display_options['style_options']['vector_display']['clickable'] = 0;
  /* Relationship: Content: Related Project (field_project) */
  $handler->display->display_options['relationships']['field_project_nid']['id'] = 'field_project_nid';
  $handler->display->display_options['relationships']['field_project_nid']['table'] = 'field_data_field_project';
  $handler->display->display_options['relationships']['field_project_nid']['field'] = 'field_project_nid';
  $handler->display->display_options['relationships']['field_project_nid']['label'] = 'Related Project';
  $handler->display->display_options['relationships']['field_project_nid']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_project_nid']['delta'] = '-1';
  /* Relationship: Content: Country/Region (field_region) */
  $handler->display->display_options['relationships']['field_region_tid']['id'] = 'field_region_tid';
  $handler->display->display_options['relationships']['field_region_tid']['table'] = 'field_data_field_region';
  $handler->display->display_options['relationships']['field_region_tid']['field'] = 'field_region_tid';
  $handler->display->display_options['relationships']['field_region_tid']['relationship'] = 'field_project_nid';
  $handler->display->display_options['relationships']['field_region_tid']['label'] = 'Country';
  $handler->display->display_options['relationships']['field_region_tid']['required'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_project_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Masthead Photo */
  $handler->display->display_options['fields']['field_display_photo']['id'] = 'field_display_photo';
  $handler->display->display_options['fields']['field_display_photo']['table'] = 'field_data_field_display_photo';
  $handler->display->display_options['fields']['field_display_photo']['field'] = 'field_display_photo';
  $handler->display->display_options['fields']['field_display_photo']['relationship'] = 'field_project_nid';
  $handler->display->display_options['fields']['field_display_photo']['label'] = '';
  $handler->display->display_options['fields']['field_display_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_display_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_display_photo']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Field: Coordinates */
  $handler->display->display_options['fields']['field_coordinates']['id'] = 'field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['table'] = 'field_data_field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['field'] = 'field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['relationship'] = 'field_region_tid';
  $handler->display->display_options['fields']['field_coordinates']['label'] = '';
  $handler->display->display_options['fields']['field_coordinates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coordinates']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_coordinates']['settings'] = array(
    'data' => 'full',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
    'civil_society_engagement' => 'civil_society_engagement',
  );

  /* Display: Civil Society Engagement Map */
  $handler = $view->new_display('page', 'Civil Society Engagement Map', 'page_1');
  $handler->display->display_options['path'] = 'civil-society-engagement-map';
  $translatables['civil_society_engagement'] = array(
    t('Master'),
    t('How UNDP engages with Civil Society'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Related Project'),
    t('Country'),
    t('Civil Society Engagement Map'),
  );
  $export['civil_society_engagement'] = $view;

  $view = new view();
  $view->name = 'civil_society_engagement_display';
  $view->description = 'Display civil society engagement content';
  $view->tag = 'Civil Society Engagement';
  $view->base_table = 'node';
  $view->human_name = 'Civil Society Engagement Content Display';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'panelizer_node_view';
  $handler->display->display_options['row_options']['view_mode'] = 'full';
  $handler->display->display_options['row_options']['render_anything'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Related Project (field_project) */
  $handler->display->display_options['arguments']['field_project_nid']['id'] = 'field_project_nid';
  $handler->display->display_options['arguments']['field_project_nid']['table'] = 'field_data_field_project';
  $handler->display->display_options['arguments']['field_project_nid']['field'] = 'field_project_nid';
  $handler->display->display_options['arguments']['field_project_nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_project_nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['field_project_nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_project_nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_project_nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_project_nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_project_nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_project_nid']['validate_options']['types'] = array(
    'project' => 'project',
  );
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
    'civil_society_engagement' => 'civil_society_engagement',
  );

  /* Display: Civil Society Engagement Display */
  $handler = $view->new_display('panel_pane', 'Civil Society Engagement Display', 'panel_pane_1');
  $handler->display->display_options['display_description'] = 'Display a rendered entity for Civil Society Engagement';
  $handler->display->display_options['pane_category']['name'] = 'Civil Society Engagement';
  $handler->display->display_options['pane_category']['weight'] = '0';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 'link_to_view';
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'field_project_nid' => array(
      'type' => 'panel',
      'context' => 'entity:comment.body',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Related Project (field_project)',
    ),
  );
  $translatables['civil_society_engagement_display'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Civil Society Engagement Display'),
    t('Display a rendered entity for Civil Society Engagement'),
    t('Civil Society Engagement'),
  );
  $export['civil_society_engagement_display'] = $view;

  return $export;
}
