<?php

/**
 * @file apr_profile_websites.tpl.php
 * Default theme implementation for the website fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of website information.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-websites"<?php print $attributes; ?>>
  <div class="field-label">Websites</div>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <!-- $data contains the pci.websites[] array -->
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if (!empty($item['url'])) $output .= "<a href='" . $item['url'] . "'>";
          if (!empty($item['desc'])) $output .= $item['desc'];
          if (!empty($item['url'])) $output .= "</a>";
          print $output;
        ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>

<?php endif; ?>
