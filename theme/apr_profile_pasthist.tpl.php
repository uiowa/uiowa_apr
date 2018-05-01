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
 *   Array of past history information from pasthist[] array.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-pasthist"<?php print $attributes; ?>>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if (!empty($item['title'])) $output .= $item['title'];
          if (!empty($item['dep'])) $output .= ", " . $item['dep'];
          if (!empty($item['org'])) $output .= ", " . $item['org'];
          if (!empty($item['city'])) $output .= ", " . $item['city'];
          if (!empty($item['state'])) $output .= ", " . $item['state'];
          if (!empty($item['start_date'])) {
            $output .= ", " . date("F Y", strtotime($item['start_date']));
            if (!empty($item['end_date']) && (date("F Y", strtotime($item['start_date'])) !== date("F Y", strtotime($item['end_date'])))) $output .= " - " . date("F Y", strtotime($item['end_date']));
            if (empty($item['end_date'])) $output .= " - Present";
          } else if (!empty($item['end_date'])) {
            $output .= ", " . date("F Y", strtotime($item['end_date']));
          }
          print $output;
        ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>

<?php endif; ?>
