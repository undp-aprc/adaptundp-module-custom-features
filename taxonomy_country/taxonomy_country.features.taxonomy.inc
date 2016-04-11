<?php
/**
 * @file
 * taxonomy_country.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy_country_taxonomy_default_vocabularies() {
  return array(
    'region_country' => array(
      'name' => 'Region/Country',
      'machine_name' => 'region_country',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
