<?php

/**
 * @file apr_profile_creative_works.tpl.php
 * Default theme implementation for the creative works fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of creative works information from creative_works[] array.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-creative-works"<?php print $attributes; ?>>
  <h2 class="field-header">Creative Works</h2>
  <ul class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <li class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if (!empty($item['formatted'])) $output .= $item['formatted'];
          print $output;
        ?>
      </li>
    <?php endforeach; ?>
  </ul>
</div>

<?php endif; ?>
