<div class="panel-node-edit" <?php if (!empty($css_id)) print "id=\"$css_id\""; ?>>
  <div class="panel-node-edit-row">
    <?php if (!empty($content['left'])): ?>
      <div class="panel-node-edit-left">
        <?php print $content['left']; ?>
      </div>
    <?php endif; ?>

    <?php if (!empty($content['right'])): ?>
      <div class="panel-node-edit-right">
        <?php print $content['right']; ?>
      </div>
    <?php endif; ?>
  </div>

  <?php if (!empty($content['footer'])): ?>
    <div class="panel-node-edit-row">
      <div class="panel-node-edit-column">
        <?php print $content['footer']; ?>
      </div>
    </div>
  <?php endif; ?>
</div>

