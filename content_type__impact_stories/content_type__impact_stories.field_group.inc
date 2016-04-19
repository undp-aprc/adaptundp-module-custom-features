<?php
/**
 * @file
 * content_type__impact_stories.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type__impact_stories_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_data|node|impact|form';
  $field_group->group_name = 'group_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'impact';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Themes and Data',
    'weight' => '3',
    'children' => array(
      0 => 'group_themes',
      1 => 'group_location',
      2 => 'group_media',
      3 => 'group_impacts',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-data field-group-tabs',
      ),
    ),
  );
  $export['group_data|node|impact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_impacts|node|impact|form';
  $field_group->group_name = 'group_impacts';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'impact';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_data';
  $field_group->data = array(
    'label' => 'Impacts',
    'weight' => '21',
    'children' => array(
      0 => 'field_impacts',
      1 => 'field_quantitative_impacts',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-impacts field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_impacts|node|impact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|impact|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'impact';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_data';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '26',
    'children' => array(
      0 => 'field_region',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-location field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_location|node|impact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_media|node|impact|form';
  $field_group->group_name = 'group_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'impact';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_data';
  $field_group->data = array(
    'label' => 'Media',
    'weight' => '24',
    'children' => array(
      0 => 'field_display_photo',
      1 => 'field_thumbnail',
      2 => 'field_infographic',
      3 => 'field_featured_video',
      4 => 'field_exposure_story',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-media field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_media|node|impact|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_themes|node|impact|form';
  $field_group->group_name = 'group_themes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'impact';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_data';
  $field_group->data = array(
    'label' => 'Relationships and Themes',
    'weight' => '25',
    'children' => array(
      0 => 'field_project',
      1 => 'field_impact_theme',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Relationships and Themes',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-themes field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_themes|node|impact|form'] = $field_group;

  return $export;
}
