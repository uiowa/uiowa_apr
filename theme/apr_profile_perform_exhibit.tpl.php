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
 *   Array of performance and exhibit information from perform_exhibit[] array.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-perform-exhibit"<?php print $attributes; ?>>
  <h2 class="field-header">Performances and Exhibits</h2>
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
