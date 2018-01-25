<?php

/**
 * @file apr_profile_training_affil.tpl.php
 * Default theme implementation for the training affiliations fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of training affiliations information from pci.info.training_affil.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-training-affil"<?php print $attributes; ?>>
  <div class="field-label">Education/Training Program Affiliations</div>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
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
