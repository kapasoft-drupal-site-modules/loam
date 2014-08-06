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
  $context->name = 'ds_loam_gallery_index';
  $context->description = 'context for the Foto Galerijas Index space';
  $context->tag = 'ds_site_loam_context';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'ds_gallery_index' => 'ds_gallery_index',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'ds-gallery' => 'ds-gallery',
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
          'weight' => '-18',
        ),
        'views-ds_loam_gallery_a-all' => array(
          'module' => 'views',
          'delta' => 'ds_loam_gallery_a-all',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('context for the Foto Galerijas Index space');
  t('ds_site_loam_context');
  $export['ds_loam_gallery_index'] = $context;

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
        'views-ds_site_loam_avize_index-posts' => array(
          'module' => 'views',
          'delta' => 'ds_site_loam_avize_index-posts',
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
  $context->name = 'ds_site_loam_calendar';
  $context->description = '';
  $context->tag = 'ds_site_loam_context';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'latviešu-organizācijas-apvienība-minesotā-kalendārs' => 'latviešu-organizācijas-apvienība-minesotā-kalendārs',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'calendar-calendar_legend' => array(
          'module' => 'calendar',
          'delta' => 'calendar_legend',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('ds_site_loam_context');
  $export['ds_site_loam_calendar'] = $context;

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
        'views-calendar-block_1' => array(
          'module' => 'views',
          'delta' => 'calendar-block_1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-calendar-block_2' => array(
          'module' => 'views',
          'delta' => 'calendar-block_2',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-ds_site_loam_org_b-projects' => array(
          'module' => 'views',
          'delta' => 'ds_site_loam_org_b-projects',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'designssquare_com_theme_blocks-ds_recent_tweets' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_recent_tweets',
          'region' => 'footer_top',
          'weight' => '-10',
        ),
        'designssquare_com_theme_blocks-ds_social' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_social',
          'region' => 'footer_middle',
          'weight' => '-10',
        ),
        'designssquare_com_theme_blocks-ds_about' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_about',
          'region' => 'footer_middle',
          'weight' => '-9',
        ),
        'designssquare_com_theme_blocks-ds_contact_info' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_contact_info',
          'region' => 'footer_middle',
          'weight' => '-8',
        ),
        'views-8bc7f963ccf671e1a1451b0287cae1a7' => array(
          'module' => 'views',
          'delta' => '8bc7f963ccf671e1a1451b0287cae1a7',
          'region' => 'footer_middle',
          'weight' => '-7',
        ),
        'designssquare_com_theme_blocks-ds_copy_rights' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_copy_rights',
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
  $context->name = 'ds_site_loam_organizacijas_index';
  $context->description = 'space listing all services offered';
  $context->tag = 'ds_site_loam_context';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'ds_service_index' => 'ds_service_index',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'ds-service' => 'ds-service',
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
          'weight' => '-38',
        ),
        'designssquare_com_theme_builder-call_for_action' => array(
          'module' => 'designssquare_com_theme_builder',
          'delta' => 'call_for_action',
          'region' => 'content',
          'weight' => '-37',
        ),
        'views-ds_site_loam_org_visas-projects' => array(
          'module' => 'views',
          'delta' => 'ds_site_loam_org_visas-projects',
          'region' => 'content',
          'weight' => '-36',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('ds_site_loam_context');
  t('space listing all services offered');
  $export['ds_site_loam_organizacijas_index'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ds_site_loam_service';
  $context->description = 'context for DS Service page';
  $context->tag = 'ds_site_loam_context';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'ds_service' => 'ds_service',
      ),
      'options' => array(
        'node_form' => '1',
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
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('context for DS Service page');
  t('ds_site_loam_context');
  $export['ds_site_loam_service'] = $context;

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
        'views-ds_site_loam_org-projects' => array(
          'module' => 'views',
          'delta' => 'ds_site_loam_org-projects',
          'region' => 'row_first',
          'weight' => '-10',
        ),
        'views-ds_loam_gallery_t-teaser' => array(
          'module' => 'views',
          'delta' => 'ds_loam_gallery_t-teaser',
          'region' => 'row_second',
          'weight' => '-10',
        ),
        'designssquare_com_theme_blocks-ds_about_teaser' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_about_teaser',
          'region' => 'square_top_left',
          'weight' => '-10',
        ),
        'designssquare_com_theme_blocks-ds_testimonial_teaser' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_testimonial_teaser',
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
