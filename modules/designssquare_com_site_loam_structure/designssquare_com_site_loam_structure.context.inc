<?php
/**
 * @file
 * designssquare_com_site_loam_structure.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function designssquare_com_site_loam_structure_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'loam_home_page';
  $context->description = 'home page for LOAM site';
  $context->tag = 'site_loam';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'home_one' => 'home_one',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-12b3d239d955afc52dc100c004952fe4' => array(
          'module' => 'views',
          'delta' => '12b3d239d955afc52dc100c004952fe4',
          'region' => 'row_first',
          'weight' => '-10',
        ),
        'views-b52596459ce1ba1be9b343628c7da9cf' => array(
          'module' => 'views',
          'delta' => 'b52596459ce1ba1be9b343628c7da9cf',
          'region' => 'row_second',
          'weight' => '-10',
        ),
        'designssquare_com_theme_builder-about' => array(
          'module' => 'designssquare_com_theme_builder',
          'delta' => 'about',
          'region' => 'square_top_left',
          'weight' => '-10',
        ),
        'views-32335bc5400b4ca82a980e8ac0deae2c' => array(
          'module' => 'views',
          'delta' => '32335bc5400b4ca82a980e8ac0deae2c',
          'region' => 'square_bottom_left',
          'weight' => '-10',
        ),
        'views-d8bb899c125f5a8fab407cf7ab6372e5' => array(
          'module' => 'views',
          'delta' => 'd8bb899c125f5a8fab407cf7ab6372e5',
          'region' => 'square_top_right',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('home page for LOAM site');
  t('site_loam');
  $export['loam_home_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'loam_organizacija';
  $context->description = 'loam organizacijas (service layout)';
  $context->tag = 'site_loam';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'service' => 'service',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'designssquare_com_theme_builder-pay_attention' => array(
          'module' => 'designssquare_com_theme_builder',
          'delta' => 'pay_attention',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('loam organizacijas (service layout)');
  t('site_loam');
  $export['loam_organizacija'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'loam_organizacija_kopa';
  $context->description = 'service_page';
  $context->tag = 'site_loam';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'service_page' => 'service_page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'designssquare_com_theme_builder-catchy_phrase' => array(
          'module' => 'designssquare_com_theme_builder',
          'delta' => 'catchy_phrase',
          'region' => 'row_zero',
          'weight' => '-10',
        ),
        'designssquare_com_theme_builder-call_for_action' => array(
          'module' => 'designssquare_com_theme_builder',
          'delta' => 'call_for_action',
          'region' => 'row_first',
          'weight' => '-10',
        ),
        'views-a0e8836c61ddefdf3387ea06190d029c' => array(
          'module' => 'views',
          'delta' => 'a0e8836c61ddefdf3387ea06190d029c',
          'region' => 'row_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('service_page');
  t('site_loam');
  $export['loam_organizacija_kopa'] = $context;

  return $export;
}
