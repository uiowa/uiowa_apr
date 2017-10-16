<?php

/**
 * @file apr_profile_present.tpl.php
 * Default theme implementation for the presentations fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of presentations information.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-present"<?php print $attributes; ?>>
  <div class="field-label">Presentations</div>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <!-- $data contains the present[] array -->
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = $item['formatted'];
          print $output;
        ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>

<?php endif; ?>
