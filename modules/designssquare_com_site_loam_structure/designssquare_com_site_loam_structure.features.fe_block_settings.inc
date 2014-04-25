<?php
/**
 * @file
 * designssquare_com_site_loam_structure.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function designssquare_com_site_loam_structure_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['builder_theme-contact_info'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'contact_info',
    'module' => 'builder_theme',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'builder' => array(
        'region' => 'footer_middle',
        'status' => 1,
        'theme' => 'builder',
        'weight' => -24,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Contact Information',
    'visibility' => 0,
  );

  $export['builder_theme-copy_rights'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'copy_rights',
    'module' => 'builder_theme',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'builder' => array(
        'region' => 'footer_bottom',
        'status' => 1,
        'theme' => 'builder',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['builder_theme-footer_company'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'footer_company',
    'module' => 'builder_theme',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'builder' => array(
        'region' => 'footer_middle',
        'status' => 1,
        'theme' => 'builder',
        'weight' => -25,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Builder Company',
    'visibility' => 0,
  );

  $export['builder_theme-footer_logo'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'footer_logo',
    'module' => 'builder_theme',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'builder' => array(
        'region' => 'footer_middle',
        'status' => 1,
        'theme' => 'builder',
        'weight' => -26,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Footer Logo',
    'visibility' => 0,
  );

  $export['builder_theme-footer_menu'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'footer_menu',
    'module' => 'builder_theme',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'builder' => array(
        'region' => 'footer_bottom',
        'status' => 1,
        'theme' => 'builder',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['builder_theme-twitter_feed'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'twitter_feed',
    'module' => 'builder_theme',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'builder' => array(
        'region' => 'footer_top',
        'status' => 1,
        'theme' => 'builder',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Twitter Feed',
    'visibility' => 0,
  );

  $export['views-31dad79acc6aea1fc961a835d9767e4e'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => '31dad79acc6aea1fc961a835d9767e4e',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'builder' => array(
        'region' => 'footer_middle',
        'status' => 1,
        'theme' => 'builder',
        'weight' => -23,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
