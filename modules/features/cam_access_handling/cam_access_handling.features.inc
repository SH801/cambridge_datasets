<?php
/**
 * @file
 * cam_access_handling.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cam_access_handling_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
