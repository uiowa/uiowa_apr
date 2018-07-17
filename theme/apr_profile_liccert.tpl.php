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
  <h2 class="field-header">Licensures and Certifications</h2>
  <ul class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <li class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if (!empty($item['formatted'])) $output .= $item['formatted'];
          print $output;
        ?>
      </li>
    <?php endforeach; ?>
  </ul>
</div>

<?php endif; ?>