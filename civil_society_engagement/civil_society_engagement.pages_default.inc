<?php
/**
 * @file
 * civil_society_engagement.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function civil_society_engagement_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'civil_society_engagement_map';
  $page->task = 'page';
  $page->admin_title = 'Civil Society Engagement Map';
  $page->admin_description = '';
  $page->path = 'how-undp-works-with-civil-society-for-cca';
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
  $handler->name = 'page_civil_society_engagement_map__panel';
  $handler->task = 'page';
  $handler->subtask = 'civil_society_engagement_map';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Civil Society Engagement Map',
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
  $display->layout = 'onecol_fluid_header_fixed_width_body';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'middle' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '831bda2d-224a-4d69-9b57-ba6d6e9cad47';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-096bef09-403f-4d5f-a056-f9065bcd2430';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'civil_society_engagement-panel_pane_1';
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '096bef09-403f-4d5f-a056-f9065bcd2430';
    $display->content['new-096bef09-403f-4d5f-a056-f9065bcd2430'] = $pane;
    $display->panels['middle'][0] = 'new-096bef09-403f-4d5f-a056-f9065bcd2430';
    $pane = new stdClass();
    $pane->pid = 'new-7ee0d0f4-0e14-4134-b80c-bbd025388019';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Civil Society Engagement Map Title',
      'title' => '',
      'body' => '<p><img alt="" src="/sites/default/files/uploads/civil-society-engagement-title.png" style="height: 100%;"></p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7ee0d0f4-0e14-4134-b80c-bbd025388019';
    $display->content['new-7ee0d0f4-0e14-4134-b80c-bbd025388019'] = $pane;
    $display->panels['top'][0] = 'new-7ee0d0f4-0e14-4134-b80c-bbd025388019';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-096bef09-403f-4d5f-a056-f9065bcd2430';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['civil_society_engagement_map'] = $page;

  return $pages;

}
