<?php
/**
 * @file
 * cambridge_jobs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cambridge_jobs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cambridge_jobs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cambridge_jobs_node_info() {
  $items = array(
    'job' => array(
      'name' => t('Job'),
      'base' => 'node_content',
      'description' => t('Use <i>job</i> to add job adverts to your site.'),
      'has_title' => '1',
      'title_label' => t('Job title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
