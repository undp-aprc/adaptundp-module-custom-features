<?php
/**
 * @file
 * impact_stories.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function impact_stories_taxonomy_default_vocabularies() {
  return array(
    'impact_story_themes' => array(
      'name' => 'Impact Story Themes',
      'machine_name' => 'impact_story_themes',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
