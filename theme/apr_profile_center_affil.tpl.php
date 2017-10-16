<?php

/**
 * @file apr_profile_center_affil.tpl.php
 * Default theme implementation for the center affiliations fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of center affiliations information.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-center-affil"<?php print $attributes; ?>>
  <div class="field-label">Center, Program and Institute Affiliations</div>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <!-- $data contains the pci.info.center_affil value -->
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = $item;
          print $output;
        ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>

<?php endif; ?>
