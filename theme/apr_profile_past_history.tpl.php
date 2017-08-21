<?php

/**
 * @file apr_profile_past_history.tpl.php
 * Default theme implementation for the past history field.
 *
 * @see uiowa_apr_node_view()
 *
 * Available variables:
 *
 * $data
 *   Array of past history titles.
 */
?>
<div class="field field-name-apr-profile-past-history"<?php print $attributes; ?>>
	<div class="field-label">Past History</div>
	<div class="field-items">
		<?php foreach ($data as $delta => $item): ?>
			<div class="field-item <?php print $delta % 2 ? 'odd' : 'even'; ?>"><?php print $item; ?></div>
    	<?php endforeach; ?>
	</div>	
</div>