<?php

/**
 * @file apr_profile_schteach.tpl.php
 * Default theme implementation for the courses taught fields.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of courses taught information.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-schteach"<?php print $attributes; ?>>
  <div class="field-label">Courses Taught</div>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <!-- $data contains the schteach[] array -->
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = $item['title'];
          if ($item['coursepre']) $output .= ", " . $item['coursepre'];
          if ($item['coursenum']) $output .= ":" . $item['coursenum'];
//          if ($item['section']) $output .= ":" . $item['section'];
          if ($item['term']) {
            $output .= ", " . $item['term'];
            if ($item['year']) $output .= " " . $item['year'];
          } else if ($item['year']) {
            $output .= $item['year'];
          }
          print $output;
        ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>

<?php endif; ?>
