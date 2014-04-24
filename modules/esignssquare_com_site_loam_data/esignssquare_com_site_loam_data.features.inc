<?php
/**
 * @file
 * esignssquare_com_site_loam_data.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function esignssquare_com_site_loam_data_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function esignssquare_com_site_loam_data_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
