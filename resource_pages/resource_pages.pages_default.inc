<?php
/**
 * @file
 * resource_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function resource_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'resource_pages';
  $page->task = 'page';
  $page->admin_title = 'Resource Pages';
  $page->admin_description = 'Display resources on various pages';
  $page->path = 'resources';
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
  $handler->name = 'page_resource_pages__panel_context_8b1f4016-12df-4d31-806d-3a6f022c58a0';
  $handler->task = 'page';
  $handler->subtask = 'resource_pages';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Featured Resource Page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'resource-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'resources/featured',
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
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Featured Resources';
  $display->uuid = '4ff3a33c-242b-4f31-99cf-06c2b8438d5e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7fef43d6-a3bf-4ced-9b2a-d9520e5a02c2';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'featured_resources';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '2',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'featured_resources',
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
    $pane->uuid = '7fef43d6-a3bf-4ced-9b2a-d9520e5a02c2';
    $display->content['new-7fef43d6-a3bf-4ced-9b2a-d9520e5a02c2'] = $pane;
    $display->panels['middle'][0] = 'new-7fef43d6-a3bf-4ced-9b2a-d9520e5a02c2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-7fef43d6-a3bf-4ced-9b2a-d9520e5a02c2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_resource_pages__training_resources_toolkits';
  $handler->task = 'page';
  $handler->subtask = 'resource_pages';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Training Resources & Toolkits',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'resource-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'training_resources_toolkits',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'resources/training',
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
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Training Resources & Toolkits';
  $display->uuid = 'dc3113a5-43ab-41f1-b7f9-2e05ae320118';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1231dfac-85a1-41fc-b56c-08155ae4474a';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'resource_blocks';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
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
    $pane->uuid = '1231dfac-85a1-41fc-b56c-08155ae4474a';
    $display->content['new-1231dfac-85a1-41fc-b56c-08155ae4474a'] = $pane;
    $display->panels['middle'][0] = 'new-1231dfac-85a1-41fc-b56c-08155ae4474a';
    $pane = new stdClass();
    $pane->pid = 'new-dad30aba-07f1-4d53-8d93-e151b5eed0dc';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'featured_resources';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'dad30aba-07f1-4d53-8d93-e151b5eed0dc';
    $display->content['new-dad30aba-07f1-4d53-8d93-e151b5eed0dc'] = $pane;
    $display->panels['middle'][1] = 'new-dad30aba-07f1-4d53-8d93-e151b5eed0dc';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1231dfac-85a1-41fc-b56c-08155ae4474a';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_resource_pages__reports';
  $handler->task = 'page';
  $handler->subtask = 'resource_pages';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Reports',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'resource-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'reports',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'resources/reports',
          ),
          'context' => 'empty',
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
  $display->title = 'Reports';
  $display->uuid = '63f7d839-5aa3-4b28-9be1-126d3b8c4889';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-5a635597-5850-48f7-a0d2-b75ead4887cf';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'resource_blocks';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
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
    $pane->uuid = '5a635597-5850-48f7-a0d2-b75ead4887cf';
    $display->content['new-5a635597-5850-48f7-a0d2-b75ead4887cf'] = $pane;
    $display->panels['middle'][0] = 'new-5a635597-5850-48f7-a0d2-b75ead4887cf';
    $pane = new stdClass();
    $pane->pid = 'new-8223f440-0df3-492b-881f-499729b0f4a3';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'featured_resources';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_3',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8223f440-0df3-492b-881f-499729b0f4a3';
    $display->content['new-8223f440-0df3-492b-881f-499729b0f4a3'] = $pane;
    $display->panels['middle'][1] = 'new-8223f440-0df3-492b-881f-499729b0f4a3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_resource_pages__programme_documents';
  $handler->task = 'page';
  $handler->subtask = 'resource_pages';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Programme Documents',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'resource-page',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'programme_documents',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'resources/program-documents
resources/programme-documents',
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
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Programme Documents';
  $display->uuid = '451bb82c-d2d3-4cfa-9387-bff3378f6a35';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fa08baa0-310f-4842-bc6f-36cc4681ea8f';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'resource_blocks';
    $pane->shown = FALSE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'programme_documents',
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
    $pane->uuid = 'fa08baa0-310f-4842-bc6f-36cc4681ea8f';
    $display->content['new-fa08baa0-310f-4842-bc6f-36cc4681ea8f'] = $pane;
    $display->panels['middle'][0] = 'new-fa08baa0-310f-4842-bc6f-36cc4681ea8f';
    $pane = new stdClass();
    $pane->pid = 'new-fb0d096d-f958-4059-a202-7c125e0401f9';
    $pane->panel = 'middle';
    $pane->type = 'views';
    $pane->subtype = 'featured_resources';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_4',
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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fb0d096d-f958-4059-a202-7c125e0401f9';
    $display->content['new-fb0d096d-f958-4059-a202-7c125e0401f9'] = $pane;
    $display->panels['middle'][1] = 'new-fb0d096d-f958-4059-a202-7c125e0401f9';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-fa08baa0-310f-4842-bc6f-36cc4681ea8f';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['resource_pages'] = $page;

  return $pages;

}
