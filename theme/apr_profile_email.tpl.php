<?php

/**
 * @file apr_profile_email.tpl.php
 * Default theme implementation for the email field.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of email from pci.info.email.
 */
?>

<?php if (!empty($data)): ?>

<div class="field field-name-apr-profile-email"<?php print $attributes; ?>>
  <div class="field-items">
    <?php foreach ($data as $delta => $item): ?>
      <div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>">
        <?php
          $output = "<a href='mailto:" . $item . "'>" . $item . "</a>";
          print $output;
        ?>
      </div>
    <?php endforeach; ?>
  </div>
</div>

<?php endif; ?>
