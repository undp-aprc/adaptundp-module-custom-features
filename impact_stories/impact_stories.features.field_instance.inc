<?php
/**
 * @file
 * impact_stories.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function impact_stories_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-impact_story_themes-field_thumbnail'
  $field_instances['taxonomy_term-impact_story_themes-field_thumbnail'] = array(
    'bundle' => 'impact_story_themes',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'country_and_flag' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'signature_programme_header' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'signature_programme_summary_medium_photo' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'signature_programme_summary_small_photo' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_thumbnail',
    'label' => 'Thumbnail',
    'required' => 1,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => 'taxonomy/impact-stories/thumbnail',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => '1-1_medium_scaled_cropped_400x400',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Thumbnail');

  return $field_instances;
}
