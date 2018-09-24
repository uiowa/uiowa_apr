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
 *   Array of appointment information from pci.admin_perms[] array.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-admin-perms"<?php print $attributes; ?>>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if (!empty($item['title'])) {
            $output .= $item['title'];
          }
          elseif (!empty($item['rank'])) {
            $output .= $item['rank'];
          }
          if ((!empty($item['title']) || !empty($item['rank'])) && !empty($item['person_type'])) {
            if ($item['person_type'] == 'Staff' || $item['person_type'] == 'Student') $output .= ", ";
            else $output .= " of ";
          }
          if (!empty($item['dep'])) $output .= $item['dep'];
          if (!empty($item['college'])) $output .= ", " . $item['college'];
          print $output;
        ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>

<?php endif; ?>
