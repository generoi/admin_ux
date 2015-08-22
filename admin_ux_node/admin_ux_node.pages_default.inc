<?php
/**
 * @file
 * admin_ux_node.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function admin_ux_node_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit__default_node_edit';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Default Node Edit',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => 'node-edit',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'default_node_edit',
  );
  $display = new panels_display();
  $display->layout = 'node_edit';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'left' => NULL,
      'right' => NULL,
      'footer' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd2f66ae7-eedb-4122-a1e4-1f77bd95ec22';
  $display->content = array();
  $display->panels = array();
  $pane = new stdClass();
  $pane->pid = 'new-fe648a4f-b22b-4060-816c-2a7d02f61566';
  $pane->panel = 'left';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:title_field';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'naked',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = 'fe648a4f-b22b-4060-816c-2a7d02f61566';
  $display->content['new-fe648a4f-b22b-4060-816c-2a7d02f61566'] = $pane;
  $display->panels['left'][0] = 'new-fe648a4f-b22b-4060-816c-2a7d02f61566';
  $pane = new stdClass();
  $pane->pid = 'new-152bc3af-4705-40f6-8588-2895814a460c';
  $pane->panel = 'left';
  $pane->type = 'node_form_title';
  $pane->subtype = 'node_form_title';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'naked',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '152bc3af-4705-40f6-8588-2895814a460c';
  $display->content['new-152bc3af-4705-40f6-8588-2895814a460c'] = $pane;
  $display->panels['left'][1] = 'new-152bc3af-4705-40f6-8588-2895814a460c';
  $pane = new stdClass();
  $pane->pid = 'new-bb05cbce-7799-4a76-a861-20a19e214440';
  $pane->panel = 'left';
  $pane->type = 'node_form_path';
  $pane->subtype = 'node_form_path';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'naked',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'bb05cbce-7799-4a76-a861-20a19e214440';
  $display->content['new-bb05cbce-7799-4a76-a861-20a19e214440'] = $pane;
  $display->panels['left'][2] = 'new-bb05cbce-7799-4a76-a861-20a19e214440';
  $pane = new stdClass();
  $pane->pid = 'new-53ece3a2-14de-4314-b4b8-32a2cfbc979c';
  $pane->panel = 'left';
  $pane->type = 'entity_form_field';
  $pane->subtype = 'node:body';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'label' => '',
    'formatter' => '',
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'naked',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '53ece3a2-14de-4314-b4b8-32a2cfbc979c';
  $display->content['new-53ece3a2-14de-4314-b4b8-32a2cfbc979c'] = $pane;
  $display->panels['left'][3] = 'new-53ece3a2-14de-4314-b4b8-32a2cfbc979c';
  $pane = new stdClass();
  $pane->pid = 'new-c3236eeb-cdb4-4efd-957a-f41da6f38919';
  $pane->panel = 'left';
  $pane->type = 'form';
  $pane->subtype = 'form';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'naked',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = 'c3236eeb-cdb4-4efd-957a-f41da6f38919';
  $display->content['new-c3236eeb-cdb4-4efd-957a-f41da6f38919'] = $pane;
  $display->panels['left'][4] = 'new-c3236eeb-cdb4-4efd-957a-f41da6f38919';
  $pane = new stdClass();
  $pane->pid = 'new-0b3eb1a9-27c0-45e1-be82-3e6313a780e1';
  $pane->panel = 'right';
  $pane->type = 'node_form_language';
  $pane->subtype = 'node_form_language';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'naked',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 0;
  $pane->locks = array();
  $pane->uuid = '0b3eb1a9-27c0-45e1-be82-3e6313a780e1';
  $display->content['new-0b3eb1a9-27c0-45e1-be82-3e6313a780e1'] = $pane;
  $display->panels['right'][0] = 'new-0b3eb1a9-27c0-45e1-be82-3e6313a780e1';
  $pane = new stdClass();
  $pane->pid = 'new-1f510b42-6aa5-4ebe-9b6d-913a35f949fe';
  $pane->panel = 'right';
  $pane->type = 'node_form_menu';
  $pane->subtype = 'node_form_menu';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'naked',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 1;
  $pane->locks = array();
  $pane->uuid = '1f510b42-6aa5-4ebe-9b6d-913a35f949fe';
  $display->content['new-1f510b42-6aa5-4ebe-9b6d-913a35f949fe'] = $pane;
  $display->panels['right'][1] = 'new-1f510b42-6aa5-4ebe-9b6d-913a35f949fe';
  $pane = new stdClass();
  $pane->pid = 'new-a1dcba80-13a5-4d64-a620-30ca9a5759da';
  $pane->panel = 'right';
  $pane->type = 'node_form_comment';
  $pane->subtype = 'node_form_comment';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'naked',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 2;
  $pane->locks = array();
  $pane->uuid = 'a1dcba80-13a5-4d64-a620-30ca9a5759da';
  $display->content['new-a1dcba80-13a5-4d64-a620-30ca9a5759da'] = $pane;
  $display->panels['right'][2] = 'new-a1dcba80-13a5-4d64-a620-30ca9a5759da';
  $pane = new stdClass();
  $pane->pid = 'new-22b66059-f781-47a3-bcfe-6ba3ab9d6156';
  $pane->panel = 'right';
  $pane->type = 'node_form_publishing';
  $pane->subtype = 'node_form_publishing';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'naked',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 3;
  $pane->locks = array();
  $pane->uuid = '22b66059-f781-47a3-bcfe-6ba3ab9d6156';
  $display->content['new-22b66059-f781-47a3-bcfe-6ba3ab9d6156'] = $pane;
  $display->panels['right'][3] = 'new-22b66059-f781-47a3-bcfe-6ba3ab9d6156';
  $pane = new stdClass();
  $pane->pid = 'new-41fc5a40-e00f-4055-9aff-275cb55eaf38';
  $pane->panel = 'right';
  $pane->type = 'node_form_author';
  $pane->subtype = 'node_form_author';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'naked',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 4;
  $pane->locks = array();
  $pane->uuid = '41fc5a40-e00f-4055-9aff-275cb55eaf38';
  $display->content['new-41fc5a40-e00f-4055-9aff-275cb55eaf38'] = $pane;
  $display->panels['right'][4] = 'new-41fc5a40-e00f-4055-9aff-275cb55eaf38';
  $pane = new stdClass();
  $pane->pid = 'new-3b71d0b4-f12d-46e5-b603-47f973c8efab';
  $pane->panel = 'right';
  $pane->type = 'node_form_log';
  $pane->subtype = 'node_form_log';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'naked',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 5;
  $pane->locks = array();
  $pane->uuid = '3b71d0b4-f12d-46e5-b603-47f973c8efab';
  $display->content['new-3b71d0b4-f12d-46e5-b603-47f973c8efab'] = $pane;
  $display->panels['right'][5] = 'new-3b71d0b4-f12d-46e5-b603-47f973c8efab';
  $pane = new stdClass();
  $pane->pid = 'new-ac1b1982-fafa-41ea-b8dc-cad7aa1ec9d4';
  $pane->panel = 'right';
  $pane->type = 'node_form_buttons';
  $pane->subtype = 'node_form_buttons';
  $pane->shown = TRUE;
  $pane->access = array();
  $pane->configuration = array(
    'context' => 'argument_node_edit_1',
    'override_title' => 0,
    'override_title_text' => '',
    'override_title_heading' => 'h2',
  );
  $pane->cache = array();
  $pane->style = array(
    'style' => 'naked',
    'settings' => NULL,
  );
  $pane->css = array();
  $pane->extras = array();
  $pane->position = 6;
  $pane->locks = array();
  $pane->uuid = 'ac1b1982-fafa-41ea-b8dc-cad7aa1ec9d4';
  $display->content['new-ac1b1982-fafa-41ea-b8dc-cad7aa1ec9d4'] = $pane;
  $display->panels['right'][6] = 'new-ac1b1982-fafa-41ea-b8dc-cad7aa1ec9d4';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0b3eb1a9-27c0-45e1-be82-3e6313a780e1';
  $handler->conf['display'] = $display;
  $export['node_edit__default_node_edit'] = $handler;

  return $export;
}
