<?php
/**
 * @file
 * nap_gsp_subsite.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function nap_gsp_subsite_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-nap-gsp-menu.
  $menus['menu-nap-gsp-menu'] = array(
    'menu_name' => 'menu-nap-gsp-menu',
    'title' => 'NAP-GSP Menu',
    'description' => 'Navigation Menu for the NAP-GSP Subsite',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('NAP-GSP Menu');
  t('Navigation Menu for the NAP-GSP Subsite');


  return $menus;
}
