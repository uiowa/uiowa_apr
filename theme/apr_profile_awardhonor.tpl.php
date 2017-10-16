<?php

/**
 * @file apr_profile_awardhonor.tpl.php
 * Default theme implementation for the awards and honors fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of awards and honors information.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-awardhonor"<?php print $attributes; ?>>
  <div class="field-label">Awards and Honors</div>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <!-- $data contains the awardhonor[] array -->
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = $item['name'];
          if ($item['org']) $output .= ", " . $item['org'];
          if ($item['city']) {
            $output .= " - " . $item['city'];
            if ($item['state']) $output .= ", " . $item['state'];
          } else if ($item['state']) {
            $output .= " - " . $item['state'];
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
