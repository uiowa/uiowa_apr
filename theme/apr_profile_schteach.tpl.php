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
 *   Array of courses taught information from schteach[] array.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-schteach"<?php print $attributes; ?>>
  <h2 class="field-header">Courses Taught</h2>
  <ul class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <li class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "";
          if (!empty($item['title'])) $output .= $item['title'];
          if (!empty($item['coursepre'])) $output .= ", " . $item['coursepre'];
          if (!empty($item['coursenum'])) $output .= ":" . $item['coursenum'];
          if (!empty($item['term'])) {
            $output .= ", " . $item['term'];
            if (!empty($item['year'])) $output .= " " . $item['year'];
          } else if (!empty($item['year'])) {
            $output .= $item['year'];
          }
          print $output;
        ?>
      </li>
    <?php endforeach; ?>
  </ul>
</div>

<?php endif; ?>
