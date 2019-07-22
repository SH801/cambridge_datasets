<?php
/**
 * @file
 * cam_access_handling.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function cam_access_handling_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Access denied - Anonymous users';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'access_denied_anonymous_users';
  $fe_block_boxes->body = '<div class="cam-content-container">
<p>These pages are only accessible to members of the University of Cambridge with a Raven account.</p>

<p><a href="/raven/login">Log in here</a></p>
</div>
';

  $export['access_denied_anonymous_users'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Access denied - Authenticated User';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'access_denied_authenticate_user';
  $fe_block_boxes->body = '<p><span>This may be because you do not have sufficient access rights for this content, or the content is not yet published.</span></p>
';

  $export['access_denied_authenticate_user'] = $fe_block_boxes;

  return $export;
}
