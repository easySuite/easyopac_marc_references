<?php
/**
 * @file
 * easyopac_marc_references.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function easyopac_marc_references_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}
