<?php
/**
 * @file
 * impact_stories.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function impact_stories_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'impact_story_landing_page';
  $page->task = 'page';
  $page->admin_title = 'Impact Story Landing Page';
  $page->admin_description = '';
  $page->path = 'impact-stories';
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
  $handler->name = 'page_impact_story_landing_page__panel_context_95b4b40d-8e97-4b56-a05e-5d29417c8bc0';
  $handler->task = 'page';
  $handler->subtask = 'impact_story_landing_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol_fluid_header_fixed_width_body';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'top' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '87f21e93-b42e-450c-862f-ab7c1e158d21';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-43ea96d8-5f07-46ce-81f4-9e3acc3e685b';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'views-9dcdfd66888979d0b1111c37c6fc7223';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'hidden',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '43ea96d8-5f07-46ce-81f4-9e3acc3e685b';
    $display->content['new-43ea96d8-5f07-46ce-81f4-9e3acc3e685b'] = $pane;
    $display->panels['top'][0] = 'new-43ea96d8-5f07-46ce-81f4-9e3acc3e685b';
    $pane = new stdClass();
    $pane->pid = 'new-f445f171-140a-4ed9-ad91-3e9885ce8669';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'impact_stories_map-impact_story_map';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f445f171-140a-4ed9-ad91-3e9885ce8669';
    $display->content['new-f445f171-140a-4ed9-ad91-3e9885ce8669'] = $pane;
    $display->panels['top'][1] = 'new-f445f171-140a-4ed9-ad91-3e9885ce8669';
    $pane = new stdClass();
    $pane->pid = 'new-5ae2fabe-5498-4ec1-b6ed-32867a0c2ff0';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'cca_theme_blocks-impact_story_map_select_icons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5ae2fabe-5498-4ec1-b6ed-32867a0c2ff0';
    $display->content['new-5ae2fabe-5498-4ec1-b6ed-32867a0c2ff0'] = $pane;
    $display->panels['top'][2] = 'new-5ae2fabe-5498-4ec1-b6ed-32867a0c2ff0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-f445f171-140a-4ed9-ad91-3e9885ce8669';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['impact_story_landing_page'] = $page;

  return $pages;

}
