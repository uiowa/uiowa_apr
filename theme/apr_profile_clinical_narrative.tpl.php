<?php

/**
 * @file apr_profile_clinical_narrative.tpl.php
 * Default theme implementation for the clinical narrative fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of clinical narrative information.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-clinical-narrative"<?php print $attributes; ?>>
  <div class="field-label">Clinical Narrative</div>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <!-- $data contains the pci.info.clinical_narrative value -->
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
