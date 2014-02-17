<?php

/**
 * Implements hook_views_default_views_alter().
 */
function admin_ux_views_default_views_alter(&$views) {
  if (isset($views['admin_views_node'])) {
    _admin_ux_admin_views_node_alter($views);
  }
}

/**
 * Insert an array element inside another array at a specified position
 *
 * @param array $array
 *   The array to modify in place
 * @param array $new
 *   The array to insert (associative)
 * @param int $position
 *   The position after which to insert the new array (begins at 1).
 */
function _admin_ux_array_insert_after(&$array, $new, $position) {
  $result = array_slice($array, 0, $position, true) +
    $new + array_slice($array, $position, count($array) - 1, true);

  $array = $result;
}

/**
 * Alter the default view by admin_views to display language, post date and a 
 * translate link
 *
 * @see admin_ux_views_default_views_alter().
 */
function _admin_ux_admin_views_node_alter(&$views) {
  $display = &$views['admin_views_node']->display['default'];
  // add language column after type
  $display->display_options['style_options']['columns']['language'] = 'language';
  $display->display_options['style_options']['info']['language'] = array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  );
  $field_language = array();
  $field_language['language']['id'] = 'language';
  $field_language['language']['table'] = 'node';
  $field_language['language']['field'] = 'language';
  _admin_ux_array_insert_after($display->display_options['fields'], $field_language, 4);

  // add created column after changed
  $display->display_options['style_options']['columns']['created'] = 'created';
  $display->display_options['style_options']['info']['created'] = array(
    'sortable' => 1,
    'default_sort_order' => 'asc',
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  );
  $field_created = array();
  $field_created['created']['id'] = 'created';
  $field_created['created']['table'] = 'node';
  $field_created['created']['field'] = 'created';
  $field_created['created']['date_format'] = 'short';
  _admin_ux_array_insert_after($display->display_options['fields'], $field_created, 8);

  // add translate column after edit
  $display->display_options['style_options']['columns']['translate_node'] = 'translate_node';
  $display->display_options['style_options']['info']['translate_node'] = array(
    'align' => '',
    'separator' => '',
    'empty_column' => 0,
  );
  $field_translate_node = array();
  $field_translate_node['translate_node']['id'] = 'translate_node';
  $field_translate_node['translate_node']['table'] = 'node';
  $field_translate_node['translate_node']['field'] = 'translate_node';
  $field_translate_node['translate_node']['label'] = '';
  _admin_ux_array_insert_after($display->display_options['fields'], $field_translate_node, 10);

  /* Filter criterion: Content: Language */
  $filter_language = array();
  $filter_language['language']['id'] = 'language';
  $filter_language['language']['table'] = 'node';
  $filter_language['language']['field'] = 'language';
  $filter_language['language']['exposed'] = TRUE;
  $filter_language['language']['expose']['operator_id'] = 'language_op';
  $filter_language['language']['expose']['label'] = 'Language';
  $filter_language['language']['expose']['operator'] = 'language_op';
  $filter_language['language']['expose']['identifier'] = 'language';
  $filter_language['language']['expose']['remember_roles'] = TRUE;
  _admin_ux_array_insert_after($display->display_options['filters'], $filter_language, 2);
}
