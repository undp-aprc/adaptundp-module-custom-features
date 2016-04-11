<?php
/**
 * @file
 * taxonomy_key_collaborators.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy_key_collaborators_taxonomy_default_vocabularies() {
  return array(
    'key_collaborators' => array(
      'name' => 'Key Collaborators',
      'machine_name' => 'key_collaborators',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
