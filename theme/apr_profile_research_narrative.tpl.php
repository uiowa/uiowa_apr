<?php

/**
 * @file apr_profile_research_narrative.tpl.php
 * Default theme implementation for the research narrative fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of research narrative information.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-research-narrative"<?php print $attributes; ?>>
  <div class="field-label">Research Narrative</div>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <!-- $data contains the pci.info.research_narrative value -->
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
