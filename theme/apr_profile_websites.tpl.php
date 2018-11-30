<?php

/**
 * @file
 * Default theme implementation for the website fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of website information from pci.websites[] array.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-websites"<?php print $attributes; ?>>
  <h2 class="field-header">Websites</h2>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if (!empty($item['url'])) {
            $output .= "<a href='" . $item['url'] . "'>";
          }
          if (!empty($item['desc'])) {
            $output .= $item['desc'];
          } elseif (!empty($item['type'])) {
            $output .= $item['type'];
          } else {
            $output .= $item['url'];
          }
          if (!empty($item['url'])) {
            $output .= "</a>";
          }
          print $output;
        ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>

<?php endif; ?>
