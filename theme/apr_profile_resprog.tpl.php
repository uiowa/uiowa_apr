<?php

/**
 * @file apr_profile_resprog.tpl.php
 * Default theme implementation for the areas of research interest fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of research interest information from resprog[] array.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-resprog"<?php print $attributes; ?>>
  <div class="field-label">Areas of Research Interest</div>
  <ul class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <li class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if (!empty($item['title'])) $output .= $item['title'];
          if (!empty($item['desc'])) $output .= ": " . $item['desc'];
          print $output;
        ?>
      </li>
    <?php endforeach; ?>
  </ul>
</div>

<?php endif; ?>
