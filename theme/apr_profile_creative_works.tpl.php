<?php

/**
 * @file apr_profile_creative_works.tpl.php
 * Default theme implementation for the creative works fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of creative works information.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-creative-works"<?php print $attributes; ?>>
  <div class="field-label">Creative Works</div>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <!-- $data contains the creative_works[] array -->
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
