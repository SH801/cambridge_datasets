<?php

/**
 * @file
 * cambridge_datasets.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function cambridge_datasets_user_default_roles() {
  $roles = array();

  // Exported role: finalreviewer.
  $roles['finalreviewer'] = array(
    'name' => 'finalreviewer',
    'weight' => 3,
  );

  // Exported role: reviewer.
  $roles['reviewer'] = array(
    'name' => 'reviewer',
    'weight' => 2,
  );

  return $roles;
}
