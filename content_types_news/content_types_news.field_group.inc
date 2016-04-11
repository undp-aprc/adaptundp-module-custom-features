<?php
/**
 * @file
 * content_types_news.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function content_types_news_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_classification|node|news|form';
  $field_group->group_name = 'group_classification';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'News Theme and Classification',
    'weight' => '16',
    'children' => array(
      0 => 'field_project',
      1 => 'field_region',
      2 => 'field_related_resource',
      3 => 'field_signature_programmes',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-classification field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_classification|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact_details|node|news|form';
  $field_group->group_name = 'group_contact_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Contact Details',
    'weight' => '15',
    'children' => array(
      0 => 'field_contact_details',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-contact-details field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contact_details|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_details|node|news|form';
  $field_group->group_name = 'group_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'News Details',
    'weight' => '2',
    'children' => array(
      0 => 'group_photo',
      1 => 'group_contact_details',
      2 => 'group_classification',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-details field-group-tabs',
      ),
    ),
  );
  $export['group_details|node|news|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_photo|node|news|form';
  $field_group->group_name = 'group_photo';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'news';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_details';
  $field_group->data = array(
    'label' => 'Photo',
    'weight' => '14',
    'children' => array(
      0 => 'field_photo',
      1 => 'field_photo_caption',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-photo field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_photo|node|news|form'] = $field_group;

  return $export;
}
