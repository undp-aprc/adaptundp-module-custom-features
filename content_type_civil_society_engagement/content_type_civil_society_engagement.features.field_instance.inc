<?php
/**
 * @file
 * content_type_civil_society_engagement.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function content_type_civil_society_engagement_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-civil_society_engagement-body'.
  $field_instances['node-civil_society_engagement-body'] = array(
    'bundle' => 'civil_society_engagement',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Describe how Civil Society Engagement has occurred in relation to this project to help achieve project outcomes.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Description/Narrative',
    'required' => 1,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-civil_society_engagement-field_project'.
  $field_instances['node-civil_society_engagement-field_project'] = array(
    'bundle' => 'civil_society_engagement',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Civil Society Engagement content must be linked to (associated with) an existing project.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'node_reference',
        'settings' => array(),
        'type' => 'node_reference_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_project',
    'label' => 'Related Project',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'node_reference',
      'settings' => array(
        'autocomplete_match' => 'contains',
        'autocomplete_path' => 'node_reference/autocomplete',
        'references_dialog_add' => 0,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'node_reference_autocomplete',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Civil Society Engagement content must be linked to (associated with) an existing project.');
  t('Describe how Civil Society Engagement has occurred in relation to this project to help achieve project outcomes.');
  t('Description/Narrative');
  t('Related Project');

  return $field_instances;
}
