<?php

/**
 * @file
 * Default theme implementation for the grants and contracts fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of grants and contracts information from congrant[] array.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-congrant"<?php print $attributes; ?>>
  <h2 class="field-header">Selected Grants and Contracts</h2>
  <ul class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <li class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if (!empty($item['formatted'])) {
            $output .= $item['formatted'];
          }
          print $output;
        ?>
      </li>
    <?php endforeach; ?>
  </ul>
</div>

<?php endif; ?>
