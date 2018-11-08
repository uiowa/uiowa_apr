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
 *   Array of professional membership information from member[] array.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-member"<?php print $attributes; ?>>
  <h2 class="field-header">Selected Professional Memberships</h2>
  <ul class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <li class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if (!empty($item['org'])) $output .= $item['org'];
          if (!empty($item['orgabbr'])) $output .= " (" . $item['orgabbr'] . ")";
          if (!empty($item['start_date'])) $output .= ", " . date("Y", strtotime($item['start_date']));
          print $output;
        ?>
      </li>
    <?php endforeach; ?>
  </ul>
</div>

<?php endif; ?>
