<?php

/**
 * @file apr_profile_alt_contacts.tpl.php
 * Default theme implementation for the contact information fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of contact information.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-alt-contacts"<?php print $attributes; ?>>
  <div class="field-label">Contact Information</div>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <!-- $data contains the pci.alt_contacts[] array -->
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if (!empty($item['type'])) $output .= $item['type'] . ": ";
          if (!empty($item['room'])) {
            $output .= $item['room'];
            if (!empty($item['building'])) $output .= " " . $item['building'] . "<br/>";
          } else if (!empty($item['building'])) {
            $output .= $item['building'] . "<br/>";
          }
          else if (!empty($item['address'])) $output .= $item['address'] . "<br/>";
          if (!empty($item['city'])) {
            $output .= $item['city'];
            if (!empty($item['state'])) $output .= ", " . $item['state'];
            if (!empty($item['zip'])) $output .= " " . $item['zip'] . "<br/>";
            else $output .= "<br/>";
          } else if (!empty($item['state'])) {
            $output .= $item['state'];
            if (!empty($item['zip'])) $output .= " " . $item['zip'] . "<br/>";
            else $output .= "<br/>";
          }
          if (!empty($item['phone'])) $output .= "<a href='tel:+1-" . $item['phone'] . "'>" . $item['phone'] . "</a>";
          print $output;
        ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>

<?php endif; ?>