<?php

/**
 * @file
 * Default theme implementation for the research narrative fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of research narrative information from pci.info.research_narrative.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-research-narrative"<?php print $attributes; ?>>
  <h2 class="field-header">Research Narrative</h2>
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
