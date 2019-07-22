<?php

/**
 * @file
 * cambridge_datasets.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function cambridge_datasets_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Logged in as';
  $fe_block_boxes->format = 'php_code';
  $fe_block_boxes->machine_name = 'logged_in_as';
  $fe_block_boxes->body = '<?php

$output = \'\';
global $user;

if($user->uid)
{
 $output .= \'<p style="color:white;">Logged in as <b>\'.$user->name.\'</b> / <a href="/user/logout">Logout</a></p>\';
}
else
{
 $output .= \'<p style="color:white;">Not logged in / <a href="/user/login"><b>Login</b></a></p>\';
}

print $output;

?>';

  $export['logged_in_as'] = $fe_block_boxes;

  return $export;
}
