<?php

/**
 * @file apr_profile_education_postgrad.tpl.php
 * Default theme implementation for the post-graduate education fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of post-graduate education information.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-education-postgrad"<?php print $attributes; ?>>
  <div class="field-label">Education (Post Graduate)</div>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <!-- $data contains the education_postgrad[] array -->
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if ($item['deg']) $output .= $item['deg'];
          else if ($item['desc']) $output .= $item['desc'];
          if ($item['major']) $output .= " in " . $item['major'] . "";
          if ($item['school']) $output .= " - " . $item['school'];
          if ($item['city']) {
            $output .= ", " . $item['city'];
            if ($item['state']) $output .= ", " . $item['state'];
          } else if ($item['state']) {
            $output .= ", " . $item['state'];
          }
          if ($item['start_date']) {
            $output .= ", " . date("Y", strtotime($item['start_date']));
            if (isset($item['end_date']) && (date("Y", strtotime($item['start_date'])) !== date("Y", strtotime($item['end_date'])))) $output .= " - " . date("Y", strtotime($item['end_date']));
          } else if ($item['end_date']) {
            $output .= ", " . date("Y", strtotime($item['end_date']));
          }
          print $output;
        ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>

<?php endif; ?>
