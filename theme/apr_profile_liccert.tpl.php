<?php

/**
 * @file apr_profile_liccert.tpl.php
 * Default theme implementation for the licensures and certifications fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of licensures and certifications information.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-liccert"<?php print $attributes; ?>>
  <div class="field-label">Licensures and Certifications</div>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <!-- $data contains the liccert[] array -->
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if (!empty($item['title'])) $output .= $item['title'];
          if (!empty($item['org'])) $output .= ", " . $item['org'];
          if (!empty($item['certnum'])) $output .= " (" . $item['certnum'] . ")";
          print $output;
        ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>

<?php endif; ?>
