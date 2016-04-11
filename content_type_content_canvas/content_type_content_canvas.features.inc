<?php
/**
 * @file
 * content_type_content_canvas.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_content_canvas_node_info() {
  $items = array(
    'content_canvas' => array(
      'name' => t('Content Canvas'),
      'base' => 'node_content',
      'description' => t('Canvas pages can be presented with custom layouts and blocks to create extra landing pages for project sub-sites.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
