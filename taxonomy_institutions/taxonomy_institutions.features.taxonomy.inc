<?php
/**
 * @file
 * taxonomy_institutions.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy_institutions_taxonomy_default_vocabularies() {
  return array(
    'institutions' => array(
      'name' => 'Institutions',
      'machine_name' => 'institutions',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
