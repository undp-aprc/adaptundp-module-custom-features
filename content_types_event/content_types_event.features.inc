<?php
/**
 * @file
 * content_types_event.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_types_event_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('Create pages to promote upcoming events, such as training workshops, meetings and conventions.'),
      'has_title' => '1',
      'title_label' => t('Event Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
