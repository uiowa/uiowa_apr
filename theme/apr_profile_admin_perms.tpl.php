<?php

/**
 * @file apr_profile_admin_perms.tpl.php
 * Default theme implementation for the appointment fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of appointment information.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-admin-perms"<?php print $attributes; ?>>
  <div class="field-label"></div>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <!-- $data contains the pci.admin_perms[] array -->
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if (!empty($item['rank'])) $output .= $item['rank'];
          if (!empty($item['dep'])) $output .= " of " . $item['dep'];
          if (!empty($item['college'])) $output .= ", " . $item['college'];
          print $output;
        ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>

<?php endif; ?>
