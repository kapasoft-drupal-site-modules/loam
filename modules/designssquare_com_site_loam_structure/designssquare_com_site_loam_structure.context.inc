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
  $context->name = 'ds_site_loam_blog_category';
  $context->description = 'for posts of certain category';
  $context->tag = 'ds_site_loam_context';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'blog_categories' => 'blog_categories',
      ),
      'options' => array(
        'term_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-5c88bb249e323db83c4e6b538dad2c73' => array(
          'module' => 'views',
          'delta' => '5c88bb249e323db83c4e6b538dad2c73',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-8045c023952ab308843fa55db6f3abf0' => array(
          'module' => 'views',
          'delta' => '8045c023952ab308843fa55db6f3abf0',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-cbc7777e2ba5e694cac3c6fa22db65e7' => array(
          'module' => 'views',
          'delta' => 'cbc7777e2ba5e694cac3c6fa22db65e7',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('ds_site_loam_context');
  t('for posts of certain category');
  $export['ds_site_loam_blog_category'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ds_site_loam_blog_entry';
  $context->description = 'blog_entry';
  $context->tag = 'ds_site_loam_context';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-7',
        ),
        'views-5c88bb249e323db83c4e6b538dad2c73' => array(
          'module' => 'views',
          'delta' => '5c88bb249e323db83c4e6b538dad2c73',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-8045c023952ab308843fa55db6f3abf0' => array(
          'module' => 'views',
          'delta' => '8045c023952ab308843fa55db6f3abf0',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-cbc7777e2ba5e694cac3c6fa22db65e7' => array(
          'module' => 'views',
          'delta' => 'cbc7777e2ba5e694cac3c6fa22db65e7',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blog_entry');
  t('ds_site_loam_context');
  $export['ds_site_loam_blog_entry'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ds_site_loam_blog_posts';
  $context->description = 'blog posts';
  $context->tag = 'ds_site_loam_context';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'blog_posts' => 'blog_posts',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'ds-blog' => 'ds-blog',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-5107d1f46133f7a47428e73d6f4d0dd5' => array(
          'module' => 'views',
          'delta' => '5107d1f46133f7a47428e73d6f4d0dd5',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-5c88bb249e323db83c4e6b538dad2c73' => array(
          'module' => 'views',
          'delta' => '5c88bb249e323db83c4e6b538dad2c73',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-8045c023952ab308843fa55db6f3abf0' => array(
          'module' => 'views',
          'delta' => '8045c023952ab308843fa55db6f3abf0',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-cbc7777e2ba5e694cac3c6fa22db65e7' => array(
          'module' => 'views',
          'delta' => 'cbc7777e2ba5e694cac3c6fa22db65e7',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blog posts');
  t('ds_site_loam_context');
  $export['ds_site_loam_blog_posts'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ds_site_loam_blog_tags';
  $context->description = 'blog_tags';
  $context->tag = 'ds_site_loam_context';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'tags' => 'tags',
      ),
      'options' => array(
        'term_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-5c88bb249e323db83c4e6b538dad2c73' => array(
          'module' => 'views',
          'delta' => '5c88bb249e323db83c4e6b538dad2c73',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-8045c023952ab308843fa55db6f3abf0' => array(
          'module' => 'views',
          'delta' => '8045c023952ab308843fa55db6f3abf0',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-cbc7777e2ba5e694cac3c6fa22db65e7' => array(
          'module' => 'views',
          'delta' => 'cbc7777e2ba5e694cac3c6fa22db65e7',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('blog_tags');
  t('ds_site_loam_context');
  $export['ds_site_loam_blog_tags'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ds_site_loam_context_sitewide';
  $context->description = 'sidewide context for site - loam';
  $context->tag = 'ds_site_loam_context';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'designssquare_com_theme_builder-twitter_feed' => array(
          'module' => 'designssquare_com_theme_builder',
          'delta' => 'twitter_feed',
          'region' => 'footer_top',
          'weight' => '-10',
        ),
        'designssquare_com_theme_builder-footer_logo' => array(
          'module' => 'designssquare_com_theme_builder',
          'delta' => 'footer_logo',
          'region' => 'footer_middle',
          'weight' => '-10',
        ),
        'designssquare_com_theme_builder-footer_company' => array(
          'module' => 'designssquare_com_theme_builder',
          'delta' => 'footer_company',
          'region' => 'footer_middle',
          'weight' => '-9',
        ),
        'designssquare_com_theme_builder-contact_info' => array(
          'module' => 'designssquare_com_theme_builder',
          'delta' => 'contact_info',
          'region' => 'footer_middle',
          'weight' => '-8',
        ),
        'views-8bc7f963ccf671e1a1451b0287cae1a7' => array(
          'module' => 'views',
          'delta' => '8bc7f963ccf671e1a1451b0287cae1a7',
          'region' => 'footer_middle',
          'weight' => '-7',
        ),
        'designssquare_com_theme_builder-copy_rights' => array(
          'module' => 'designssquare_com_theme_builder',
          'delta' => 'copy_rights',
          'region' => 'footer_bottom',
          'weight' => '-10',
        ),
        'designssquare_com_theme_builder-footer_menu' => array(
          'module' => 'designssquare_com_theme_builder',
          'delta' => 'footer_menu',
          'region' => 'footer_bottom',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('ds_site_loam_context');
  t('sidewide context for site - loam');
  $export['ds_site_loam_context_sitewide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'loam_home_page';
  $context->description = 'home page for LOAM site';
  $context->tag = 'ds_site_loam_context';
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
        'views-401b434640254f69bf444c09379357b5' => array(
          'module' => 'views',
          'delta' => '401b434640254f69bf444c09379357b5',
          'region' => 'row_zero',
          'weight' => '-9',
        ),
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
  t('ds_site_loam_context');
  t('home page for LOAM site');
  $export['loam_home_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'loam_organizacija';
  $context->description = 'loam organizacijas (service layout)';
  $context->tag = 'ds_site_loam_context';
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
        'views-cbc7777e2ba5e694cac3c6fa22db65e7' => array(
          'module' => 'views',
          'delta' => 'cbc7777e2ba5e694cac3c6fa22db65e7',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('ds_site_loam_context');
  t('loam organizacijas (service layout)');
  $export['loam_organizacija'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'loam_organizacija_kopa';
  $context->description = 'service_page';
  $context->tag = 'ds_site_loam_context';
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
  t('ds_site_loam_context');
  t('service_page');
  $export['loam_organizacija_kopa'] = $context;

  return $export;
}
