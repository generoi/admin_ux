<?php

/**
 * Modify node forms with some UX improvements.
 *
 * @see admin_ux_form_alter().
 */
function _admin_ux_redirect_outgoing(&$form, &$form_state) {
  // Show outgoing redirects for nodes. UX improvement.
  if (isset($form['redirect']) && isset($form['nid']['#value']) && isset($form['language']['#value'])) {
    $uri = 'node/' . $form['nid']['#value'];
    $info = entity_get_info('node');

    $outgoing_redirect = redirect_load_multiple(FALSE, array('source' => $uri));
    $header = array('source', 'status_code', 'language', 'count', 'access', 'operations');
    $outgoing_list_table = redirect_list_table($outgoing_redirect, $header);
    $form['redirect']['outgoing'] = array('#markup' => '<h4>' . t('Outgoing URL redirect') . '</h4>');
    $form['redirect']['outgoing_list'] = $outgoing_list_table['list'];

    $redirect = array(
      'source' => $uri,
      'language' => $form['language']['#value'],
    );

    $form['redirect']['actions_out'] = array(
      '#theme' => 'links',
      '#links' => array(),
      '#attributes' => array('class' => array('action-links')),
    );
    if (redirect_access('create', 'redirect') && count($outgoing_list_table['list']['#rows']) < 1) {
      $form['redirect']['actions_out']['#links']['add'] = array(
        'title' => t('Add outgoing URL redirect from this @entitytype', array('@entitytype' => drupal_strtolower($info['label']))),
        'href' => 'admin/config/search/redirect/add',
        'query' => array_filter($redirect) + drupal_get_destination(),
      );
    }
  }
}
