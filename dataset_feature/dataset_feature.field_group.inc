<?php
/**
 * @file
 * dataset_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function dataset_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_analysis|node|datasets|form';
  $field_group->group_name = 'group_analysis';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'datasets';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Analysis & Reports',
    'weight' => '35',
    'children' => array(
      0 => 'field_related_resource',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-analysis field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_analysis|node|datasets|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|datasets|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'datasets';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dataset Content & Metadata',
    'weight' => '1',
    'children' => array(
      0 => 'group_overview',
      1 => 'group_analysis',
      2 => 'group_data_datasets',
      3 => 'group_tools',
      4 => 'group_metadata',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-content field-group-tabs',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_content|node|datasets|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_data_datasets|node|datasets|form';
  $field_group->group_name = 'group_data_datasets';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'datasets';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Datasets',
    'weight' => '36',
    'children' => array(
      0 => 'field_data_datasets',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-data-datasets field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_data_datasets|node|datasets|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_metadata|node|datasets|form';
  $field_group->group_name = 'group_metadata';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'datasets';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Metadata',
    'weight' => '38',
    'children' => array(
      0 => 'field_country',
      1 => 'field_related_project',
      2 => 'field_theme',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-metadata field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_metadata|node|datasets|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_overview|node|datasets|form';
  $field_group->group_name = 'group_overview';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'datasets';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Overview',
    'weight' => '34',
    'children' => array(
      0 => 'body',
      1 => 'field_data_collection',
      2 => 'field_data_analysis',
      3 => 'field_data_methodology',
      4 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-overview field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_overview|node|datasets|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tools|node|datasets|form';
  $field_group->group_name = 'group_tools';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'datasets';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_content';
  $field_group->data = array(
    'label' => 'Tools & Appendix',
    'weight' => '37',
    'children' => array(
      0 => 'field_data_tools',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tools field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_tools|node|datasets|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Analysis & Reports');
  t('Dataset Content & Metadata');
  t('Datasets');
  t('Metadata');
  t('Overview');
  t('Tools & Appendix');

  return $field_groups;
}
