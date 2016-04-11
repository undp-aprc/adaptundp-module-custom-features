<?php
/**
 * @file
 * taxonomy_signature_programs.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function taxonomy_signature_programs_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'taxonomy_term-signature_programmes-field_program_preview_img'
  $field_instances['taxonomy_term-signature_programmes-field_program_preview_img'] = array(
    'bundle' => 'signature_programmes',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'country_and_flag' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 1,
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
      'full' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '4-3_landscape_medium_scaled_cropped_400x300',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'signature_programme_header' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '4-3_landscape_large_scaled_cropped_800x600',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'signature_programme_summary' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '4-3_landscape_medium_scaled_cropped_400x300',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'signature_programme_summary_medium_photo' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '4-3_landscape_medium_scaled_cropped_400x300',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'signature_programme_summary_small_photo' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '4-3_landscape_small_scaled_cropped_100x75',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'taxonomy_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '4-3_landscape_large_scaled_cropped_800x600',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_program_preview_img',
    'label' => 'Preview Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '420x315',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'taxonomy_term-signature_programmes-field_summary'
  $field_instances['taxonomy_term-signature_programmes-field_summary'] = array(
    'bundle' => 'signature_programmes',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Provide a short summary (approx 25 words) to describe the nature and purpose of this signature programme or sub-programme. This will be displayed prominently in places, such as taxonomy term pages and slideshows, to give visitors a quick orientation on UNDP\'s branding and activities.',
    'display' => array(
      'country_and_flag' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'signature_programme_header' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'signature_programme_summary' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'signature_programme_summary_medium_photo' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'signature_programme_summary_small_photo' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'taxonomy_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_summary',
    'label' => 'Summary',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Preview Image');
  t('Provide a short summary (approx 25 words) to describe the nature and purpose of this signature programme or sub-programme. This will be displayed prominently in places, such as taxonomy term pages and slideshows, to give visitors a quick orientation on UNDP\'s branding and activities.');
  t('Summary');

  return $field_instances;
}
