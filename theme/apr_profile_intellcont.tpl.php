<?php

/**
 * @file apr_profile_intellcont.tpl.php
 * Default theme implementation for the publications fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of publication information from intellcont[] array.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-intellcont"<?php print $attributes; ?>>
  <div class="field-label">Publications</div>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if (!empty($item['formatted'])) $output .= $item['formatted'];
          print $output;
        ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>

<?php endif; ?>
