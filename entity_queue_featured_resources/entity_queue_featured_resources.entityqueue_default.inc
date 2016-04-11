<?php
/**
 * @file
 * entity_queue_featured_resources.entityqueue_default.inc
 */

/**
 * Implements hook_entityqueue_default_queues().
 */
function entity_queue_featured_resources_entityqueue_default_queues() {
  $export = array();

  $queue = new EntityQueue();
  $queue->disabled = FALSE; /* Edit this to true to make a default queue disabled initially */
  $queue->api_version = 1;
  $queue->name = 'featured_resources';
  $queue->label = 'Featured Resources';
  $queue->language = 'en';
  $queue->handler = 'simple';
  $queue->target_type = 'node';
  $queue->settings = array(
    'target_bundles' => array(
      'resource' => 'resource',
    ),
    'min_size' => '0',
    'max_size' => '0',
    'act_as_queue' => 0,
  );
  $export['featured_resources'] = $queue;

  return $export;
}
