<?php
/**
 * @file
 * nap_gsp_subsite.domains.inc
 */

/**
 * Implements hook_domain_default_domains().
 */
function nap_gsp_subsite_domain_default_domains() {
  $domains = array();
  $domains['globalsupportprogramme'] = array(
    'subdomain' => 'globalsupportprogramme.org',
    'sitename' => 'National Adaptation Global Support Programme',
    'scheme' => 'http',
    'valid' => 1,
    'weight' => 1,
    'is_default' => 0,
    'machine_name' => 'globalsupportprogramme',
  );

  return $domains;
}

/**
 * Implements hook_domain_theme_default_themes().
 */
function nap_gsp_subsite_domain_theme_default_themes() {
  $domain_themes = array();
  $domain_themes['globalsupportprogramme'] = array(
    'bartik' => array(
      'theme' => 'bartik',
      'settings' => NULL,
      'status' => 0,
      'filepath' => '',
    ),
    'nap' => array(
      'theme' => 'nap',
      'settings' => NULL,
      'status' => 1,
      'filepath' => '',
    ),
  );

  return $domain_themes;
}
