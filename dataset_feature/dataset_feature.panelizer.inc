<?php
/**
 * @file
 * dataset_feature.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function dataset_feature_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:datasets:default';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'datasets';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'page_manager';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'middle' => NULL,
      'default' => NULL,
    ),
    'middle' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = 'c27ff00a-b4de-4091-a994-c1d3db48ad82';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1429e2b8-f4b9-4179-9ce9-672e1e4ffe2a';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'data_app-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1429e2b8-f4b9-4179-9ce9-672e1e4ffe2a';
    $display->content['new-1429e2b8-f4b9-4179-9ce9-672e1e4ffe2a'] = $pane;
    $display->panels['middle'][0] = 'new-1429e2b8-f4b9-4179-9ce9-672e1e4ffe2a';
    $pane = new stdClass();
    $pane->pid = 'new-dbad6108-fe5b-46c3-b56f-96fb8722c913';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'data_app-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dbad6108-fe5b-46c3-b56f-96fb8722c913';
    $display->content['new-dbad6108-fe5b-46c3-b56f-96fb8722c913'] = $pane;
    $display->panels['middle'][1] = 'new-dbad6108-fe5b-46c3-b56f-96fb8722c913';
    $pane = new stdClass();
    $pane->pid = 'new-25e628d0-df08-4aac-8cca-2071502db2c9';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'data_app-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '25e628d0-df08-4aac-8cca-2071502db2c9';
    $display->content['new-25e628d0-df08-4aac-8cca-2071502db2c9'] = $pane;
    $display->panels['middle'][2] = 'new-25e628d0-df08-4aac-8cca-2071502db2c9';
    $pane = new stdClass();
    $pane->pid = 'new-7c915d91-a2f5-4f64-a490-9bee61dadd1f';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'data_app-panel_pane_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array(
      'method' => '0',
      'settings' => array(),
    );
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '7c915d91-a2f5-4f64-a490-9bee61dadd1f';
    $display->content['new-7c915d91-a2f5-4f64-a490-9bee61dadd1f'] = $pane;
    $display->panels['middle'][3] = 'new-7c915d91-a2f5-4f64-a490-9bee61dadd1f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:datasets:default'] = $panelizer;

  return $export;
}
