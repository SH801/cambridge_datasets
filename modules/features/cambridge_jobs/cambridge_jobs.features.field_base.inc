<?php
/**
 * @file
 * cambridge_jobs.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function cambridge_jobs_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_job_department'.
  $field_bases['field_job_department'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_job_department',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  return $field_bases;
}
