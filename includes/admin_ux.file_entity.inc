<?php

/**
 * Implements hook_form_FORM_ID_alter().
 */
function admin_ux_form_file_entity_add_upload_alter(&$form, &$form_state) {
  foreach(array('metatags', 'redirect', 'path', 'user', '') as $key) {
    if (isset($form[$key])) {
      $form[$key]['#access'] = FALSE;
    }
  }
  // Hide destination if there's only one available.
  if (isset($form['destination']['scheme']) && count($form['destination']['scheme']['#options']) === 1) {
    $form['destination']['#access'] = FALSE;
  }
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function admin_ux_form_file_entity_edit_alter(&$form, &$form_state) {
  admin_ux_form_file_entity_add_upload_alter($form, $form_state);
}
