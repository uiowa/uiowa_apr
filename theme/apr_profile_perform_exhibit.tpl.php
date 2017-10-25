<?php

/**
 * @file apr_profile_perform_exhibit.tpl.php
 * Default theme implementation for the performances and exhibits fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of performances and exhibits information.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-perform-exhibit"<?php print $attributes; ?>>
  <div class="field-label">Performances and Exhibits</div>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <!-- $data contains the perform_exhibit[] array -->
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if (!empty($item['formatted'])) $output .= $item['formatted'];
          print $output;
        ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>

<?php endif; ?>
