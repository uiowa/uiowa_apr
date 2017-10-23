<?php

/**
 * @file apr_profile_education.tpl.php
 * Default theme implementation for the education fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of education information.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-education"<?php print $attributes; ?>>
  <div class="field-label">Education</div>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <!-- $data contains the education[] array -->
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if ($item['deg']) $output .= $item['deg'];
          else if ($item['deg_title']) $output .= $item['deg_title'];
          if ($item['major']) $output .= " in " . $item['major'] . "";
          if ($item['school']) $output .= " - " . $item['school'];
          if ($item['city']) {
            $output .= ", " . $item['city'];
            if ($item['state']) $output .= ", " . $item['state'];
          } else if ($item['state']) {
            $output .= ", " . $item['state'];
          }
          if ($item['completed_date']) $output .= ", " . date("Y", strtotime($item['completed_date']));
          print $output;
        ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>

<?php endif; ?>
