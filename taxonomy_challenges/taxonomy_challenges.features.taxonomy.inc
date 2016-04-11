<?php
/**
 * @file
 * taxonomy_challenges.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy_challenges_taxonomy_default_vocabularies() {
  return array(
    'climate_hazards' => array(
      'name' => 'Climate-related Hazards Addressed',
      'machine_name' => 'climate_hazards',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
