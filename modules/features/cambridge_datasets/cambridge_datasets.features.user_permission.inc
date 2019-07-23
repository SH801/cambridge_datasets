<?php

/**
 * @file
 * cambridge_datasets.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cambridge_datasets_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit any application content'.
  $permissions['edit any application content'] = array(
    'name' => 'edit any application content',
    'roles' => array(
      'administrator' => 'administrator',
      'finalreviewer' => 'finalreviewer',
    ),
    'module' => 'node',
  );

  return $permissions;
}
