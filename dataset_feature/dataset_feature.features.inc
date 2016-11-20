<?php
/**
 * @file
 * dataset_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dataset_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dataset_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dataset_feature_node_info() {
  $items = array(
    'datasets' => array(
      'name' => t('Datasets'),
      'base' => 'node_content',
      'description' => t('Used to store datasets created from research conducted under the Adaptation Portfolio.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
