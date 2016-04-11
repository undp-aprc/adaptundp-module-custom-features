<?php
/**
 * @file
 * nap_gsp_subsite.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function nap_gsp_subsite_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'clone_of_global_support_programme_map_nonldcs';
  $openlayers_maps->title = 'Global Support Programme Map (Non LDCs)';
  $openlayers_maps->description = '';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '0, 0',
        'zoom' => '3',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_cluster' => array(
        'clusterlayer' => array(
          'global_support_programme_maps_openlayers_2' => 'global_support_programme_maps_openlayers_2',
        ),
        'distance' => '20',
        'threshold' => '',
        'display_cluster_numbers' => 1,
        'middle_lower_bound' => '15',
        'middle_upper_bound' => '50',
        'low_color' => 'rgb(141, 203, 61)',
        'low_stroke_color' => 'rgb(141, 203, 61)',
        'low_opacity' => '0.8',
        'low_point_radius' => '10',
        'low_label_outline' => '1',
        'middle_color' => 'rgb(49, 190, 145)',
        'middle_stroke_color' => 'rgb(49, 190, 145)',
        'middle_opacity' => '0.8',
        'middle_point_radius' => '16',
        'middle_label_outline' => '1',
        'high_color' => 'rgb(35, 59, 177)',
        'high_stroke_color' => 'rgb(35, 59, 177)',
        'high_opacity' => '0.8',
        'high_point_radius' => '22',
        'high_label_outline' => '1',
        'label_low_color' => '#000000',
        'label_low_opacity' => '0.8',
        'label_middle_color' => '#000000',
        'label_middle_opacity' => '0.8',
        'label_high_color' => '#000000',
        'label_high_opacity' => '0.8',
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_attribution' => array(
        'separator' => '',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'global_support_programme_maps_openlayers_2' => 'global_support_programme_maps_openlayers_2',
        ),
        'popupAtPosition' => 'mouse',
        'panMapIfOutOfView' => 1,
        'keepInMap' => 1,
      ),
      'openlayers_behavior_scaleline' => array(),
      'openlayers_behavior_zoompanel' => array(),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_normal' => 'google_normal',
      'global_support_programme_maps_openlayers_2' => 'global_support_programme_maps_openlayers_2',
    ),
    'layer_weight' => array(
      'openlayers_kml_example' => '0',
      'global_support_programme_maps_openlayers_1' => '0',
      'global_support_programme_maps_openlayers_2' => '0',
      'openlayers_geojson_picture_this' => '0',
      'naps_gsp_ldcs_map' => '0',
      'global_success_story_layer' => '0',
      'impact_stories' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'global_success_story_layer' => '0',
      'impact_stories' => '0',
      'naps_gsp_ldcs_map' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'global_support_programme_maps_openlayers_1' => 'map_marker_nap_gsp_ldc_',
      'global_support_programme_maps_openlayers_2' => 'map_marker_nap_gsp_non_ldc',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'global_success_story_layer' => '0',
      'impact_stories' => '0',
      'naps_gsp_ldcs_map' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'global_support_programme_maps_openlayers_1' => 'map_marker_nap_gsp_ldc_',
      'global_support_programme_maps_openlayers_2' => 'map_marker_nap_gsp_non_ldc',
    ),
    'layer_styles_temporary' => array(
      'geofield_formatter' => '0',
      'global_success_story_layer' => '0',
      'impact_stories' => '0',
      'naps_gsp_ldcs_map' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'global_support_programme_maps_openlayers_1' => 'map_marker_nap_gsp_ldc_',
      'global_support_programme_maps_openlayers_2' => 'map_marker_nap_gsp_non_ldc',
    ),
    'layer_activated' => array(
      'global_support_programme_maps_openlayers_2' => 'global_support_programme_maps_openlayers_2',
      'geofield_formatter' => 0,
      'global_success_story_layer' => 0,
      'impact_stories' => 0,
      'naps_gsp_ldcs_map' => 0,
      'openlayers_geojson_picture_this' => 0,
      'openlayers_kml_example' => 0,
      'global_support_programme_maps_openlayers_1' => 0,
    ),
    'layer_switcher' => array(
      'global_support_programme_maps_openlayers_2' => 0,
      'geofield_formatter' => 0,
      'global_success_story_layer' => 0,
      'impact_stories' => 0,
      'naps_gsp_ldcs_map' => 0,
      'openlayers_geojson_picture_this' => 0,
      'openlayers_kml_example' => 0,
      'global_support_programme_maps_openlayers_1' => 0,
    ),
    'projection' => 'EPSG:3857',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default_select',
      'temporary' => 'default',
    ),
  );
  $export['clone_of_global_support_programme_map_nonldcs'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'global_support_programme_map';
  $openlayers_maps->title = 'Global Support Programme Map';
  $openlayers_maps->description = '';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '0, 0',
        'zoom' => '3',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_cluster' => array(
        'clusterlayer' => array(
          'global_support_programme_maps_openlayers_2' => 'global_support_programme_maps_openlayers_2',
          'global_support_programme_maps_openlayers_1' => 'global_support_programme_maps_openlayers_1',
        ),
        'distance' => '20',
        'threshold' => '',
        'display_cluster_numbers' => 1,
        'middle_lower_bound' => '15',
        'middle_upper_bound' => '50',
        'low_color' => 'rgb(141, 203, 61)',
        'low_stroke_color' => 'rgb(141, 203, 61)',
        'low_opacity' => '0.8',
        'low_point_radius' => '10',
        'low_label_outline' => '1',
        'middle_color' => 'rgb(49, 190, 145)',
        'middle_stroke_color' => 'rgb(49, 190, 145)',
        'middle_opacity' => '0.8',
        'middle_point_radius' => '16',
        'middle_label_outline' => '1',
        'high_color' => 'rgb(35, 59, 177)',
        'high_stroke_color' => 'rgb(35, 59, 177)',
        'high_opacity' => '0.8',
        'high_point_radius' => '22',
        'high_label_outline' => '1',
        'label_low_color' => '#000000',
        'label_low_opacity' => '0.8',
        'label_middle_color' => '#000000',
        'label_middle_opacity' => '0.8',
        'label_high_color' => '#000000',
        'label_high_opacity' => '0.8',
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_attribution' => array(
        'separator' => '',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'global_support_programme_maps_openlayers_2' => 'global_support_programme_maps_openlayers_2',
          'global_support_programme_maps_openlayers_1' => 'global_support_programme_maps_openlayers_1',
        ),
        'popupAtPosition' => 'mouse',
        'panMapIfOutOfView' => 1,
        'keepInMap' => 1,
      ),
      'openlayers_behavior_scaleline' => array(),
      'openlayers_behavior_zoompanel' => array(),
      'openlayers_behavior_touch_navigation' => array(
        'documentDrag' => 1,
      ),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_normal' => 'google_normal',
      'global_support_programme_maps_openlayers_2' => 'global_support_programme_maps_openlayers_2',
      'global_support_programme_maps_openlayers_1' => 'global_support_programme_maps_openlayers_1',
    ),
    'layer_weight' => array(
      'openlayers_kml_example' => '0',
      'global_support_programme_maps_openlayers_2' => '0',
      'global_support_programme_maps_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'naps_gsp_ldcs_map' => '0',
      'global_success_story_layer' => '0',
      'impact_stories' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'global_success_story_layer' => '0',
      'impact_stories' => '0',
      'naps_gsp_ldcs_map' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'global_support_programme_maps_openlayers_2' => 'map_marker_nap_gsp_non_ldc',
      'global_support_programme_maps_openlayers_1' => 'map_marker_nap_gsp_ldc_',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'global_success_story_layer' => '0',
      'impact_stories' => '0',
      'naps_gsp_ldcs_map' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'global_support_programme_maps_openlayers_2' => 'map_marker_nap_gsp_non_ldc',
      'global_support_programme_maps_openlayers_1' => 'map_marker_nap_gsp_ldc_',
    ),
    'layer_styles_temporary' => array(
      'geofield_formatter' => '0',
      'global_success_story_layer' => '0',
      'impact_stories' => '0',
      'naps_gsp_ldcs_map' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'global_support_programme_maps_openlayers_2' => 'map_marker_nap_gsp_non_ldc',
      'global_support_programme_maps_openlayers_1' => 'map_marker_nap_gsp_ldc_',
    ),
    'layer_activated' => array(
      'global_support_programme_maps_openlayers_2' => 'global_support_programme_maps_openlayers_2',
      'global_support_programme_maps_openlayers_1' => 'global_support_programme_maps_openlayers_1',
      'geofield_formatter' => 0,
      'global_success_story_layer' => 0,
      'impact_stories' => 0,
      'naps_gsp_ldcs_map' => 0,
      'openlayers_geojson_picture_this' => 0,
      'openlayers_kml_example' => 0,
    ),
    'layer_switcher' => array(
      'global_support_programme_maps_openlayers_2' => 0,
      'global_support_programme_maps_openlayers_1' => 0,
      'geofield_formatter' => 0,
      'global_success_story_layer' => 0,
      'impact_stories' => 0,
      'naps_gsp_ldcs_map' => 0,
      'openlayers_geojson_picture_this' => 0,
      'openlayers_kml_example' => 0,
    ),
    'projection' => 'EPSG:3857',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default_select',
      'temporary' => 'default',
    ),
  );
  $export['global_support_programme_map'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'global_support_programme_map_ldcs';
  $openlayers_maps->title = 'Global Support Programme Map (LDCs)';
  $openlayers_maps->description = '';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '0, 0',
        'zoom' => '3',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_cluster' => array(
        'clusterlayer' => array(
          'global_support_programme_maps_openlayers_2' => 'global_support_programme_maps_openlayers_2',
          'global_support_programme_maps_openlayers_1' => 'global_support_programme_maps_openlayers_1',
        ),
        'distance' => '20',
        'threshold' => '',
        'display_cluster_numbers' => 1,
        'middle_lower_bound' => '15',
        'middle_upper_bound' => '50',
        'low_color' => 'rgb(141, 203, 61)',
        'low_stroke_color' => 'rgb(141, 203, 61)',
        'low_opacity' => '0.8',
        'low_point_radius' => '10',
        'low_label_outline' => '1',
        'middle_color' => 'rgb(49, 190, 145)',
        'middle_stroke_color' => 'rgb(49, 190, 145)',
        'middle_opacity' => '0.8',
        'middle_point_radius' => '16',
        'middle_label_outline' => '1',
        'high_color' => 'rgb(35, 59, 177)',
        'high_stroke_color' => 'rgb(35, 59, 177)',
        'high_opacity' => '0.8',
        'high_point_radius' => '22',
        'high_label_outline' => '1',
        'label_low_color' => '#000000',
        'label_low_opacity' => '0.8',
        'label_middle_color' => '#000000',
        'label_middle_opacity' => '0.8',
        'label_high_color' => '#000000',
        'label_high_opacity' => '0.8',
      ),
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_attribution' => array(
        'separator' => '',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'global_support_programme_maps_openlayers_2' => 'global_support_programme_maps_openlayers_2',
          'global_support_programme_maps_openlayers_1' => 'global_support_programme_maps_openlayers_1',
        ),
        'popupAtPosition' => 'mouse',
        'panMapIfOutOfView' => 1,
        'keepInMap' => 1,
      ),
      'openlayers_behavior_scaleline' => array(),
      'openlayers_behavior_zoompanel' => array(),
    ),
    'default_layer' => 'google_normal',
    'layers' => array(
      'google_normal' => 'google_normal',
      'global_support_programme_maps_openlayers_1' => 'global_support_programme_maps_openlayers_1',
    ),
    'layer_weight' => array(
      'openlayers_kml_example' => '0',
      'global_support_programme_maps_openlayers_2' => '0',
      'global_support_programme_maps_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'naps_gsp_ldcs_map' => '0',
      'global_success_story_layer' => '0',
      'impact_stories' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => '0',
      'global_success_story_layer' => '0',
      'impact_stories' => '0',
      'naps_gsp_ldcs_map' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'global_support_programme_maps_openlayers_2' => 'map_marker_nap_gsp_non_ldc',
      'global_support_programme_maps_openlayers_1' => 'map_marker_nap_gsp_ldc_',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'global_success_story_layer' => '0',
      'impact_stories' => '0',
      'naps_gsp_ldcs_map' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'global_support_programme_maps_openlayers_2' => 'map_marker_nap_gsp_non_ldc',
      'global_support_programme_maps_openlayers_1' => 'map_marker_nap_gsp_ldc_',
    ),
    'layer_styles_temporary' => array(
      'geofield_formatter' => '0',
      'global_success_story_layer' => '0',
      'impact_stories' => '0',
      'naps_gsp_ldcs_map' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'global_support_programme_maps_openlayers_2' => 'map_marker_nap_gsp_non_ldc',
      'global_support_programme_maps_openlayers_1' => 'map_marker_nap_gsp_ldc_',
    ),
    'layer_activated' => array(
      'global_support_programme_maps_openlayers_1' => 'global_support_programme_maps_openlayers_1',
      'global_support_programme_maps_openlayers_2' => 0,
      'geofield_formatter' => 0,
      'global_success_story_layer' => 0,
      'impact_stories' => 0,
      'naps_gsp_ldcs_map' => 0,
      'openlayers_geojson_picture_this' => 0,
      'openlayers_kml_example' => 0,
    ),
    'layer_switcher' => array(
      'global_support_programme_maps_openlayers_2' => 0,
      'global_support_programme_maps_openlayers_1' => 0,
      'geofield_formatter' => 0,
      'global_success_story_layer' => 0,
      'impact_stories' => 0,
      'naps_gsp_ldcs_map' => 0,
      'openlayers_geojson_picture_this' => 0,
      'openlayers_kml_example' => 0,
    ),
    'projection' => 'EPSG:3857',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default_select',
      'temporary' => 'default',
    ),
  );
  $export['global_support_programme_map_ldcs'] = $openlayers_maps;

  return $export;
}
