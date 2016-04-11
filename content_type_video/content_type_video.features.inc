<?php
/**
 * @file
 * content_type_video.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function content_type_video_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function content_type_video_node_info() {
  $items = array(
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => t('Share videos about UNDP\'s projects and partner engagement. These videos must have been published to YouTube before creating video content and require a valid YouTube video ID (can be obtained from YouTube)'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
