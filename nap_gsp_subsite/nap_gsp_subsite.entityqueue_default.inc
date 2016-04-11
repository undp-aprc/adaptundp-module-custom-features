<?php
/**
 * @file
 * nap_gsp_subsite.entityqueue_default.inc
 */

/**
 * Implements hook_entityqueue_default_queues().
 */
function nap_gsp_subsite_entityqueue_default_queues() {
  $export = array();

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'nap_gsp_page_slider';
  $queue->label = 'NAP-GSP Page Slider';
  $queue->language = 'en';
  $queue->handler = 'simple';
  $queue->target_type = 'node';
  $queue->settings = array(
    'target_bundles' => array(
      'page' => 'page',
      'news' => 'news',
    ),
    'min_size' => '0',
    'max_size' => '5',
    'act_as_queue' => 0,
  );
  $export['nap_gsp_page_slider'] = $queue;

  return $export;
}
