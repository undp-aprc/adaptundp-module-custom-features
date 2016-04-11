<?php
/**
 * @file
 * taxonomy_funding_source.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy_funding_source_taxonomy_default_vocabularies() {
  return array(
    'funding_source' => array(
      'name' => 'Funding Source',
      'machine_name' => 'funding_source',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
