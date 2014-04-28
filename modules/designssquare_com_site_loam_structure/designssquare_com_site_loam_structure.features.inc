<?php
/**
 * @file
 * designssquare_com_site_loam_structure.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function designssquare_com_site_loam_structure_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function designssquare_com_site_loam_structure_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function designssquare_com_site_loam_structure_node_info() {
  $items = array(
    'service' => array(
      'name' => t('Service'),
      'base' => 'node_content',
      'description' => t('service that company or organization provides'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
