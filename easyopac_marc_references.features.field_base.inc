<?php
/**
 * @file
 * easyopac_marc_references.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function easyopac_marc_references_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_marc_references'.
  $field_bases['field_marc_references'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'ting_object',
    ),
    'field_name' => 'field_marc_references',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'easyopac_marc_references',
    'settings' => array(
      'profile2_private' => FALSE,
    ),
    'storage' => array(
      'active' => 1,
      'module' => 'virtual_field',
      'settings' => array(),
      'type' => 'virtual_field',
    ),
    'translatable' => 0,
    'type' => 'easyopac_marc_references',
  );

  return $field_bases;
}
