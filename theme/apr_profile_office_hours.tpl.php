<?php

/**
 * @file apr_profile_office_hours.tpl.php
 * Default theme implementation for the office hours fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of office hours information from pci.office_hours[] array.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-office-hours"<?php print $attributes; ?>>
  <h2 class="field-header">Office Hours</h2>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if (!empty($item['day'])) $output .= $item['day'] . ": ";
          if (!empty($item['from'])) {
            $output .= $item['from'];
            if (!empty($item['to']) && ($item['from'] !== $item['to'])) $output .= " - " . $item['to'];
          } else if (!empty($item['to'])) {
            $output .= $item['to'];
          }
          print $output;
        ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>

<?php endif; ?>
