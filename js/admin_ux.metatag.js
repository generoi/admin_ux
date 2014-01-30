(function($){
  /**
   * Display the current character count in the metatag description field.
   */
  Drupal.behaviors.admin_ux_metatag = {
    attach: function(context, settings) {
      var $metatags_description = $('#edit-metatags-description-value').once('admin-ux-metatag');
      if ($metatags_description.length) {
        $metatags_description.bind('keyup blur', Drupal.admin_ux.updateDescriptionCounter);
        Drupal.admin_ux.updateDescriptionCounter.call($metatags_description[0]);
      }
    }
  };

  Drupal.admin_ux = Drupal.admin_ux || {};
  Drupal.admin_ux.counter_selector = '#metatags-description-value-length .count';

  Drupal.admin_ux.updateDescriptionCounter = function() {
    var length = this.value.length;

    $(Drupal.admin_ux.counter_selector).text(length > 150 ? 150 : length);

    if (length > 150) {
      this.value = this.value.substr(0, 150);
      return false;
    }
  };

}(jQuery));
