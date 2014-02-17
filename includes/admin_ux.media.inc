<?php

/**
 * Implements hook_form_FORM_ID_alter().
 */
function admin_ux_form_media_format_form_alter(&$form, &$form_state) {
  $form['options']['fields']['redirect']['#access'] = FALSE;
}

