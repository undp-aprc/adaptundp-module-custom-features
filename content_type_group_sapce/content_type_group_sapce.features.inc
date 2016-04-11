<?php
/**
 * @file
 * content_type_group_sapce.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_group_sapce_node_info() {
  $items = array(
    'group_spaces' => array(
      'name' => t('Group Spaces'),
      'base' => 'node_content',
      'description' => t('A space that can be used to aggregate content for a select group of users. The space and its content can also be password protected with access restricted to group members.'),
      'has_title' => '1',
      'title_label' => t('Group Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
