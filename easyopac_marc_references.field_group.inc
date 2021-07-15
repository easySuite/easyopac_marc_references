<?php
/**
 * @file
 * easyopac_marc_references.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function easyopac_marc_references_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_marc_references|ting_object|ting_object|default';
  $field_group->group_name = 'group_marc_references';
  $field_group->entity_type = 'ting_object';
  $field_group->bundle = 'ting_object';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'References',
    'weight' => '8',
    'children' => array(
      0 => 'field_marc_references',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'References',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-marc-references field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_marc_references|ting_object|ting_object|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('References');

  return $field_groups;
}
