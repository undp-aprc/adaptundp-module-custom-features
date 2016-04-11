<?php
/**
 * @file
 * content_type_partner.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_partner_node_info() {
  $items = array(
    'partner' => array(
      'name' => t('Partner'),
      'base' => 'node_content',
      'description' => t('Create a record of a project partner or affiliate in the database. This partner record can be linked to other content to create relationships between resources and their partner organisations.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
