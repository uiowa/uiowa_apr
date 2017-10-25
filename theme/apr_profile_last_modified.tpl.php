<?php

/**
 * @file apr_profile_last_modified.tpl.php
 * Default theme implementation for the last_modified_date field.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of last modified date information.
 */
?>

<?php
date_default_timezone_set('America/Chicago');
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-last-modified"<?php print $attributes; ?>>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <!-- $data contains the last_modified_date value -->
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "<strong>Last Modified Date:</strong> " . date('F j, Y', ($item / 1000));
          print $output;
        ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>

<?php endif; ?>
