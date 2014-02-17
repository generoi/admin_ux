<?php

/**
 * Implements hook_form_FORM_ID_alter().
 */
function admin_ux_form_file_entity_add_upload_alter(&$form, &$form_state) {
  if (isset($form['metatags'])) {
    $form['metatags']['#access'] = FALSE;
  }
  if (isset($form['redirect'])) {
    $form['redirect']['#access'] = FALSE;
  }
}
