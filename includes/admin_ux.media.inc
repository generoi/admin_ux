<?php

/**
 * Implements hook_form_FORM_ID_alter().
 */
function admin_ux_form_media_format_form_alter(&$form, &$form_state) {
  if (isset($form['options']['fields']['redirect'])) {
    $form['options']['fields']['redirect']['#access'] = FALSE;
  }
}

/**
 * Implements hook_form_FORM_ID_alter().
 */
function admin_ux_form_media_wysiwyg_format_form_alter(&$form, &$form_state) {
  admin_ux_form_media_format_form_alter($form, $form_state);
}
