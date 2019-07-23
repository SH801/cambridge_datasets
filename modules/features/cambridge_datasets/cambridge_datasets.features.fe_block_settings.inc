<?php

/**
 * @file
 * cambridge_datasets.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function cambridge_datasets_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-logged_in_as'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'logged_in_as',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cambridge_theme' => array(
        'region' => 'breadcrumb',
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
    'visibility' => 0,
  );

  return $export;
}
