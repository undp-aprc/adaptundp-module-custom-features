<?php
/**
 * @file
 * taxonomy_implementing_agency.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy_implementing_agency_taxonomy_default_vocabularies() {
  return array(
    'implementing_agency' => array(
      'name' => 'Implementing Agency & Partnering Organizations',
      'machine_name' => 'implementing_agency',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
