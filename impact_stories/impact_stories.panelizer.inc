<?php
/**
 * @file
 * impact_stories.panelizer.inc
 */

/**
 * Implements hook_panelizer_defaults().
 */
function impact_stories_panelizer_defaults() {
  $export = array();

  $panelizer = new stdClass();
  $panelizer->disabled = FALSE; /* Edit this to true to make a default panelizer disabled initially */
  $panelizer->api_version = 1;
  $panelizer->name = 'node:impact:default:full';
  $panelizer->title = 'Default';
  $panelizer->panelizer_type = 'node';
  $panelizer->panelizer_key = 'impact';
  $panelizer->no_blocks = FALSE;
  $panelizer->css_id = '';
  $panelizer->css = '';
  $panelizer->pipeline = 'standard';
  $panelizer->contexts = array();
  $panelizer->relationships = array();
  $panelizer->access = array();
  $panelizer->view_mode = 'full';
  $panelizer->css_class = '';
  $panelizer->title_element = 'H2';
  $panelizer->link_to_entity = TRUE;
  $panelizer->extra = array();
  $display = new panels_display();
  $display->layout = 'twocol_stacked_4col_8col';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'right_lower_left' => NULL,
      'right_lower_right' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '10ff33ab-776c-49f7-8555-c5c6f6918c49';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-13f5ecf2-de75-4b8b-8d43-1dd313a948c1';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'About this Project',
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
    $pane->uuid = '13f5ecf2-de75-4b8b-8d43-1dd313a948c1';
    $display->content['new-13f5ecf2-de75-4b8b-8d43-1dd313a948c1'] = $pane;
    $display->panels['left'][0] = 'new-13f5ecf2-de75-4b8b-8d43-1dd313a948c1';
    $pane = new stdClass();
    $pane->pid = 'new-32073162-d151-4e68-b479-aeac8e13a77f';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_impacts';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'title',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Impacts at a glance',
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
    $pane->uuid = '32073162-d151-4e68-b479-aeac8e13a77f';
    $display->content['new-32073162-d151-4e68-b479-aeac8e13a77f'] = $pane;
    $display->panels['left'][1] = 'new-32073162-d151-4e68-b479-aeac8e13a77f';
    $pane = new stdClass();
    $pane->pid = 'new-c54aa9f8-3fd8-4ff0-93c6-dc228e2adbbd';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_infographic';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => '',
        'image_link' => '',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Quick Facts',
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
    $pane->uuid = 'c54aa9f8-3fd8-4ff0-93c6-dc228e2adbbd';
    $display->content['new-c54aa9f8-3fd8-4ff0-93c6-dc228e2adbbd'] = $pane;
    $display->panels['right'][0] = 'new-c54aa9f8-3fd8-4ff0-93c6-dc228e2adbbd';
    $pane = new stdClass();
    $pane->pid = 'new-2cbd3779-f74e-41a0-97ce-74bbd9e599c3';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_exposure_story';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => 'Learn More',
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
    $pane->uuid = '2cbd3779-f74e-41a0-97ce-74bbd9e599c3';
    $display->content['new-2cbd3779-f74e-41a0-97ce-74bbd9e599c3'] = $pane;
    $display->panels['right'][1] = 'new-2cbd3779-f74e-41a0-97ce-74bbd9e599c3';
    $pane = new stdClass();
    $pane->pid = 'new-573670bc-3181-4589-8f09-8175235df234';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_featured_video';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'node_reference_node',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'node_reference_view_mode' => 'featured_videos',
      ),
      'context' => 'panelizer',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '573670bc-3181-4589-8f09-8175235df234';
    $display->content['new-573670bc-3181-4589-8f09-8175235df234'] = $pane;
    $display->panels['right'][2] = 'new-573670bc-3181-4589-8f09-8175235df234';
    $pane = new stdClass();
    $pane->pid = 'new-4b71e988-53ae-47b6-b7d6-67d1c6e4e4a4';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'impact_stories_content-panel_pane_1';
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
    $pane->uuid = '4b71e988-53ae-47b6-b7d6-67d1c6e4e4a4';
    $display->content['new-4b71e988-53ae-47b6-b7d6-67d1c6e4e4a4'] = $pane;
    $display->panels['top'][0] = 'new-4b71e988-53ae-47b6-b7d6-67d1c6e4e4a4';
    $pane = new stdClass();
    $pane->pid = 'new-dcc9f1c7-f86e-43c4-b88a-eb48a7939d51';
    $pane->panel = 'top';
    $pane->type = 'block';
    $pane->subtype = 'cca_theme_blocks-impact_story_headline_data';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dcc9f1c7-f86e-43c4-b88a-eb48a7939d51';
    $display->content['new-dcc9f1c7-f86e-43c4-b88a-eb48a7939d51'] = $pane;
    $display->panels['top'][1] = 'new-dcc9f1c7-f86e-43c4-b88a-eb48a7939d51';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $panelizer->display = $display;
  $export['node:impact:default:full'] = $panelizer;

  return $export;
}
