<?php
/**
 * @file
 * dataset_feature.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function dataset_feature_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'dataset_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Dataset Landing Page';
  $page->admin_description = '';
  $page->path = 'resources/datasets';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_dataset_landing_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'dataset_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Dataset Landing Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
    'middle' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = 'Climate Change Adaptation Datasets';
  $display->uuid = '6f883986-e4c7-48cb-874a-8693c7fa71e1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d53e4d8c-6646-4d29-90ea-bbb885cc902d';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'datasets_landing_page-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd53e4d8c-6646-4d29-90ea-bbb885cc902d';
    $display->content['new-d53e4d8c-6646-4d29-90ea-bbb885cc902d'] = $pane;
    $display->panels['middle'][0] = 'new-d53e4d8c-6646-4d29-90ea-bbb885cc902d';
    $pane = new stdClass();
    $pane->pid = 'new-0f14fd7f-fe0d-4ed9-b50b-49d480035118';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'browse_by_country-panel_pane_1';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0f14fd7f-fe0d-4ed9-b50b-49d480035118';
    $display->content['new-0f14fd7f-fe0d-4ed9-b50b-49d480035118'] = $pane;
    $display->panels['middle'][1] = 'new-0f14fd7f-fe0d-4ed9-b50b-49d480035118';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['dataset_landing_page'] = $page;

  return $pages;

}
