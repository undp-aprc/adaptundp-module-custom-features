<?php
/**
 * @file
 * taxonomy_location.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy_location_taxonomy_default_vocabularies() {
  return array(
    'location' => array(
      'name' => 'Location',
      'machine_name' => 'location',
      'description' => 'A taxonomy for Projects, specifying if it is Urban, Rural or Unspecified',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
