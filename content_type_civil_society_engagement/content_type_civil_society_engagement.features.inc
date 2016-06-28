<?php
/**
 * @file
 * content_type_civil_society_engagement.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_civil_society_engagement_node_info() {
  $items = array(
    'civil_society_engagement' => array(
      'name' => t('Civil Society Engagement'),
      'base' => 'node_content',
      'description' => t('Add information about how UNDP engages with Civil Society to achieve project outcomes.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
