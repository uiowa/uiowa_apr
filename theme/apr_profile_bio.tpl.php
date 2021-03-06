<?php

/**
 * @file
 * Default theme implementation for the bio field.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of bio information from pci.info.bio.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-bio"<?php print $attributes; ?>>
  <h2 class="field-header">Biography</h2>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = $item;
          print $output;
        ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>

<?php endif; ?>
