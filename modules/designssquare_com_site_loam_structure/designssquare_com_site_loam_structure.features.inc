<?php
/**
 * @file
 * designssquare_com_site_loam_structure.features.inc
 */

/**
 * Implements hook_context_override_default_settings().
 */
function designssquare_com_site_loam_structure_context_override_default_settings() {
$context_override = array();

$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'about_us',
  'description' => 'for About Us Layout',
  'tag' => 'designssquare_com_theme_builder',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'about_us' => 'about_us',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -10,
        ),
        'designssquare_com_theme_blocks-ds_testimonial' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_testimonial',
          'region' => 'sidebar_second',
          'weight' => -10,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_themes_builder_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'blog_category',
  'description' => 'for posts of certain category',
  'tag' => '',
  'conditions' => array(
    'taxonomy_term' => array(
      'values' => array(
        'blog_categories' => 'blog_categories',
      ),
      'options' => array(
        'term_form' => 0,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -10,
        ),
        'views-blog_block_view-recent_ver1' => array(
          'module' => 'views',
          'delta' => 'blog_block_view-recent_ver1',
          'region' => 'sidebar_first',
          'weight' => -10,
        ),
        'views-ds_blog_categories-cat' => array(
          'module' => 'views',
          'delta' => 'ds_blog_categories-cat',
          'region' => 'sidebar_first',
          'weight' => -9,
        ),
        'views-ds_blog_tags-tag' => array(
          'module' => 'views',
          'delta' => 'ds_blog_tags-tag',
          'region' => 'sidebar_first',
          'weight' => -8,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquarecom_blog_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'blog_entry',
  'description' => 'blog_entry',
  'tag' => '',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -7,
        ),
        'views-blog_block_view-recent_ver1' => array(
          'module' => 'views',
          'delta' => 'blog_block_view-recent_ver1',
          'region' => 'sidebar_first',
          'weight' => -10,
        ),
        'views-ds_blog_categories-cat' => array(
          'module' => 'views',
          'delta' => 'ds_blog_categories-cat',
          'region' => 'sidebar_first',
          'weight' => -9,
        ),
        'views-ds_blog_tags-tag' => array(
          'module' => 'views',
          'delta' => 'ds_blog_tags-tag',
          'region' => 'sidebar_first',
          'weight' => -8,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquarecom_blog_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'blog_posts',
  'description' => 'blog posts',
  'tag' => '',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'blog_posts' => 'blog_posts',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
    'path' => array(
      'values' => array(
        'ds-blog' => 'ds-blog',
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'views-ds_blog_content-posts' => array(
          'module' => 'views',
          'delta' => 'ds_blog_content-posts',
          'region' => 'content',
          'weight' => -10,
        ),
        'views-ds_blog_categories-cat' => array(
          'module' => 'views',
          'delta' => 'ds_blog_categories-cat',
          'region' => 'sidebar_first',
          'weight' => -9,
        ),
        'views-ds_blog_tags-tag' => array(
          'module' => 'views',
          'delta' => 'ds_blog_tags-tag',
          'region' => 'sidebar_first',
          'weight' => -8,
        ),
        'views-3dd29840f2e82fbe8c21732070304977' => array(
          'module' => 'views',
          'delta' => '3dd29840f2e82fbe8c21732070304977',
          'region' => 'sidebar_first',
          'weight' => -7,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquarecom_blog_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'blog_tags',
  'description' => 'blog_tags',
  'tag' => '',
  'conditions' => array(
    'taxonomy_term' => array(
      'values' => array(
        'tags' => 'tags',
      ),
      'options' => array(
        'term_form' => 0,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -10,
        ),
        'views-blog_block_view-recent_ver1' => array(
          'module' => 'views',
          'delta' => 'blog_block_view-recent_ver1',
          'region' => 'sidebar_first',
          'weight' => -10,
        ),
        'views-ds_blog_categories-cat' => array(
          'module' => 'views',
          'delta' => 'ds_blog_categories-cat',
          'region' => 'sidebar_first',
          'weight' => -9,
        ),
        'views-ds_blog_tags-tag' => array(
          'module' => 'views',
          'delta' => 'ds_blog_tags-tag',
          'region' => 'sidebar_first',
          'weight' => -8,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquarecom_blog_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'both_sidebar',
  'description' => 'both_sidebar',
  'tag' => 'designssquare_com_theme_builder',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'both_sidebar' => 'both_sidebar',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'designssquare_com_theme_builder-pay_attention' => array(
          'module' => 'designssquare_com_theme_builder',
          'delta' => 'pay_attention',
          'region' => 'sidebar_second',
          'weight' => -10,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_themes_builder_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'name' => 'ds_loam_gallery_index',
  'description' => 'context for the Foto Galerijas Index space',
  'tag' => 'ds_site_loam_context',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'ds_gallery_index' => 'ds_gallery_index',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
    'path' => array(
      'values' => array(
        'ds-gallery' => 'ds-gallery',
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -18,
        ),
        'views-ds_loam_gallery_a-all' => array(
          'module' => 'views',
          'delta' => 'ds_loam_gallery_a-all',
          'region' => 'content',
          'weight' => -10,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'table' => 'context',
  'type' => 'Overridden',
  'export_type' => 3,
  'export_module' => 'designssquare_com_site_loam_structure',
);
$context_override[] = array(
  'name' => 'ds_site_loam_blog_category',
  'description' => 'for posts of certain category',
  'tag' => 'ds_site_loam_context',
  'conditions' => array(
    'taxonomy_term' => array(
      'values' => array(
        'blog_categories' => 'blog_categories',
      ),
      'options' => array(
        'term_form' => 0,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -10,
        ),
        'views-5c88bb249e323db83c4e6b538dad2c73' => array(
          'module' => 'views',
          'delta' => '5c88bb249e323db83c4e6b538dad2c73',
          'region' => 'sidebar_second',
          'weight' => -10,
        ),
        'views-8045c023952ab308843fa55db6f3abf0' => array(
          'module' => 'views',
          'delta' => '8045c023952ab308843fa55db6f3abf0',
          'region' => 'sidebar_second',
          'weight' => -9,
        ),
        'views-cbc7777e2ba5e694cac3c6fa22db65e7' => array(
          'module' => 'views',
          'delta' => 'cbc7777e2ba5e694cac3c6fa22db65e7',
          'region' => 'sidebar_second',
          'weight' => -8,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'table' => 'context',
  'type' => 'Overridden',
  'export_type' => 3,
  'export_module' => 'designssquare_com_site_loam_structure',
);
$context_override[] = array(
  'name' => 'ds_site_loam_blog_entry',
  'description' => 'blog_entry',
  'tag' => 'ds_site_loam_context',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -7,
        ),
        'views-5c88bb249e323db83c4e6b538dad2c73' => array(
          'module' => 'views',
          'delta' => '5c88bb249e323db83c4e6b538dad2c73',
          'region' => 'sidebar_second',
          'weight' => -10,
        ),
        'views-8045c023952ab308843fa55db6f3abf0' => array(
          'module' => 'views',
          'delta' => '8045c023952ab308843fa55db6f3abf0',
          'region' => 'sidebar_second',
          'weight' => -9,
        ),
        'views-cbc7777e2ba5e694cac3c6fa22db65e7' => array(
          'module' => 'views',
          'delta' => 'cbc7777e2ba5e694cac3c6fa22db65e7',
          'region' => 'sidebar_second',
          'weight' => -8,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'table' => 'context',
  'type' => 'Overridden',
  'export_type' => 3,
  'export_module' => 'designssquare_com_site_loam_structure',
);
$context_override[] = array(
  'name' => 'ds_site_loam_blog_posts',
  'description' => 'blog posts',
  'tag' => 'ds_site_loam_context',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'blog_posts' => 'blog_posts',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
    'path' => array(
      'values' => array(
        'ds-blog' => 'ds-blog',
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'views-ds_site_loam_avize_index-posts' => array(
          'module' => 'views',
          'delta' => 'ds_site_loam_avize_index-posts',
          'region' => 'content',
          'weight' => -10,
        ),
        'views-5c88bb249e323db83c4e6b538dad2c73' => array(
          'module' => 'views',
          'delta' => '5c88bb249e323db83c4e6b538dad2c73',
          'region' => 'sidebar_second',
          'weight' => -10,
        ),
        'views-8045c023952ab308843fa55db6f3abf0' => array(
          'module' => 'views',
          'delta' => '8045c023952ab308843fa55db6f3abf0',
          'region' => 'sidebar_second',
          'weight' => -9,
        ),
        'views-cbc7777e2ba5e694cac3c6fa22db65e7' => array(
          'module' => 'views',
          'delta' => 'cbc7777e2ba5e694cac3c6fa22db65e7',
          'region' => 'sidebar_second',
          'weight' => -8,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'table' => 'context',
  'type' => 'Overridden',
  'export_type' => 3,
  'export_module' => 'designssquare_com_site_loam_structure',
);
$context_override[] = array(
  'name' => 'ds_site_loam_blog_tags',
  'description' => 'blog_tags',
  'tag' => 'ds_site_loam_context',
  'conditions' => array(
    'taxonomy_term' => array(
      'values' => array(
        'tags' => 'tags',
      ),
      'options' => array(
        'term_form' => 0,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -10,
        ),
        'views-5c88bb249e323db83c4e6b538dad2c73' => array(
          'module' => 'views',
          'delta' => '5c88bb249e323db83c4e6b538dad2c73',
          'region' => 'sidebar_second',
          'weight' => -10,
        ),
        'views-8045c023952ab308843fa55db6f3abf0' => array(
          'module' => 'views',
          'delta' => '8045c023952ab308843fa55db6f3abf0',
          'region' => 'sidebar_second',
          'weight' => -9,
        ),
        'views-cbc7777e2ba5e694cac3c6fa22db65e7' => array(
          'module' => 'views',
          'delta' => 'cbc7777e2ba5e694cac3c6fa22db65e7',
          'region' => 'sidebar_second',
          'weight' => -8,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'table' => 'context',
  'type' => 'Overridden',
  'export_type' => 3,
  'export_module' => 'designssquare_com_site_loam_structure',
);
$context_override[] = array(
  'name' => 'ds_site_loam_calendar',
  'description' => '',
  'tag' => 'ds_site_loam_context',
  'conditions' => array(
    'path' => array(
      'values' => array(
        'latviešu-organizācijas-apvienība-minesotā-kalendārs' => 'latviešu-organizācijas-apvienība-minesotā-kalendārs',
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'calendar-calendar_legend' => array(
          'module' => 'calendar',
          'delta' => 'calendar_legend',
          'region' => 'content',
          'weight' => -10,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'table' => 'context',
  'type' => 'Overridden',
  'export_type' => 3,
  'export_module' => 'designssquare_com_site_loam_structure',
);
$context_override[] = array(
  'name' => 'ds_site_loam_context_sitewide',
  'description' => 'sidewide context for site - loam',
  'tag' => 'ds_site_loam_context',
  'conditions' => array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -10,
        ),
        'views-calendar-block_1' => array(
          'module' => 'views',
          'delta' => 'calendar-block_1',
          'region' => 'sidebar_second',
          'weight' => -10,
        ),
        'views-calendar-block_2' => array(
          'module' => 'views',
          'delta' => 'calendar-block_2',
          'region' => 'sidebar_second',
          'weight' => -9,
        ),
        'views-ds_site_loam_org_b-projects' => array(
          'module' => 'views',
          'delta' => 'ds_site_loam_org_b-projects',
          'region' => 'sidebar_second',
          'weight' => -8,
        ),
        'designssquare_com_theme_blocks-ds_recent_tweets' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_recent_tweets',
          'region' => 'footer_top',
          'weight' => -10,
        ),
        'designssquare_com_theme_blocks-ds_social' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_social',
          'region' => 'footer_middle',
          'weight' => -10,
        ),
        'designssquare_com_theme_blocks-ds_about' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_about',
          'region' => 'footer_middle',
          'weight' => -9,
        ),
        'designssquare_com_theme_blocks-ds_contact_info' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_contact_info',
          'region' => 'footer_middle',
          'weight' => -8,
        ),
        'views-8bc7f963ccf671e1a1451b0287cae1a7' => array(
          'module' => 'views',
          'delta' => '8bc7f963ccf671e1a1451b0287cae1a7',
          'region' => 'footer_middle',
          'weight' => -7,
        ),
        'designssquare_com_theme_blocks-ds_copy_rights' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_copy_rights',
          'region' => 'footer_bottom',
          'weight' => -10,
        ),
        'designssquare_com_theme_builder-footer_menu' => array(
          'module' => 'designssquare_com_theme_builder',
          'delta' => 'footer_menu',
          'region' => 'footer_bottom',
          'weight' => -9,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'table' => 'context',
  'type' => 'Overridden',
  'export_type' => 3,
  'export_module' => 'designssquare_com_site_loam_structure',
);
$context_override[] = array(
  'name' => 'ds_site_loam_organizacijas_index',
  'description' => 'space listing all services offered',
  'tag' => 'ds_site_loam_context',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'ds_service_index' => 'ds_service_index',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
    'path' => array(
      'values' => array(
        'ds-service' => 'ds-service',
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -38,
        ),
        'designssquare_com_theme_builder-call_for_action' => array(
          'module' => 'designssquare_com_theme_builder',
          'delta' => 'call_for_action',
          'region' => 'content',
          'weight' => -37,
        ),
        'views-ds_site_loam_org_visas-projects' => array(
          'module' => 'views',
          'delta' => 'ds_site_loam_org_visas-projects',
          'region' => 'content',
          'weight' => -36,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'table' => 'context',
  'type' => 'Overridden',
  'export_type' => 3,
  'export_module' => 'designssquare_com_site_loam_structure',
);
$context_override[] = array(
  'name' => 'ds_site_loam_service',
  'description' => 'context for DS Service page',
  'tag' => 'ds_site_loam_context',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'ds_service' => 'ds_service',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -10,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'table' => 'context',
  'type' => 'Overridden',
  'export_type' => 3,
  'export_module' => 'designssquare_com_site_loam_structure',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'ds_theme_builder_blog_category',
  'description' => 'for posts of certain category',
  'tag' => 'designssquare_com_theme_builder',
  'conditions' => array(
    'taxonomy_term' => array(
      'values' => array(
        'blog_categories' => 'blog_categories',
      ),
      'options' => array(
        'term_form' => 0,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -10,
        ),
        'views-3dd29840f2e82fbe8c21732070304977' => array(
          'module' => 'views',
          'delta' => '3dd29840f2e82fbe8c21732070304977',
          'region' => 'sidebar_first',
          'weight' => -10,
        ),
        'views-ds_blog_categories-cat' => array(
          'module' => 'views',
          'delta' => 'ds_blog_categories-cat',
          'region' => 'sidebar_first',
          'weight' => -9,
        ),
        'views-ds_blog_tags-tag' => array(
          'module' => 'views',
          'delta' => 'ds_blog_tags-tag',
          'region' => 'sidebar_first',
          'weight' => -8,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_themes_builder_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'ds_theme_builder_blog_entry',
  'description' => 'blog_entry',
  'tag' => 'designssquare_com_theme_builder',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'blog' => 'blog',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -7,
        ),
        'views-3dd29840f2e82fbe8c21732070304977' => array(
          'module' => 'views',
          'delta' => '3dd29840f2e82fbe8c21732070304977',
          'region' => 'sidebar_first',
          'weight' => -10,
        ),
        'views-ds_blog_categories-cat' => array(
          'module' => 'views',
          'delta' => 'ds_blog_categories-cat',
          'region' => 'sidebar_first',
          'weight' => -9,
        ),
        'views-ds_blog_tags-tag' => array(
          'module' => 'views',
          'delta' => 'ds_blog_tags-tag',
          'region' => 'sidebar_first',
          'weight' => -8,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_themes_builder_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'ds_theme_builder_blog_posts',
  'description' => 'blog posts',
  'tag' => 'designssquare_com_theme_builder',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'blog_posts' => 'blog_posts',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
    'path' => array(
      'values' => array(
        'ds-blog' => 'ds-blog',
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'views-ds_blog_content-posts' => array(
          'module' => 'views',
          'delta' => 'ds_blog_content-posts',
          'region' => 'content',
          'weight' => -10,
        ),
        'views-ds_blog_categories-cat' => array(
          'module' => 'views',
          'delta' => 'ds_blog_categories-cat',
          'region' => 'sidebar_first',
          'weight' => -9,
        ),
        'views-ds_blog_tags-tag' => array(
          'module' => 'views',
          'delta' => 'ds_blog_tags-tag',
          'region' => 'sidebar_first',
          'weight' => -8,
        ),
        'views-3dd29840f2e82fbe8c21732070304977' => array(
          'module' => 'views',
          'delta' => '3dd29840f2e82fbe8c21732070304977',
          'region' => 'sidebar_first',
          'weight' => -7,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_themes_builder_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'ds_theme_builder_blog_tags',
  'description' => 'blog_tags',
  'tag' => 'designssquare_com_theme_builder',
  'conditions' => array(
    'taxonomy_term' => array(
      'values' => array(
        'tags' => 'tags',
      ),
      'options' => array(
        'term_form' => 0,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -10,
        ),
        'views-3dd29840f2e82fbe8c21732070304977' => array(
          'module' => 'views',
          'delta' => '3dd29840f2e82fbe8c21732070304977',
          'region' => 'sidebar_first',
          'weight' => -10,
        ),
        'views-ds_blog_categories-cat' => array(
          'module' => 'views',
          'delta' => 'ds_blog_categories-cat',
          'region' => 'sidebar_first',
          'weight' => -9,
        ),
        'views-ds_blog_tags-tag' => array(
          'module' => 'views',
          'delta' => 'ds_blog_tags-tag',
          'region' => 'sidebar_first',
          'weight' => -8,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_themes_builder_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'ds_theme_builder_context_sitewide',
  'description' => 'sidewide context fro builder theme',
  'tag' => 'designssquare_com_theme_builder',
  'conditions' => array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -10,
        ),
        'designssquare_com_theme_blocks-ds_recent_tweets' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_recent_tweets',
          'region' => 'footer_top',
          'weight' => -10,
        ),
        'designssquare_com_theme_blocks-ds_social' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_social',
          'region' => 'footer_middle',
          'weight' => -10,
        ),
        'designssquare_com_theme_blocks-ds_about' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_about',
          'region' => 'footer_middle',
          'weight' => -9,
        ),
        'views-blog_block_view-recent_ver1' => array(
          'module' => 'views',
          'delta' => 'blog_block_view-recent_ver1',
          'region' => 'footer_middle',
          'weight' => -8,
        ),
        'designssquare_com_theme_blocks-ds_contact_info' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_contact_info',
          'region' => 'footer_middle',
          'weight' => -7,
        ),
        'designssquare_com_theme_blocks-ds_copy_rights' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_copy_rights',
          'region' => 'footer_bottom',
          'weight' => -9,
        ),
        'designssquare_com_theme_builder-footer_menu' => array(
          'module' => 'designssquare_com_theme_builder',
          'delta' => 'footer_menu',
          'region' => 'footer_bottom',
          'weight' => -8,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_themes_builder_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'ds_theme_builder_portfolio_index',
  'description' => '',
  'tag' => 'designssquare_com_theme_builder',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'ds_portfolio_index' => 'ds_portfolio_index',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
    'path' => array(
      'values' => array(
        'ds-portfolio' => 'ds-portfolio',
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'views-ds_builder_portfolio_p-projects' => array(
          'module' => 'views',
          'delta' => 'ds_builder_portfolio_p-projects',
          'region' => 'content',
          'weight' => -10,
        ),
        'views-ds_builder_portfolio_b-projects' => array(
          'module' => 'views',
          'delta' => 'ds_builder_portfolio_b-projects',
          'region' => 'sidebar_first',
          'weight' => -10,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_themes_builder_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'ds_theme_builder_service',
  'description' => 'context for DS Service page',
  'tag' => 'designssquare_com_theme_builder',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'ds_service' => 'ds_service',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -10,
        ),
        'views-ds_builder_service_b-block' => array(
          'module' => 'views',
          'delta' => 'ds_builder_service_b-block',
          'region' => 'sidebar_second',
          'weight' => -10,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_themes_builder_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'ds_theme_builder_service_index',
  'description' => 'space listing all services offered',
  'tag' => 'designssquare_com_theme_builder',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'ds_service_index' => 'ds_service_index',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
    'path' => array(
      'values' => array(
        'ds-service' => 'ds-service',
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -10,
        ),
        'designssquare_com_theme_builder-call_for_action' => array(
          'module' => 'designssquare_com_theme_builder',
          'delta' => 'call_for_action',
          'region' => 'content',
          'weight' => -9,
        ),
        'views-ds_builder_service_all-all' => array(
          'module' => 'views',
          'delta' => 'ds_builder_service_all-all',
          'region' => 'content',
          'weight' => -8,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_themes_builder_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'gallery_index',
  'description' => 'context for the Photo Gallery Index space',
  'tag' => 'designssquare.com.widget.gallery',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'ds_gallery_index' => 'ds_gallery_index',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
    'path' => array(
      'values' => array(
        'ds-gallery' => 'ds-gallery',
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -19,
        ),
        'views-ds_gallery_all-all' => array(
          'module' => 'views',
          'delta' => 'ds_gallery_all-all',
          'region' => 'content',
          'weight' => -18,
        ),
        'views-ds_gallery_block-block' => array(
          'module' => 'views',
          'delta' => 'ds_gallery_block-block',
          'region' => 'sidebar_second',
          'weight' => -10,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_widget_photo_gallery_configurations_structure_data',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'home_five',
  'description' => 'layout for home five page',
  'tag' => 'designssquare_com_theme_builder',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'home_five' => 'home_five',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'views-ds_build_rev_slider-block' => array(
          'module' => 'views',
          'delta' => 'ds_build_rev_slider-block',
          'region' => 'row_zero',
          'weight' => -10,
        ),
        'views-ds_builder_portfolio_t-projects' => array(
          'module' => 'views',
          'delta' => 'ds_builder_portfolio_t-projects',
          'region' => 'row_first',
          'weight' => -10,
        ),
        'designssquare_com_theme_blocks-ds_about_teaser' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_about_teaser',
          'region' => 'square_top_left',
          'weight' => -10,
        ),
        'designssquare_com_theme_blocks-ds_testimonial_teaser' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_testimonial_teaser',
          'region' => 'square_bottom_left',
          'weight' => -10,
        ),
        'views-ds_builder_blog_slider-slider' => array(
          'module' => 'views',
          'delta' => 'ds_builder_blog_slider-slider',
          'region' => 'square_top_right',
          'weight' => -10,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_themes_builder_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'home_four',
  'description' => 'layout for home four page',
  'tag' => 'designssquare_com_theme_builder',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'home_four' => 'home_four',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'views-ds_build_rev_slider-block' => array(
          'module' => 'views',
          'delta' => 'ds_build_rev_slider-block',
          'region' => 'row_zero',
          'weight' => -10,
        ),
        'views-ds_builder_portfolio_t-projects' => array(
          'module' => 'views',
          'delta' => 'ds_builder_portfolio_t-projects',
          'region' => 'row_first',
          'weight' => -10,
        ),
        'views-ds_builder_service_t-teaser' => array(
          'module' => 'views',
          'delta' => 'ds_builder_service_t-teaser',
          'region' => 'row_second',
          'weight' => -10,
        ),
        'views-ds_builder_blog_slider-slider' => array(
          'module' => 'views',
          'delta' => 'ds_builder_blog_slider-slider',
          'region' => 'square_top_left',
          'weight' => -10,
        ),
        'designssquare_com_theme_blocks-ds_about_teaser' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_about_teaser',
          'region' => 'square_top_right',
          'weight' => -10,
        ),
        'designssquare_com_theme_blocks-ds_testimonial_teaser' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_testimonial_teaser',
          'region' => 'square_bottom_right',
          'weight' => -10,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_themes_builder_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'home_one',
  'description' => 'home_one',
  'tag' => 'designssquare_com_theme_builder',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'home_one' => 'home_one',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'views-ds_build_rev_slider-block' => array(
          'module' => 'views',
          'delta' => 'ds_build_rev_slider-block',
          'region' => 'row_zero',
          'weight' => -10,
        ),
        'views-ds_builder_service_t-teaser' => array(
          'module' => 'views',
          'delta' => 'ds_builder_service_t-teaser',
          'region' => 'row_first',
          'weight' => -10,
        ),
        'views-ds_builder_portfolio_t-projects' => array(
          'module' => 'views',
          'delta' => 'ds_builder_portfolio_t-projects',
          'region' => 'row_second',
          'weight' => -10,
        ),
        'designssquare_com_theme_blocks-ds_about_teaser' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_about_teaser',
          'region' => 'square_top_left',
          'weight' => -10,
        ),
        'designssquare_com_theme_blocks-ds_testimonial_teaser' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_testimonial_teaser',
          'region' => 'square_bottom_left',
          'weight' => -10,
        ),
        'views-ds_blog_slider-slider' => array(
          'module' => 'views',
          'delta' => 'ds_blog_slider-slider',
          'region' => 'square_top_right',
          'weight' => -10,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_themes_builder_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'home_three',
  'description' => 'context for home layout ver 3',
  'tag' => 'designssquare_com_theme_builder',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'home_three' => 'home_three',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'views-ds_build_rev_slider-block' => array(
          'module' => 'views',
          'delta' => 'ds_build_rev_slider-block',
          'region' => 'row_zero',
          'weight' => -10,
        ),
        'views-ds_builder_portfolio_t-projects' => array(
          'module' => 'views',
          'delta' => 'ds_builder_portfolio_t-projects',
          'region' => 'row_first',
          'weight' => -10,
        ),
        'views-ds_builder_blog_slider-slider' => array(
          'module' => 'views',
          'delta' => 'ds_builder_blog_slider-slider',
          'region' => 'square_top_left',
          'weight' => -10,
        ),
        'designssquare_com_theme_blocks-ds_about_teaser' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_about_teaser',
          'region' => 'square_top_right',
          'weight' => -10,
        ),
        'designssquare_com_theme_blocks-ds_testimonial_teaser' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_testimonial_teaser',
          'region' => 'square_bottom_right',
          'weight' => -10,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_themes_builder_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'home_two',
  'description' => 'home_two',
  'tag' => 'designssquare_com_theme_builder',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'home_two' => 'home_two',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'views-ds_build_rev_slider-block' => array(
          'module' => 'views',
          'delta' => 'ds_build_rev_slider-block',
          'region' => 'row_zero',
          'weight' => -10,
        ),
        'views-ds_builder_service_t-teaser' => array(
          'module' => 'views',
          'delta' => 'ds_builder_service_t-teaser',
          'region' => 'row_first',
          'weight' => -10,
        ),
        'designssquare_com_theme_builder-catchy_phrase' => array(
          'module' => 'designssquare_com_theme_builder',
          'delta' => 'catchy_phrase',
          'region' => 'row_second',
          'weight' => -10,
        ),
        'views-ds_builder_blog_slider-slider' => array(
          'module' => 'views',
          'delta' => 'ds_builder_blog_slider-slider',
          'region' => 'square_top_left',
          'weight' => -10,
        ),
        'designssquare_com_theme_blocks-ds_about_teaser' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_about_teaser',
          'region' => 'square_top_right',
          'weight' => -10,
        ),
        'designssquare_com_theme_blocks-ds_testimonial_teaser' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_testimonial_teaser',
          'region' => 'square_bottom_right',
          'weight' => -10,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_themes_builder_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'left_sidebar',
  'description' => 'left_sidebar',
  'tag' => 'designssquare_com_theme_builder',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'left_sidebar' => 'left_sidebar',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'designssquare_com_theme_builder-pay_attention' => array(
          'module' => 'designssquare_com_theme_builder',
          'delta' => 'pay_attention',
          'region' => 'sidebar_first',
          'weight' => -10,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_themes_builder_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'name' => 'loam_home_page',
  'description' => 'home page for LOAM site',
  'tag' => 'ds_site_loam_context',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'home_one' => 'home_one',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'views-401b434640254f69bf444c09379357b5' => array(
          'module' => 'views',
          'delta' => '401b434640254f69bf444c09379357b5',
          'region' => 'row_zero',
          'weight' => -9,
        ),
        'views-ds_site_loam_org-projects' => array(
          'module' => 'views',
          'delta' => 'ds_site_loam_org-projects',
          'region' => 'row_first',
          'weight' => -10,
        ),
        'views-ds_loam_gallery_t-teaser' => array(
          'module' => 'views',
          'delta' => 'ds_loam_gallery_t-teaser',
          'region' => 'row_second',
          'weight' => -10,
        ),
        'designssquare_com_theme_blocks-ds_about_teaser' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_about_teaser',
          'region' => 'square_top_left',
          'weight' => -10,
        ),
        'designssquare_com_theme_blocks-ds_testimonial_teaser' => array(
          'module' => 'designssquare_com_theme_blocks',
          'delta' => 'ds_testimonial_teaser',
          'region' => 'square_bottom_left',
          'weight' => -10,
        ),
        'views-d8bb899c125f5a8fab407cf7ab6372e5' => array(
          'module' => 'views',
          'delta' => 'd8bb899c125f5a8fab407cf7ab6372e5',
          'region' => 'square_top_right',
          'weight' => -10,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'table' => 'context',
  'type' => 'Overridden',
  'export_type' => 3,
  'export_module' => 'designssquare_com_site_loam_structure',
);
$context_override[] = array(
  'name' => 'loam_organizacija',
  'description' => 'loam organizacijas (service layout)',
  'tag' => 'ds_site_loam_context',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'service' => 'service',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'designssquare_com_theme_builder-pay_attention' => array(
          'module' => 'designssquare_com_theme_builder',
          'delta' => 'pay_attention',
          'region' => 'sidebar_second',
          'weight' => -10,
        ),
        'views-cbc7777e2ba5e694cac3c6fa22db65e7' => array(
          'module' => 'views',
          'delta' => 'cbc7777e2ba5e694cac3c6fa22db65e7',
          'region' => 'sidebar_second',
          'weight' => -9,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'table' => 'context',
  'type' => 'Overridden',
  'export_type' => 3,
  'disabled' => TRUE,
  'export_module' => 'designssquare_com_site_loam_structure',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'loam_organizacija_kopa',
  'description' => 'service_page',
  'tag' => 'ds_site_loam_context',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'service_page' => 'service_page',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'designssquare_com_theme_builder-catchy_phrase' => array(
          'module' => 'designssquare_com_theme_builder',
          'delta' => 'catchy_phrase',
          'region' => 'row_zero',
          'weight' => -10,
        ),
        'designssquare_com_theme_builder-call_for_action' => array(
          'module' => 'designssquare_com_theme_builder',
          'delta' => 'call_for_action',
          'region' => 'row_first',
          'weight' => -10,
        ),
        'views-a0e8836c61ddefdf3387ea06190d029c' => array(
          'module' => 'views',
          'delta' => 'a0e8836c61ddefdf3387ea06190d029c',
          'region' => 'row_second',
          'weight' => -10,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_site_loam_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'right_sidebar',
  'description' => 'right_sidebar',
  'tag' => 'designssquare_com_theme_builder',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'right_sidebar' => 'right_sidebar',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'designssquare_com_theme_builder-pay_attention' => array(
          'module' => 'designssquare_com_theme_builder',
          'delta' => 'pay_attention',
          'region' => 'sidebar_second',
          'weight' => -10,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_themes_builder_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'service',
  'description' => 'context for DS Service page',
  'tag' => 'designssquare.com.widget.service',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'ds_service' => 'ds_service',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -10,
        ),
        'views-ds_service_block-projects' => array(
          'module' => 'views',
          'delta' => 'ds_service_block-projects',
          'region' => 'sidebar_second',
          'weight' => -10,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_service_configurations_structures',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'service_index',
  'description' => 'space listing all services offered',
  'tag' => 'designssquare.com.widget.service',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'ds_service_index' => 'ds_service_index',
      ),
      'options' => array(
        'node_form' => 0,
      ),
    ),
    'path' => array(
      'values' => array(
        'ds-service' => 'ds-service',
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => -10,
        ),
        'views-ds_service_all-projects' => array(
          'module' => 'views',
          'delta' => 'ds_service_all-projects',
          'region' => 'content',
          'weight' => -9,
        ),
        'views-ds_service_block-projects' => array(
          'module' => 'views',
          'delta' => 'ds_service_block-projects',
          'region' => 'sidebar_second',
          'weight' => -10,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_service_configurations_structures',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
$context_override[] = array(
  'disabled' => TRUE,
  'api_version' => 3,
  'name' => 'service_page',
  'description' => 'service_page',
  'tag' => 'designssquare_com_theme_builder',
  'conditions' => array(
    'node' => array(
      'values' => array(
        'service_page' => 'service_page',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  ),
  'reactions' => array(
    'block' => array(
      'blocks' => array(
        'designssquare_com_theme_builder-catchy_phrase' => array(
          'module' => 'designssquare_com_theme_builder',
          'delta' => 'catchy_phrase',
          'region' => 'row_zero',
          'weight' => -10,
        ),
        'designssquare_com_theme_builder-call_for_action' => array(
          'module' => 'designssquare_com_theme_builder',
          'delta' => 'call_for_action',
          'region' => 'row_first',
          'weight' => -10,
        ),
        'views-services_overview-all_services' => array(
          'module' => 'views',
          'delta' => 'services_overview-all_services',
          'region' => 'row_second',
          'weight' => -10,
        ),
      ),
    ),
  ),
  'condition_mode' => 0,
  'export_module' => 'designssquare_com_themes_builder_structure',
  'type' => 'Default',
  'export_type' => 2,
  'in_code_only' => TRUE,
  'table' => 'context',
);
return $context_override;
}

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
    'event' => array(
      'name' => t('Event'),
      'base' => 'node_content',
      'description' => t('event for a calendar'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
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

/**
 * Implements hook_strongarm_override_default_settings().
 */
function designssquare_com_site_loam_structure_strongarm_override_default_settings() {
$strongarm_override = array();

$strongarm_override[] = array(
  'name' => 'ds_theme_builder__call_action_button',
  'value' => 'Sazinies ar mums!',
);
$strongarm_override[] = array(
  'name' => 'ds_theme_builder__call_action_content',
  'value' => 'Ja vēlies atbalstīt LOAM vai kādu no tas organizācijām',
);
$strongarm_override[] = array(
  'name' => 'ds_theme_builder__call_action_title',
  'value' => 'LOAM ir bezpeļņas organizācija, kas pastāv uz ziedojumiem un cilvēku ziedotā laika',
);
$strongarm_override[] = array(
  'name' => 'ds_theme_builder__call_action_url',
  'value' => 'contact',
);
$strongarm_override[] = array(
  'name' => 'ds_theme_builder__catchy_phrase_content',
  'value' => NULL,
);
$strongarm_override[] = array(
  'name' => 'ds_theme_builder__pay_attention_call_action',
  'value' => NULL,
);
$strongarm_override[] = array(
  'name' => 'ds_theme_builder__pay_attention_content',
  'value' => NULL,
);
$strongarm_override[] = array(
  'name' => 'ds_theme_builder__pay_attention_title',
  'value' => NULL,
);
$strongarm_override[] = array(
  'name' => 'site_403',
  'value' => 'user',
);
$strongarm_override[] = array(
  'name' => 'site_404',
  'value' => 'sākums-latviesu-organizāciju-apvieniba-minesotā',
);
$strongarm_override[] = array(
  'name' => 'site_frontpage',
  'value' => 'sākums-latviesu-organizāciju-apvieniba-minesotā',
);
$strongarm_override[] = array(
  'name' => 'site_name',
  'value' => 'LOAM',
);
$strongarm_override[] = array(
  'name' => 'site_slogan',
  'value' => 'apvienot latviešu organizācijas kopējam kultūras and labdarības darbam',
);
$strongarm_override[] = array(
  'name' => 'theme_loam_settings',
  'value' => array(
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
  ),
);
$strongarm_override[] = array(
  'name' => 'theme_settings',
  'value' => array(
    'toggle_logo' => 0,
    'toggle_name' => 1,
    'toggle_slogan' => 1,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 1,
    'toggle_secondary_menu' => 1,
    'default_logo' => 1,
    'logo_path' => '',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
  ),
);
$strongarm_override[] = array(
  'name' => 'uuid_features_entity_node',
  'value' => array(
    'about' => 'about',
    'about_us' => 'about_us',
    'article' => 'article',
    'page' => 'page',
    'blog_posts' => 'blog_posts',
    'blog' => 'blog',
    'both_sidebar' => 'both_sidebar',
    'contact' => 'contact',
    'ds_gallery' => 'ds_gallery',
    'ds_gallery_index' => 'ds_gallery_index',
    'ds_service' => 'ds_service',
    'ds_service_index' => 'ds_service_index',
    'error' => 'error',
    'event' => 'event',
    'home_one' => 'home_one',
    'left_sidebar' => 'left_sidebar',
    'ds_slide' => 'ds_slide',
    'employee' => 0,
    'frame_element' => 0,
    'gallery_four' => 0,
    'gallery_three' => 0,
    'gallery_two' => 0,
    'home_five' => 0,
    'home_four' => 0,
    'home_three' => 0,
    'home_two' => 0,
    'list' => 0,
    'portfolio' => 0,
    'quote' => 0,
    'right_sidebar' => 0,
    'service' => 0,
    'service_page' => 0,
    'testimonial' => 0,
    'welcome' => 0,
  ),
);
$strongarm_override[] = array(
  'name' => 'uuid_features_entity_taxonomy_term',
  'value' => array(
    'tags' => 'tags',
    'features' => 0,
    'blog_categories' => 0,
    'post_format' => 0,
    'post_sidebar' => 0,
  ),
);
$strongarm_override[] = array(
  'name' => 'uuid_features_file_assets_path',
  'value' => '',
);
$strongarm_override[] = array(
  'name' => 'uuid_features_file_mode',
  'value' => 'local',
);
$strongarm_override[] = array(
  'name' => 'uuid_features_file_node',
  'value' => array(
    'about' => 'about',
    'about_us' => 'about_us',
    'page' => 'page',
    'blog_posts' => 'blog_posts',
    'blog' => 'blog',
    'both_sidebar' => 'both_sidebar',
    'contact' => 'contact',
    'ds_gallery' => 'ds_gallery',
    'ds_gallery_index' => 'ds_gallery_index',
    'ds_service' => 'ds_service',
    'ds_service_index' => 'ds_service_index',
    'error' => 'error',
    'event' => 'event',
    'home_one' => 'home_one',
    'ds_slide' => 'ds_slide',
    'article' => 0,
    'employee' => 0,
    'frame_element' => 0,
    'gallery_four' => 0,
    'gallery_three' => 0,
    'gallery_two' => 0,
    'home_five' => 0,
    'home_four' => 0,
    'home_three' => 0,
    'home_two' => 0,
    'left_sidebar' => 0,
    'list' => 0,
    'portfolio' => 0,
    'quote' => 0,
    'right_sidebar' => 0,
    'service' => 0,
    'service_page' => 0,
    'testimonial' => 0,
    'welcome' => 0,
  ),
);
$strongarm_override[] = array(
  'name' => 'uuid_features_file_supported_fields',
  'value' => 'file, image, managed_file',
);
$strongarm_override[] = array(
  'name' => 'uuid_features_file_taxonomy_term',
  'value' => array(
    'tags' => 'tags',
    'features' => 0,
    'blog_categories' => 0,
    'post_format' => 0,
    'post_sidebar' => 0,
  ),
);
$strongarm_override[] = array(
  'name' => 'uuid_features_vocabulary_terms',
  'value' => 1,
);
return $strongarm_override;
}
