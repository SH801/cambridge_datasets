<?php
/**
 * @file
 * cam_access_handling.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function cam_access_handling_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-access_denied_anonymous_users'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'access_denied_anonymous_users',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'access-denied',
    'roles' => array(
      'anonymous user' => 1,
    ),
    'themes' => array(
      'cambridge_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'cambridge_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['block-access_denied_authenticate_user'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'access_denied_authenticate_user',
    'module' => 'block',
    'node_types' => array(),
    'pages' => 'access-denied',
    'roles' => array(
      'authenticated user' => 2,
    ),
    'themes' => array(
      'cambridge_theme' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'cambridge_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  return $export;
}
