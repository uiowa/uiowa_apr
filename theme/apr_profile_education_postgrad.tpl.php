<?php

/**
 * @file
 * Default theme implementation for the post-graduate education fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of post-grad education information from education_postgrad[] array.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-education-postgrad"<?php print $attributes; ?>>
  <h2 class="field-header">Education (Post Graduate)</h2>
  <ul class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <li class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if (!empty($item['deg']) && ($item['deg'] !== 'Other')) {
            $output .= $item['deg'];
          } elseif (!empty($item['desc'])) {
            $output .= $item['desc'];
          }
          if (!empty($item['major'])) {
            $output .= " in " . $item['major'] . "";
          }
          if (!empty($item['school'])) {
            $output .= ", " . $item['school'];
          }
          if (!empty($item['city'])) {
            $output .= ", " . $item['city'];
          }
          if (!empty($item['state'])) {
            $output .= ", " . $item['state'];
          }
          if (!empty($item['country'])) {
            $output .= ", " . $item['country'];
          }
          if (!empty($item['start_date'])) {
            $output .= ", " . date("Y", strtotime($item['start_date']));
            if (!empty($item['end_date']) && (date("Y", strtotime($item['start_date'])) !== date("Y", strtotime($item['end_date'])))) {
              $output .= " - " . date("Y", strtotime($item['end_date']));
            }
          } elseif (!empty($item['end_date'])) {
            $output .= ", " . date("Y", strtotime($item['end_date']));
          }
          print $output;
        ?>
      </li>
    <?php endforeach; ?>
  </ul>
</div>

<?php endif; ?>
