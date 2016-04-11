<?php
/**
 * @file
 * taxonomy_level_of_intervention.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy_level_of_intervention_taxonomy_default_vocabularies() {
  return array(
    'level_of_intervention' => array(
      'name' => 'Level of Intervention',
      'machine_name' => 'level_of_intervention',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
