(function ($) {
  'use strict';

  Drupal.behaviors.adminUXNode = {
    attach: function (context, settings) {
      // Hide the body label in Javascript if requested, which allows the summary
      // Javacript to continue working.
      $('#node-edit .admin-ux-node-hide-body-label .form-item-body-und-0-value label', context)
        .once('admin-ux-node-hide-body-label')
        .wrapInner('<span class="element-invisible"></span>')
        .css('text-align', 'right');
    }
  };

  /**
   * Automatically fill in a menu link title, if possible.
   *
   * NOTE: This behavior is a copy and paste from the Core Menu module's menu.js
   * script. It has been adapted to update proper targeting. This brings back
   * the core functionality.
   */
  Drupal.behaviors.adminLinkAutomaticTitle = {
    attach: function (context) {
      $('.pane-node-form-menu', context).each(function () {
        // Try to find menu settings widget elements as well as a 'title' field in
        // the form, but play nicely with user permissions and form alterations.
        var $checkbox = $('.form-item-menu-enabled input', this);
        var $linkTitle = $('.form-item-menu-link-title input', context);
        var $title = $(this).closest('form').find('.form-item-title input');
        // Bail out if we do not have all required fields.
        if (!($checkbox.length && $linkTitle.length && $title.length)) {
          return;
        }
        // If there is a link title already, mark it as overridden. The user expects
        // that toggling the checkbox twice will take over the node's title.
        if ($checkbox.is(':checked') && $linkTitle.val().length) {
          $linkTitle.data('menuLinkAutomaticTitleOveridden', true);
        }
        // Whenever the value is changed manually, disable this behavior.
        $linkTitle.keyup(function () {
          $linkTitle.data('menuLinkAutomaticTitleOveridden', true);
        });
        // Global trigger on checkbox (do not fill-in a value when disabled).
        $checkbox.change(function () {
          if ($checkbox.is(':checked')) {
            if (!$linkTitle.data('menuLinkAutomaticTitleOveridden')) {
              $linkTitle.val($title.val());
            }
          } else {
            $linkTitle.val('');
            $linkTitle.removeData('menuLinkAutomaticTitleOveridden');
          }
          $checkbox.closest('fieldset.vertical-tabs-pane').trigger('summaryUpdated');
          $checkbox.trigger('formUpdated');
        });
        // Take over any title change.
        $title.keyup(function () {
          if (!$linkTitle.data('menuLinkAutomaticTitleOveridden') && $checkbox.is(':checked')) {
            $linkTitle.val($title.val());
            $linkTitle.val($title.val()).trigger('formUpdated');
          }
        });
      });
    }
  };
}(jQuery));
