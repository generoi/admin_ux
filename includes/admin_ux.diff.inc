<?php

/**
 * Implements hook_admin_paths().
 */
function admin_ux_admin_paths() {
  $paths = array(
    // Place diff pages in overlay
    'node/*/moderation/diff' => TRUE,
    'node/*/moderation/diff/view/*' => TRUE,
  );
  return $paths;
}

