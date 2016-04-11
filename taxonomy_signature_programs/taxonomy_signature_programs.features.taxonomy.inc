<?php
/**
 * @file
 * taxonomy_signature_programs.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy_signature_programs_taxonomy_default_vocabularies() {
  return array(
    'signature_programmes' => array(
      'name' => 'Signature Programmes',
      'machine_name' => 'signature_programmes',
      'description' => '',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
