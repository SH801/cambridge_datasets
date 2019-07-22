<?php
/**
 * @file
 * cam_access_handling.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function cam_access_handling_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_403';
  $strongarm->value = 'node/192';
  $export['site_403'] = $strongarm;

  return $export;
}
