<?php
/**
 * @file
 * content_type_resource.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_type_resource_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|resource|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource Details',
    'weight' => '3',
    'children' => array(
      0 => 'group_files',
      1 => 'group_themes',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-details field-group-tabs',
      ),
    ),
  );
  $export['group_details|node|resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_files|node|resource|form';
  $field_group->group_name = 'group_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Resources Files',
    'weight' => '14',
    'children' => array(
      0 => 'field_download',
      1 => 'field_external_link',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Resources Files',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-files field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_files|node|resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_themes|node|resource|form';
  $field_group->group_name = 'group_themes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Resource Themes and Classifications',
    'weight' => '15',
    'children' => array(
      0 => 'field_region',
      1 => 'field_resource_project',
      2 => 'field_resource_type',
      3 => 'field_featured_publication',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-themes field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_themes|node|resource|form'] = $field_group;

  return $export;
}
