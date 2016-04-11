<?php
/**
 * @file
 * content_type_project.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_project_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contacts|node|project|full';
  $field_group->group_name = 'group_contacts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contacts',
    'weight' => '10',
    'children' => array(
      0 => 'field_project_contacts',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Contacts',
      'instance_settings' => array(
        'id' => 'tab-contacts',
        'classes' => 'group-contacts field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_contacts|node|project|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_country_initiatives|node|project|full';
  $field_group->group_name = 'group_country_initiatives';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Country Initiatives',
    'weight' => '4',
    'children' => array(
      0 => 'field_project_countries',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Country Initiatives',
      'instance_settings' => array(
        'id' => 'tab-country-initiatives',
        'classes' => 'group-country-initiatives field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_country_initiatives|node|project|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details_panel|node|project|full';
  $field_group->group_name = 'group_details_panel';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_project_details';
  $field_group->data = array(
    'label' => 'Details Panel',
    'weight' => '3',
    'children' => array(
      0 => 'field_beneficiaries',
      1 => 'field_cofinancing_total',
      2 => 'field_financing_amount',
      3 => 'field_funding_source',
      4 => 'field_key_collaborators',
      5 => 'field_level_of_intervention',
      6 => 'field_thematic_area',
      7 => 'field_climate_hazards',
      8 => 'field_partners',
      9 => 'field_location',
      10 => 'field_signature_programmes',
      11 => 'field_project_status',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Details Panel',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-details-panel field-group-div panel panel-default panel-body',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_details_panel|node|project|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_information|node|project|form';
  $field_group->group_name = 'group_information';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_media';
  $field_group->data = array(
    'label' => 'Information Sections',
    'weight' => '5',
    'children' => array(
      0 => 'field_links',
      1 => 'field_project_about',
      2 => 'field_project_contacts',
      3 => 'field_project_monitoring',
      4 => 'field_project_results_outputs',
      5 => 'field_upcoming_events',
      6 => 'field_project_updates',
      7 => 'field_project_french',
      8 => 'field_project_about_summary',
      9 => 'field_project_results_summary',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-information field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_information|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_key_results|node|project|full';
  $field_group->group_name = 'group_key_results';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Key Results and Outputs',
    'weight' => '5',
    'children' => array(
      0 => 'field_project_results_outputs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Key Results and Outputs',
      'instance_settings' => array(
        'id' => 'tab-key-results',
        'classes' => 'group-key-results field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_key_results|node|project|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_links|node|project|full';
  $field_group->group_name = 'group_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Links',
    'weight' => '9',
    'children' => array(
      0 => 'field_links',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Links',
      'instance_settings' => array(
        'id' => 'tab-links',
        'classes' => 'group-links field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_links|node|project|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_meetings|node|project|full';
  $field_group->group_name = 'group_meetings';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Programme Meetings and Workshops',
    'weight' => '8',
    'children' => array(
      0 => 'field_upcoming_events',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Programme Meetings and Workshops',
      'instance_settings' => array(
        'id' => 'tab-meetings',
        'classes' => 'group-meetings field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_meetings|node|project|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_monitoring|node|project|full';
  $field_group->group_name = 'group_monitoring';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Monitoring & Evaluation',
    'weight' => '7',
    'children' => array(
      0 => 'field_project_monitoring',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Monitoring & Evaluation',
      'instance_settings' => array(
        'id' => 'tab-monitoring',
        'classes' => 'group-monitoring field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_monitoring|node|project|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_multimedia|node|project|full';
  $field_group->group_name = 'group_multimedia';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Multimedia',
    'weight' => '6',
    'children' => array(
      0 => 'field_featured_video',
      1 => 'videos_eva_project_videos',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Multimedia',
      'instance_settings' => array(
        'id' => 'tab-multimedia',
        'classes' => 'group-multimedia field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_multimedia|node|project|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_news|node|project|full';
  $field_group->group_name = 'group_news';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'News',
    'weight' => '3',
    'children' => array(
      0 => 'field_project_updates',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'News',
      'instance_settings' => array(
        'id' => 'tab-news',
        'classes' => 'group-news field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_news|node|project|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_classification|node|project|form';
  $field_group->group_name = 'group_project_classification';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_details';
  $field_group->data = array(
    'label' => 'Project Themes & Classification',
    'weight' => '50',
    'children' => array(
      0 => 'field_level_of_intervention',
      1 => 'field_thematic_area',
      2 => 'field_climate_hazards',
      3 => 'field_signature_programmes',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-project-classification field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_project_classification|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_data|node|project|form';
  $field_group->group_name = 'group_project_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_details';
  $field_group->data = array(
    'label' => 'Project Data',
    'weight' => '51',
    'children' => array(
      0 => 'field_beneficiaries',
      1 => 'field_cofinancing_total',
      2 => 'field_financing_amount',
      3 => 'field_funding_source',
      4 => 'field_key_collaborators',
      5 => 'field_partners',
      6 => 'field_funding_source_short_code',
      7 => 'field_project_status',
      8 => 'field_agencies',
      9 => 'field_project_dates',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-project-data field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_project_data|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_details|node|project|form';
  $field_group->group_name = 'group_project_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project Detals',
    'weight' => '4',
    'children' => array(
      0 => 'group_project_classification',
      1 => 'group_project_data',
      2 => 'group_project_related',
      3 => 'group_project_location',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-project-details field-group-tabs',
      ),
    ),
  );
  $export['group_project_details|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_details|node|project|full';
  $field_group->group_name = 'group_project_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project Details',
    'weight' => '2',
    'children' => array(
      0 => 'field_project_about',
      1 => 'group_details_panel',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Project Details',
      'instance_settings' => array(
        'id' => 'tab-project-details',
        'classes' => 'group-project-details field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_project_details|node|project|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_location|node|project|form';
  $field_group->group_name = 'group_project_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_details';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '53',
    'children' => array(
      0 => 'field_coordinates',
      1 => 'field_region',
      2 => 'field_location',
      3 => 'field_map_caption',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-project-location field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_project_location|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_media|node|project|form';
  $field_group->group_name = 'group_project_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content & Media',
    'weight' => '5',
    'children' => array(
      0 => 'group_information',
      1 => 'group_project_multimedia',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-project-media field-group-tabs',
      ),
    ),
  );
  $export['group_project_media|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_multimedia|node|project|form';
  $field_group->group_name = 'group_project_multimedia';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_media';
  $field_group->data = array(
    'label' => 'Multimedia',
    'weight' => '6',
    'children' => array(
      0 => 'field_project_photos',
      1 => 'field_featured_video',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-project-multimedia field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_project_multimedia|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project_related|node|project|form';
  $field_group->group_name = 'group_project_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_project_details';
  $field_group->data = array(
    'label' => 'Related Projects',
    'weight' => '52',
    'children' => array(
      0 => 'field_project_countries',
      1 => 'field_related_project',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-project-related field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_project_related|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_summary|node|project|full';
  $field_group->group_name = 'group_summary';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Overview',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_project_photos',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Overview',
      'instance_settings' => array(
        'id' => 'tab-summary',
        'classes' => 'group-summary field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_summary|node|project|full'] = $field_group;

  return $export;
}
