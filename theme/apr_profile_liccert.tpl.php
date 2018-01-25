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
 *   Array of licensures and certifications information from liccert[] array.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-liccert"<?php print $attributes; ?>>
  <div class="field-label">Licensures and Certifications</div>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
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
