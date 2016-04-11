<?php
/**
 * @file
 * content_type_resource.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_resource_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_resource_node_info() {
  $items = array(
    'resource' => array(
      'name' => t('Resource'),
      'base' => 'node_content',
      'description' => t('Share a resource. Resources are printed or electronic materials that can be used to communicate information about UNDP\'s Climate Change projects or provide education or learning materials.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
