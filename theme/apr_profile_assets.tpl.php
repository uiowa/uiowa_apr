<?php

/**
 * @file apr_profile_assets.tpl.php
 * Default theme implementation for the assets fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of assets information.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-assets"<?php print $attributes; ?>>
  <div class="field-label"></div>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <!-- $data contains the pci.assets[] array -->
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if (!empty($item['uri'])) $output .= "<img src='" . $item['uri'] . "' alt='" . $item['hawkid'] . " photo'>";
          print $output;
        ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>

<?php endif; ?>
