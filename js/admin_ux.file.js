(function ($) {
  'use strict';

  /**
   * Set empty alt and title fields on files to the parent node edit forms title.
   */
  Drupal.behaviors.admin_ux_file = {
    attach: function (context) {
      var $title = $('#edit-title-field', parent.document).find('input');
      if (!$title.length) return;
      var title = $title.val();
      var $altField = $(context).find('#edit-field-file-image-alt-text input');
      var $titleField = $(context).find('#edit-field-file-image-title-text input');

      if ($altField.length && $altField.val().length === 0) {
        $altField.val(title);
      }
      if ($titleField.length && $titleField.val().length === 0) {
        $titleField.val(title);
      }
    }
  };
}(jQuery));
