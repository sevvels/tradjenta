<?php
/**
 * @file
 * home_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function home_page_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
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
  $handler->name = 'page_home__panel';
  $handler->task = 'page';
  $handler->subtask = 'home';
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
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '90269dba-a078-48ce-b89c-5f5398219c66';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7c406209-70f3-4a07-aed6-aaaced683380';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '5',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
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
    $pane->uuid = '7c406209-70f3-4a07-aed6-aaaced683380';
    $display->content['new-7c406209-70f3-4a07-aed6-aaaced683380'] = $pane;
    $display->panels['middle'][0] = 'new-7c406209-70f3-4a07-aed6-aaaced683380';
    $pane = new stdClass();
    $pane->pid = 'new-510d57ab-22ca-4aab-82a2-54440740be85';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '2',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'l-subpage l-pageblock-landing landing',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '510d57ab-22ca-4aab-82a2-54440740be85';
    $display->content['new-510d57ab-22ca-4aab-82a2-54440740be85'] = $pane;
    $display->panels['middle'][1] = 'new-510d57ab-22ca-4aab-82a2-54440740be85';
    $pane = new stdClass();
    $pane->pid = 'new-09226a35-ee00-4507-a56f-2bccd5ce5f6d';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'quicktabs-efficacy';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'efficacy',
      'css_class' => 'l-subpage l-pageblock-efficacy efficacy',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '09226a35-ee00-4507-a56f-2bccd5ce5f6d';
    $display->content['new-09226a35-ee00-4507-a56f-2bccd5ce5f6d'] = $pane;
    $display->panels['middle'][2] = 'new-09226a35-ee00-4507-a56f-2bccd5ce5f6d';
    $pane = new stdClass();
    $pane->pid = 'new-87add9ee-3ff8-4592-b8b8-cef6bcecf97b';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '9',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'dosing',
      'css_class' => 'l-subpage l-pageblock-dosing m-dosing dosing',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '87add9ee-3ff8-4592-b8b8-cef6bcecf97b';
    $display->content['new-87add9ee-3ff8-4592-b8b8-cef6bcecf97b'] = $pane;
    $display->panels['middle'][3] = 'new-87add9ee-3ff8-4592-b8b8-cef6bcecf97b';
    $pane = new stdClass();
    $pane->pid = 'new-f2d75dce-ba44-497e-afab-323589399504';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '7',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'safety',
      'css_class' => 'l-subpage l-pageblock-safety safety m-safety',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'f2d75dce-ba44-497e-afab-323589399504';
    $display->content['new-f2d75dce-ba44-497e-afab-323589399504'] = $pane;
    $display->panels['middle'][4] = 'new-f2d75dce-ba44-497e-afab-323589399504';
    $pane = new stdClass();
    $pane->pid = 'new-bb56ef32-8076-455a-a300-c8f778d0f456';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '3',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'resources',
      'css_class' => 'l-subpage resources m-resources',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'bb56ef32-8076-455a-a300-c8f778d0f456';
    $display->content['new-bb56ef32-8076-455a-a300-c8f778d0f456'] = $pane;
    $display->panels['middle'][5] = 'new-bb56ef32-8076-455a-a300-c8f778d0f456';
    $pane = new stdClass();
    $pane->pid = 'new-f572d9a9-bcb5-4de3-ae70-d7c79b854aac';
    $pane->panel = 'middle';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '10',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'full',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'isi-footer',
      'css_class' => 'l-isi-main isi important-safety-information',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'f572d9a9-bcb5-4de3-ae70-d7c79b854aac';
    $display->content['new-f572d9a9-bcb5-4de3-ae70-d7c79b854aac'] = $pane;
    $display->panels['middle'][6] = 'new-f572d9a9-bcb5-4de3-ae70-d7c79b854aac';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  return $pages;

}
