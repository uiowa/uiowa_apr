<?php

/**
 * @file apr_profile_centers.tpl.php
 * Default theme implementation for the centers fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of centers information from pci.centers[] array.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-centers"<?php print $attributes; ?>>
  <div class="field-label">Center, Program and Institute Affiliations</div>
  <ul class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <li class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if (!empty($item['url'])) $output .= "<a href='" . $item['url'] . "'>";
          if (!empty($item['center'])) $output .= $item['center'];
          if (!empty($item['url'])) $output .= "</a>";
          print $output;
        ?>
      </li>
    <?php endforeach; ?>
  </ul>
</div>

<?php endif; ?>
