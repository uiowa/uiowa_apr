<?php

/**
 * @file
 * Default theme implementation for the assets fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of assets information from pci.assets[] array.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-assets"<?php print $attributes; ?>>
  <h2 class="field-header"></h2>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if (!empty($item['uri'])) {
            $node = menu_get_object();
            $output = theme('imagecache_external', array(
              'path' => $item['uri'],
              'style_name' => 'apr_profile_image',
              'alt' => $node->title,
            ));
          }
          print $output;
        ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>

<?php endif; ?>
