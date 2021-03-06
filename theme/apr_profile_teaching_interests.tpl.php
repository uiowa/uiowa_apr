<?php

/**
 * @file
 * Default theme implementation for the teaching interests fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of teaching interests information from pci.info.teaching_interests.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-teaching-interests"<?php print $attributes; ?>>
  <h2 class="field-header">Teaching Interests</h2>
  <ul class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <li class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = $item;
          print $output;
        ?>
      </li>
    <?php endforeach; ?>
  </ul>
</div>

<?php endif; ?>
