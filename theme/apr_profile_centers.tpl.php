<?php

/**
 * @file
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
  <h2 class="field-header">Center, Program and Institute Affiliations</h2>
  <ul class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <li class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if (!empty($item['url'])) {
            $output .= "<a href='" . $item['url'] . "'>";
          }
          if (!empty($item['center'])) {
            $output .= $item['center'];
          }
          if (!empty($item['url'])) {
            $output .= "</a>";
          }
          print $output;
        ?>
      </li>
    <?php endforeach; ?>
  </ul>
</div>

<?php endif; ?>
