(function ($) {
  'use strict';

  Drupal.behaviors.admin_ux_chosen = {
    attach: function (context, settings) {
      if (jQuery.fn.chosen) {
        // Active chosen on additional settings, which are force disabled by
        // Chosen itself.
        var chosenSettings = settings.chosen || Drupal.settings.chosen || {};
        // Force a width as calculations are wrong when element is hidden.
        // @see https://github.com/harvesthq/chosen/issues/92
        chosenSettings.width = '300px';
        var fieldUI = '[class*="form-item-additional-settings-"] select';
        var contextUI = '.context-plugin-form select[multiple]';

        $([fieldUI, contextUI].join(', ')).chosen(chosenSettings);
      }
    }
  };
}(jQuery));
