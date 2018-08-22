<?php

/**
 * @file apr_profile_editrev.tpl.php
 * Default theme implementation for the review and editorial work fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of review and editorial work information from editrev[] array.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-editrev"<?php print $attributes; ?>>
  <h2 class="field-header">Selected Review and Editorial Work</h2>
  <ul class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <li class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if (!empty($item['role'])) {
            $output .= $item['role'];
            if (!empty($item['title'])) $output .= ", " . $item['title'];
          } else if (!empty($item['title'])) {
            $output .= $item['title'];
          }
          if (!empty($item['start_date'])) {
            $output .= ", " . date("F Y", strtotime($item['start_date']));
            if (!empty($item['end_date']) && (date("F Y", strtotime($item['start_date'])) !== date("F Y", strtotime($item['end_date'])))) $output .= " - " . date("F Y", strtotime($item['end_date']));
          } else if (!empty($item['end_date'])) {
            $output .= ", " . date("F Y", strtotime($item['end_date']));
          }
          print $output;
        ?>
      </li>
    <?php endforeach; ?>
  </ul>
</div>

<?php endif; ?>
