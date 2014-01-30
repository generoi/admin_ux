<?php

/**
 * Modify node forms with some UX improvements.
 *
 * @see admin_ux_form_alter().
 */
function _admin_ux_metatag_description(&$form, &$form_state) {
  // Improve UX of the metatags description field to display current
  // character count so the author can keep track of the google snippet
  // length.
  if (isset($form['metatags']['description']['value'])) {
    $form['#attached']['js'][] = drupal_get_path('module', 'admin_ux') . '/admin_ux.admin.js';
    $form['metatags']['description']['value']['#suffix'] = '<div id="metatags-description-value-length">' . t('Currently !span characters.', array('!span' => '<span class="count">0</span>')) . '</div>';
  }
}
