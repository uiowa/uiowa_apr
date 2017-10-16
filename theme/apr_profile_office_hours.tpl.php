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
 *   Array of office hours information.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-office-hours"<?php print $attributes; ?>>
  <div class="field-label">Office Hours</div>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <!-- $data contains the pci.office_hours[] array -->
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if ($item['day']) $output .= $item['day'] . ": ";
          if ($item['from']) {
            $output .= $item['from'];
            if (isset($item['to']) && ($item['from'] !== $item['to'])) $output .= " - " . $item['to'];
          } else if ($item['to']) {
            $output .= $item['to'];
          }
          print $output;
        ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>

<?php endif; ?>
