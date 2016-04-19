<?php
/**
 * @file
 * content_type__impact_stories.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type__impact_stories_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type__impact_stories_node_info() {
  $items = array(
    'impact' => array(
      'name' => t('Impact Stories'),
      'base' => 'node_content',
      'description' => t('Showcase the impacts of UNDP Climate Change Programme'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
