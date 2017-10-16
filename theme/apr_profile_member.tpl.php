<?php

/**
 * @file apr_profile_member.tpl.php
 * Default theme implementation for the professional membership fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of professional membership information.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-member"<?php print $attributes; ?>>
  <div class="field-label">Professional Memberships</div>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <!-- $data contains the member[] array -->
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = $item['org'];
          if ($item['orgabbr']) $output .= " (" . $item['orgabbr'] . ")";
          if ($item['start_date']) $output .= ", " . date("Y", strtotime($item['start_date']));
          $output .= ".";
          print $output;
        ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>

<?php endif; ?>
