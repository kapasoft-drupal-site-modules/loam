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
  $context->name = 'loam_organizacija';
  $context->description = 'loam organizacija';
  $context->tag = '';
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
        'builder_theme-pay_attention' => array(
          'module' => 'builder_theme',
          'delta' => 'pay_attention',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-397543602d00a784030980fcd042b65d' => array(
          'module' => 'views',
          'delta' => '397543602d00a784030980fcd042b65d',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('loam organizacija');
  $export['loam_organizacija'] = $context;

  return $export;
}
