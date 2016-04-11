<?php
/**
 * @file
 * content_types_deprecated_content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_types_deprecated_content_types_node_info() {
  $items = array(
    'carousel' => array(
      'name' => t('Carousel'),
      'base' => 'node_content',
      'description' => t('DEPRECATED!! DO NOT USE. THIS HAS NO FUNCTION IN THE NEW SITE AND WILL BE REMOVED IN THE NEAR FUTURE.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'internal_documentation' => array(
      'name' => t('Internal Documentation'),
      'base' => 'node_content',
      'description' => t('DEPRECATED!! DO NOT USE. THIS HAS NO FUNCTION IN THE NEW SITE AND WILL BE REMOVED IN THE NEAR FUTURE.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'rotating_feature' => array(
      'name' => t('Rotating Feature'),
      'base' => 'node_content',
      'description' => t('DEPRECATED!! DO NOT USE. THIS HAS NO FUNCTION IN THE NEW SITE AND WILL BE REMOVED IN THE NEAR FUTURE.
To update what UNDP has been doing, please use the \'News\' content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('DEPRECATED!! DO NOT USE. THIS HAS NO FUNCTION IN THE NEW SITE AND WILL BE REMOVED IN THE NEAR FUTURE.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
