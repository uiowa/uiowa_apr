<?php

/**
 * @file apr_profile_teaching_interests.tpl.php
 * Default theme implementation for the teaching interests fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of teaching interests information.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-teaching-interests"<?php print $attributes; ?>>
  <div class="field-label">Teaching Interests</div>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <!-- $data contains the pci.info.teaching_interests value -->
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
