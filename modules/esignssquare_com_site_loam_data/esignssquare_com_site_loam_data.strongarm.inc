<?php
/**
 * @file
 * esignssquare_com_site_loam_data.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function esignssquare_com_site_loam_data_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_loam_settings';
  $strongarm->value = array(
    'toggle_logo' => 0,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 0,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'bootstrap_rebuild_registry' => 0,
    'cdn_bootstrap' => 0,
    'cdn_bootstrap_version' => '2.3.2',
    'builder_logo_text' => 'LOAM<strong class="colored lbut">.</strong>',
    'builder_logo_format' => 'text',
    'mission_statement' => '<span class="colored lowercase">Misija: </span>veicināt latviešu kultūru <span class="colored">&</span> saglabāt latviešu tradīcijas Minesotā',
  );
  $export['theme_loam_settings'] = $strongarm;

  return $export;
}
