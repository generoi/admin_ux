<?php

/**
 * Implements hook_form_FORM_ID_alter().
 */
function admin_ux_form_block_admin_configure_alter(&$form, &$form_state) {
  // If bean and DS is installed then the title is managed through bean settings.
  if (module_exists('bean') && module_exists('ds')) {
    $form['settings']['title']['#description'] = '<em>' . t('This is not used in favour of bean settings! Select edit block instead of configure in the gear menu to change the title') . '</em>';
  }
  // If context is installed then it should be used instead of visibility settings
  if (module_exists('context')) {
    $form['visibility_title']['#access'] = FALSE;
    $form['visibility']['#access'] = FALSE;
  }
  // Move block usage further up and make it collapsible
  if (module_exists('block_usage')) {
    $form['block_usage']['#weight'] = 0;
    $form['block_usage']['#collapsible'] = TRUE;
  }
  // Collapse cache control settings.
  if (module_exists('cache_control')) {
    $form['cache_control']['#collapsible'] = TRUE;
    $form['cache_control']['#collapsed'] = TRUE;
  }
  // Provide common case example in description for blocktheme variables.
  if (module_exists('blocktheme')) {
    $form['custom_block_theme']['blocktheme_vars']['#description'] .= ' ' . t('Eg. @example', array('@example' => 'class|columns large-12'));
  }
}

