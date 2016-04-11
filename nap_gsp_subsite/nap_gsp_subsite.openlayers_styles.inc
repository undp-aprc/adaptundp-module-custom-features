<?php
/**
 * @file
 * nap_gsp_subsite.openlayers_styles.inc
 */

/**
 * Implements hook_openlayers_styles().
 */
function nap_gsp_subsite_openlayers_styles() {
  $export = array();

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'map_marker_nap_gsp_ldc_';
  $openlayers_styles->title = 'Map Marker (NAP-GSP LDC)';
  $openlayers_styles->description = '';
  $openlayers_styles->data = array(
    'externalGraphic' => '/sites/all/themes/custom/nap/assets/img/ux-icons/map-marker-01.svg',
    'pointRadius' => 15,
    'fillColor' => '#EE9900',
    'fillOpacity' => 1,
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'graphicYOffset' => -20,
    'labelAlign' => 'ct',
  );
  $export['map_marker_nap_gsp_ldc_'] = $openlayers_styles;

  $openlayers_styles = new stdClass();
  $openlayers_styles->disabled = FALSE; /* Edit this to true to make a default openlayers_styles disabled initially */
  $openlayers_styles->api_version = 1;
  $openlayers_styles->name = 'map_marker_nap_gsp_non_ldc';
  $openlayers_styles->title = 'Map Marker (NAP-GSP Non-LDC)';
  $openlayers_styles->description = '';
  $openlayers_styles->data = array(
    'externalGraphic' => '/sites/all/themes/custom/nap/assets/img/ux-icons/map-marker-02.svg',
    'pointRadius' => 15,
    'fillColor' => '#EE9900',
    'fillOpacity' => 1,
    'strokeColor' => '#EE9900',
    'strokeWidth' => 1,
    'strokeOpacity' => 1,
    'strokeLinecap' => 'round',
    'strokeDashstyle' => 'solid',
    'graphicOpacity' => 1,
    'labelAlign' => 'cm',
  );
  $export['map_marker_nap_gsp_non_ldc'] = $openlayers_styles;

  return $export;
}
