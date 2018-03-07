<?php

/**
 * @file apr_profile_facdev.tpl.php
 * Default theme implementation for the professional development activities fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of professional development activities information from facdev[] array.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-facdev"<?php print $attributes; ?>>
  <div class="field-label">Professional Development</div>
  <ul class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <li class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if (!empty($item['title'])) {
            $output .= $item['title'];
            if (!empty($item['org'])) $output .= ", " . $item['org'];
          } else if (!empty($item['org'])) {
            $output .= $item['org'];
          }
          if (!empty($item['city'])) $output .= ", " . $item['city'];
          if (!empty($item['state'])) $output .= ", " . $item['state'];
          if (!empty($item['country'])) $output .= ", " . $item['country'];
          if (!empty($item['start_date'])) {
            $output .= ", " . date("Y", strtotime($item['start_date']));
            if (!empty($item['end_date']) && (date("Y", strtotime($item['start_date'])) !== date("Y", strtotime($item['end_date'])))) $output .= " - " . date("Y", strtotime($item['end_date']));
          } else if (!empty($item['end_date'])) {
            $output .= ", " . date("Y", strtotime($item['end_date']));
          }
          print $output;
        ?>
      </li>
    <?php endforeach; ?>
  </ul>
</div>

<?php endif; ?>
