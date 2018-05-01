<?php

/**
 * @file apr_profile_education.tpl.php
 * Default theme implementation for the education fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of education information from education[] array.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-education"<?php print $attributes; ?>>
  <h2 class="field-header">Education</h2>
  <ul class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <li class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if (!empty($item['deg']) && ($item['deg'] !== 'Other')) $output .= $item['deg'];
          else if (!empty($item['deg_title'])) $output .= $item['deg_title'];
          if (!empty($item['major'])) $output .= " in " . $item['major'] . "";
          if (!empty($item['school'])) $output .= ", " . $item['school'];
          if (!empty($item['city'])) $output .= ", " . $item['city'];
          if (!empty($item['state'])) $output .= ", " . $item['state'];
          if (!empty($item['country'])) $output .= ", " . $item['country'];
          if (!empty($item['completed_date'])) $output .= ", " . date("Y", strtotime($item['completed_date']));
          print $output;
        ?>
      </li>
    <?php endforeach; ?>
  </ul>
</div>

<?php endif; ?>
