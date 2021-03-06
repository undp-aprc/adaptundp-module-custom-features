<?php
/**
 * @file
 * nap_gsp_subsite.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function nap_gsp_subsite_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  if ($module == "openlayers" && $api == "openlayers_styles") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_entityqueue_api().
 */
function nap_gsp_subsite_entityqueue_api($module = NULL, $api = NULL) {
  if ($module == "entityqueue" && $api == "entityqueue_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function nap_gsp_subsite_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
