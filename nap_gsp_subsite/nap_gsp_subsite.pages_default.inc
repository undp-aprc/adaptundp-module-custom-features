<?php
/**
 * @file
 * nap_gsp_subsite.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function nap_gsp_subsite_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'nap_gsp_subsite_pages';
  $page->task = 'page';
  $page->admin_title = 'NAP-GSP Subsite Pages';
  $page->admin_description = '';
  $page->path = 'nap-gsp/';
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
  $handler->name = 'page_nap_gsp_subsite_pages__panel_context_6f5ebc09-d3c1-4dbe-8b56-dfddf6062dbe';
  $handler->task = 'page';
  $handler->subtask = 'nap_gsp_subsite_pages';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'NAP-GSP Programme Landing Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'page-nap-gsp-home',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'theme',
          'settings' => array(
            'theme' => 'nap',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'nap-gsp',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked_75_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c2ed541b-935b-41a2-9d46-61f4428e0e5f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8eafb3e1-c448-479f-bdc5-86e809c73320';
    $pane->panel = 'left';
    $pane->type = 'views';
    $pane->subtype = 'global_support_programme_maps';
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
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => 'NAP-GSP Global Projects',
      'override_title_heading' => 'h1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8eafb3e1-c448-479f-bdc5-86e809c73320';
    $display->content['new-8eafb3e1-c448-479f-bdc5-86e809c73320'] = $pane;
    $display->panels['left'][0] = 'new-8eafb3e1-c448-479f-bdc5-86e809c73320';
    $pane = new stdClass();
    $pane->pid = 'new-71cbb5a2-bc61-4470-b69d-d7355b0ba1e7';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'nap_gsp_resources-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Featured Resources',
      'override_title_heading' => 'h1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '71cbb5a2-bc61-4470-b69d-d7355b0ba1e7';
    $display->content['new-71cbb5a2-bc61-4470-b69d-d7355b0ba1e7'] = $pane;
    $display->panels['left'][1] = 'new-71cbb5a2-bc61-4470-b69d-d7355b0ba1e7';
    $pane = new stdClass();
    $pane->pid = 'new-6918023a-a2de-44aa-b807-f965a1211e41';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Embedded Calendar',
      'title' => 'Upcoming Events',
      'body' => '<iframe src="https://calendar.google.com/calendar/embed?src=mail%40mattclark.com.au&ctz=Australia/Sydney" style="border: 0" width="100%" height="300" frameborder="0" scrolling="no"></iframe>',
      'format' => 'full_html_no_formatting',
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
    $pane->uuid = '6918023a-a2de-44aa-b807-f965a1211e41';
    $display->content['new-6918023a-a2de-44aa-b807-f965a1211e41'] = $pane;
    $display->panels['right'][0] = 'new-6918023a-a2de-44aa-b807-f965a1211e41';
    $pane = new stdClass();
    $pane->pid = 'new-1fc839f1-6f3f-4b3d-b1a6-ed2d833d92c1';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'global_support_programme_video-panel_pane_1';
    $pane->shown = TRUE;
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
    $pane->uuid = '1fc839f1-6f3f-4b3d-b1a6-ed2d833d92c1';
    $display->content['new-1fc839f1-6f3f-4b3d-b1a6-ed2d833d92c1'] = $pane;
    $display->panels['right'][1] = 'new-1fc839f1-6f3f-4b3d-b1a6-ed2d833d92c1';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_nap_gsp_subsite_pages__panel_context_37ff7a1b-8683-4ec7-bf59-513c83cccbc1';
  $handler->task = 'page';
  $handler->subtask = 'nap_gsp_subsite_pages';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'NAP-GSP About Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'theme',
          'settings' => array(
            'theme' => 'nap',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'nap-gsp/about',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked_bs';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c2ed541b-935b-41a2-9d46-61f4428e0e5f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4bd83069-771d-42d9-9486-836adc459e80';
    $pane->panel = 'top';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '3128',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '%title',
      'override_title_heading' => 'h1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4bd83069-771d-42d9-9486-836adc459e80';
    $display->content['new-4bd83069-771d-42d9-9486-836adc459e80'] = $pane;
    $display->panels['top'][0] = 'new-4bd83069-771d-42d9-9486-836adc459e80';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_nap_gsp_subsite_pages__panel_context_8128da13-9535-4713-8d6a-7feaaafa1d1b';
  $handler->task = 'page';
  $handler->subtask = 'nap_gsp_subsite_pages';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'NAP-GSP News Page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'theme',
          'settings' => array(
            'theme' => 'nap',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'nap-gsp/news',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol_stacked_75_25';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'News';
  $display->uuid = 'c2ed541b-935b-41a2-9d46-61f4428e0e5f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ccb426bf-7af5-4ad0-a2b6-e76656f3dd51';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Link to Archived News',
      'title' => '',
      'body' => '<div class="btn btn-default"><a href="/nap-gsp/news/archive">Archived News</a></div>',
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
    $pane->uuid = 'ccb426bf-7af5-4ad0-a2b6-e76656f3dd51';
    $display->content['new-ccb426bf-7af5-4ad0-a2b6-e76656f3dd51'] = $pane;
    $display->panels['left'][0] = 'new-ccb426bf-7af5-4ad0-a2b6-e76656f3dd51';
    $pane = new stdClass();
    $pane->pid = 'new-bf09d43f-efb9-43d2-9406-5fd340338cb2';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'global_support_programme_news-panel_pane_1';
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
    $pane->uuid = 'bf09d43f-efb9-43d2-9406-5fd340338cb2';
    $display->content['new-bf09d43f-efb9-43d2-9406-5fd340338cb2'] = $pane;
    $display->panels['top'][0] = 'new-bf09d43f-efb9-43d2-9406-5fd340338cb2';
    $pane = new stdClass();
    $pane->pid = 'new-ae88f152-982b-42eb-8bc0-9dbc2f87ad3b';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'global_support_programme_news-panel_pane_2';
    $pane->shown = TRUE;
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
    $pane->uuid = 'ae88f152-982b-42eb-8bc0-9dbc2f87ad3b';
    $display->content['new-ae88f152-982b-42eb-8bc0-9dbc2f87ad3b'] = $pane;
    $display->panels['top'][1] = 'new-ae88f152-982b-42eb-8bc0-9dbc2f87ad3b';
    $pane = new stdClass();
    $pane->pid = 'new-013a578d-236e-47e8-809a-8aaee61c0291';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'global_support_programme_news-panel_pane_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '013a578d-236e-47e8-809a-8aaee61c0291';
    $display->content['new-013a578d-236e-47e8-809a-8aaee61c0291'] = $pane;
    $display->panels['top'][2] = 'new-013a578d-236e-47e8-809a-8aaee61c0291';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_nap_gsp_subsite_pages__panel_context_b214a2a1-a7a0-4d31-a471-5728ec1a64a4';
  $handler->task = 'page';
  $handler->subtask = 'nap_gsp_subsite_pages';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'NAP-GSP Resources',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'theme',
          'settings' => array(
            'theme' => 'nap',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'nap-gsp/resources',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol-25-75';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'c2ed541b-935b-41a2-9d46-61f4428e0e5f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-40752bfc-06f8-46d1-9b18-66d658ab0c2a';
    $pane->panel = 'left';
    $pane->type = 'block';
    $pane->subtype = 'views-999dc7e5b9218f1acfe5dfe14c4cd467';
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
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '40752bfc-06f8-46d1-9b18-66d658ab0c2a';
    $display->content['new-40752bfc-06f8-46d1-9b18-66d658ab0c2a'] = $pane;
    $display->panels['left'][0] = 'new-40752bfc-06f8-46d1-9b18-66d658ab0c2a';
    $pane = new stdClass();
    $pane->pid = 'new-8743eff7-675b-4f5c-afa5-dbcc8a8ab349';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'nap_gsp_resources-resource_landing_page_block';
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
    $pane->uuid = '8743eff7-675b-4f5c-afa5-dbcc8a8ab349';
    $display->content['new-8743eff7-675b-4f5c-afa5-dbcc8a8ab349'] = $pane;
    $display->panels['right'][0] = 'new-8743eff7-675b-4f5c-afa5-dbcc8a8ab349';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_nap_gsp_subsite_pages__panel_context_ceb34a2c-9e4f-4003-8048-f12359e07b46';
  $handler->task = 'page';
  $handler->subtask = 'nap_gsp_subsite_pages';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Country Initiatives',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'theme',
          'settings' => array(
            'theme' => 'nap',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'nap-gsp/country-initiatives/ldcs',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol-25-75';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Global Support Programme for Least Developed Countries';
  $display->uuid = 'c2ed541b-935b-41a2-9d46-61f4428e0e5f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-03d37996-d6db-4071-abdd-fb0c9f0a1a47';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'nap_gsp_projects-panel_pane_1';
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
    $pane->uuid = '03d37996-d6db-4071-abdd-fb0c9f0a1a47';
    $display->content['new-03d37996-d6db-4071-abdd-fb0c9f0a1a47'] = $pane;
    $display->panels['left'][0] = 'new-03d37996-d6db-4071-abdd-fb0c9f0a1a47';
    $pane = new stdClass();
    $pane->pid = 'new-f0b30e3f-b119-425c-9fc4-bad0a19cdc3e';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'global_support_programme_maps';
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
      'display' => 'block_1',
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
    $pane->uuid = 'f0b30e3f-b119-425c-9fc4-bad0a19cdc3e';
    $display->content['new-f0b30e3f-b119-425c-9fc4-bad0a19cdc3e'] = $pane;
    $display->panels['right'][0] = 'new-f0b30e3f-b119-425c-9fc4-bad0a19cdc3e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_nap_gsp_subsite_pages__panel_context_ec6f29d9-15ae-4394-bf7a-4fb95ec44ce7';
  $handler->task = 'page';
  $handler->subtask = 'nap_gsp_subsite_pages';
  $handler->handler = 'panel_context';
  $handler->weight = 6;
  $handler->conf = array(
    'title' => 'Country Initiatives (Non-LDCs)',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'theme',
          'settings' => array(
            'theme' => 'nap',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'nap-gsp/country-initiatives/developing-countries',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'twocol-25-75';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Global Support Programme for Developing Countries';
  $display->uuid = 'c2ed541b-935b-41a2-9d46-61f4428e0e5f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3bf01455-9784-4220-a3f6-c291c4acafb7';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'nap_gsp_projects-panel_pane_2';
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
    $pane->uuid = '3bf01455-9784-4220-a3f6-c291c4acafb7';
    $display->content['new-3bf01455-9784-4220-a3f6-c291c4acafb7'] = $pane;
    $display->panels['left'][0] = 'new-3bf01455-9784-4220-a3f6-c291c4acafb7';
    $pane = new stdClass();
    $pane->pid = 'new-70a43cf7-3998-4b81-8f65-457423b0cbd6';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'global_support_programme_maps';
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
      'display' => 'block_2',
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
    $pane->uuid = '70a43cf7-3998-4b81-8f65-457423b0cbd6';
    $display->content['new-70a43cf7-3998-4b81-8f65-457423b0cbd6'] = $pane;
    $display->panels['right'][0] = 'new-70a43cf7-3998-4b81-8f65-457423b0cbd6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_nap_gsp_subsite_pages__panel_context_6edff071-25aa-45fe-8328-55f9ff13f8f6';
  $handler->task = 'page';
  $handler->subtask = 'nap_gsp_subsite_pages';
  $handler->handler = 'panel_context';
  $handler->weight = 7;
  $handler->conf = array(
    'title' => 'News Archive',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'theme',
          'settings' => array(
            'theme' => 'nap',
          ),
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'nap-gsp/news/archive',
          ),
          'context' => 'empty',
          'not' => FALSE,
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
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'News Archive';
  $display->uuid = 'c2ed541b-935b-41a2-9d46-61f4428e0e5f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-cf9167e1-d963-4275-a64e-9d2e2d6dac10';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'nap_gsp_content_blocks-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'nid' => '1714',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cf9167e1-d963-4275-a64e-9d2e2d6dac10';
    $display->content['new-cf9167e1-d963-4275-a64e-9d2e2d6dac10'] = $pane;
    $display->panels['middle'][0] = 'new-cf9167e1-d963-4275-a64e-9d2e2d6dac10';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['nap_gsp_subsite_pages'] = $page;

  return $pages;

}
