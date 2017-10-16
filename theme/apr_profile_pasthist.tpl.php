<?php

/**
 * @file apr_profile_pasthist.tpl.php
 * Default theme implementation for the past history fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of past history titles.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-pasthist"<?php print $attributes; ?>>
  <div class="field-label">Past History</div>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <!-- $data contains the pasthist[] array -->
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = $item['title'];
          if ($item['org']) {
            $output .= ", " . $item['org'];
            if ($item['dep']) $output .= " - " . $item['dep'];
          } else if ($item['dep']) {
            $output .= ", " . $item['dep'];
          }
          if ($item['city']) {
            $output .= ", " . $item['city'];
            if ($item['state']) $output .= ", " . $item['state'];
          } else if ($item['state']) {
            $output .= ", " . $item['state'];
          }
          if ($item['start_date']) {
            $output .= ", " . date("F Y", strtotime($item['start_date']));
            if (isset($item['end_date']) && (date("F Y", strtotime($item['start_date'])) !== date("F Y", strtotime($item['end_date'])))) $output .= " - " . date("F Y", strtotime($item['end_date']));
            if (empty($item['end_date'])) $output .= " - Present";
          } else if ($item['end_date']) {
            $output .= ", " . date("F Y", strtotime($item['end_date']));
          }
          print $output;
        ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>

<?php endif; ?>
