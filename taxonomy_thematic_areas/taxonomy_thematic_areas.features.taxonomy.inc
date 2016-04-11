<?php
/**
 * @file
 * taxonomy_thematic_areas.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy_thematic_areas_taxonomy_default_vocabularies() {
  return array(
    'thematic_areas' => array(
      'name' => 'Thematic Areas',
      'machine_name' => 'thematic_areas',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
