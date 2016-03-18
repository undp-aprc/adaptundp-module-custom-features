<?php
/**
 * @file
 * taxonomy_term_landing_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function taxonomy_term_landing_pages_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__country_regions';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Country/Regions',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'country_regions',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'region_country' => 'region_country',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e04097fe-7480-44f5-8e54-0c6f670be9e4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b3142cb9-1f1d-44c8-b4c4-200c6e37f56f';
    $pane->panel = 'center';
    $pane->type = 'entity_view';
    $pane->subtype = 'taxonomy_term';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_term_1',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b3142cb9-1f1d-44c8-b4c4-200c6e37f56f';
    $display->content['new-b3142cb9-1f1d-44c8-b4c4-200c6e37f56f'] = $pane;
    $display->panels['center'][0] = 'new-b3142cb9-1f1d-44c8-b4c4-200c6e37f56f';
    $pane = new stdClass();
    $pane->pid = 'new-003ea2c0-84c3-4215-8af4-d0782aeb85db';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'taxonomy_term_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Related Content',
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
    $pane->uuid = '003ea2c0-84c3-4215-8af4-d0782aeb85db';
    $display->content['new-003ea2c0-84c3-4215-8af4-d0782aeb85db'] = $pane;
    $display->panels['center'][1] = 'new-003ea2c0-84c3-4215-8af4-d0782aeb85db';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b3142cb9-1f1d-44c8-b4c4-200c6e37f56f';
  $handler->conf['display'] = $display;
  $export['term_view__country_regions'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__generic_taxonomy_term_pages';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Generic Taxonomy Term Pages',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'generic_taxonomy_term_pages',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'region_country' => 'region_country',
              'signature_programmes' => 'signature_programmes',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'bec9e40a-603b-4b7a-aaa5-874880c2df10';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-95069da4-a400-468c-9908-17549da4f578';
    $pane->panel = 'middle';
    $pane->type = 'term_description';
    $pane->subtype = 'term_description';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_term_1',
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '95069da4-a400-468c-9908-17549da4f578';
    $display->content['new-95069da4-a400-468c-9908-17549da4f578'] = $pane;
    $display->panels['middle'][0] = 'new-95069da4-a400-468c-9908-17549da4f578';
    $pane = new stdClass();
    $pane->pid = 'new-c3bd19d3-7ad9-43b8-8cdf-d69d312759cc';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'taxonomy_term_list';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
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
    $pane->uuid = 'c3bd19d3-7ad9-43b8-8cdf-d69d312759cc';
    $display->content['new-c3bd19d3-7ad9-43b8-8cdf-d69d312759cc'] = $pane;
    $display->panels['middle'][1] = 'new-c3bd19d3-7ad9-43b8-8cdf-d69d312759cc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__generic_taxonomy_term_pages'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_e14ebe60-11a2-47b9-9f85-b33f274d302e';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Signature Programme List Page (Top Level)',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'signature_programmes' => 'signature_programmes',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '11',
            8 => array(),
            1 => array(),
            13 => array(),
            9 => array(),
            3 => array(),
            4 => array(),
            10 => array(),
            12 => array(),
            5 => array(),
            6 => array(),
            11 => array(
              55 => '55',
              56 => '56',
              57 => '57',
              717 => '717',
              746 => '746',
              799 => '799',
            ),
            7 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '502d09d0-dcc3-4c2f-9fe0-bd871d4e0ad2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ef39498e-f3da-4456-a5e2-0390d9e066dd';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'signature_programme_pages_listings';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'signature_programme_list_subprogrammes',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 1,
      'override_title_text' => '<none>',
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
    $pane->uuid = 'ef39498e-f3da-4456-a5e2-0390d9e066dd';
    $display->content['new-ef39498e-f3da-4456-a5e2-0390d9e066dd'] = $pane;
    $display->panels['middle'][0] = 'new-ef39498e-f3da-4456-a5e2-0390d9e066dd';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_e14ebe60-11a2-47b9-9f85-b33f274d302e'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view__panel_context_f96d3a51-55db-4950-bde1-934b52ebe33b';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Signature Programme List (Child Page)',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => '',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'term_vocabulary',
          'settings' => array(
            'machine_name' => array(
              'signature_programmes' => 'signature_programmes',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'term',
          'settings' => array(
            'vid' => '11',
            8 => array(),
            1 => array(),
            13 => array(),
            9 => array(),
            3 => array(),
            4 => array(),
            10 => array(),
            12 => array(),
            5 => array(),
            6 => array(),
            11 => array(
              55 => '55',
              56 => '56',
              57 => '57',
              717 => '717',
              746 => '746',
              799 => '799',
            ),
            7 => array(),
          ),
          'context' => 'argument_term_1',
          'not' => TRUE,
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '502d09d0-dcc3-4c2f-9fe0-bd871d4e0ad2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ab7507e7-a5a9-431f-bcdb-61ebfba71de8';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'signature_programme_pages_listings';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'subprogramme_term_page_block',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 1,
      'override_title_text' => '<none>',
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
    $pane->uuid = 'ab7507e7-a5a9-431f-bcdb-61ebfba71de8';
    $display->content['new-ab7507e7-a5a9-431f-bcdb-61ebfba71de8'] = $pane;
    $display->panels['middle'][0] = 'new-ab7507e7-a5a9-431f-bcdb-61ebfba71de8';
    $pane = new stdClass();
    $pane->pid = 'new-31626261-b9a9-4bbb-b1ef-1b45f25d891f';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'projects_of_sub_programme';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'signature_subprogrammes_project_block',
      'context' => array(
        0 => 'argument_term_1.tid',
      ),
      'override_title' => 0,
      'override_title_text' => '<none>',
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
    $pane->uuid = '31626261-b9a9-4bbb-b1ef-1b45f25d891f';
    $display->content['new-31626261-b9a9-4bbb-b1ef-1b45f25d891f'] = $pane;
    $display->panels['middle'][1] = 'new-31626261-b9a9-4bbb-b1ef-1b45f25d891f';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['term_view__panel_context_f96d3a51-55db-4950-bde1-934b52ebe33b'] = $handler;

  return $export;
}
