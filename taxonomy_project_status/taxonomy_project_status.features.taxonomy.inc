<?php
/**
 * @file
 * taxonomy_project_status.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy_project_status_taxonomy_default_vocabularies() {
  return array(
    'project_status' => array(
      'name' => 'Project Status',
      'machine_name' => 'project_status',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
