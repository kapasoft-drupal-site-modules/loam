<?php
/**
 * @file
 * designssquare_com_site_loam_structure.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function designssquare_com_site_loam_structure_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'designssquare_com_site_loam_avize_slider';
  $view->description = '';
  $view->tag = 'blog, designssquare_blog_slider';
  $view->base_table = 'node';
  $view->human_name = 'DesignsSquare.com: Site: LOAM: Avize - Slider';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent From Blog';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Add comment link */
  $handler->display->display_options['fields']['comments_link']['id'] = 'comments_link';
  $handler->display->display_options['fields']['comments_link']['table'] = 'node';
  $handler->display->display_options['fields']['comments_link']['field'] = 'comments_link';
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
  );

  /* Display: Jaunākais Avīzē */
  $handler = $view->new_display('block', 'Jaunākais Avīzē', 'recent_posts_slider');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Posts Slider';
  $handler->display->display_options['display_description'] = 'slider of recent posts LOAM blog';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Rendered Node */
  $handler->display->display_options['fields']['rendered_entity']['id'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['rendered_entity']['field'] = 'rendered_entity';
  $handler->display->display_options['fields']['rendered_entity']['label'] = '';
  $handler->display->display_options['fields']['rendered_entity']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['rendered_entity']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['rendered_entity']['view_mode'] = 'full';
  $handler->display->display_options['fields']['rendered_entity']['bypass_access'] = 0;
  $handler->display->display_options['block_description'] = 'DesignsSquare.com: Site: LOAM: Avīze - Jaunākie Raksti';
  $export['designssquare_com_site_loam_avize_slider'] = $view;

  $view = new view();
  $view->name = 'designssquare_com_site_loam_view_gallery';
  $view->description = '';
  $view->tag = 'default, designssquare_theme_builder_gallery';
  $view->base_table = 'node';
  $view->human_name = 'DesignsSquare.com: Site: LOAM: View - Gallery';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Portfolio';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'portfolio' => 'portfolio',
  );

  /* Display: DesignsSquare.com: Site: LOAM: View - Gallery */
  $handler = $view->new_display('block', 'DesignsSquare.com: Site: LOAM: View - Gallery', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Jaunākais no Foto Galerijas';
  $handler->display->display_options['display_description'] = 'overview of photo galleries for LOAM Site';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Portfolio Description */
  $handler->display->display_options['fields']['field_portfolio_description']['id'] = 'field_portfolio_description';
  $handler->display->display_options['fields']['field_portfolio_description']['table'] = 'field_data_field_portfolio_description';
  $handler->display->display_options['fields']['field_portfolio_description']['field'] = 'field_portfolio_description';
  $handler->display->display_options['fields']['field_portfolio_description']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_description']['element_default_classes'] = FALSE;
  /* Field: Content: Portfolio Photo */
  $handler->display->display_options['fields']['field_portfolio_photo']['id'] = 'field_portfolio_photo';
  $handler->display->display_options['fields']['field_portfolio_photo']['table'] = 'field_data_field_portfolio_photo';
  $handler->display->display_options['fields']['field_portfolio_photo']['field'] = 'field_portfolio_photo';
  $handler->display->display_options['fields']['field_portfolio_photo']['label'] = '';
  $handler->display->display_options['fields']['field_portfolio_photo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_portfolio_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_portfolio_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_portfolio_photo']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_portfolio_photo']['settings'] = array(
    'url_type' => '0',
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'gallery_four' => 'gallery_four',
    'gallery_three' => 'gallery_three',
    'gallery_two' => 'gallery_two',
  );
  $handler->display->display_options['block_description'] = 'DesignsSquare.com: Site: LOAM: View - Photo Galerijas';
  $export['designssquare_com_site_loam_view_gallery'] = $view;

  $view = new view();
  $view->name = 'designssquare_com_site_loam_view_organizacijas';
  $view->description = '';
  $view->tag = 'default, designssquare_theme_builder_services';
  $view->base_table = 'node';
  $view->human_name = 'DesignsSquare.com: Site: LOAM: View - Organizacijas';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Home Service List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Service Description */
  $handler->display->display_options['fields']['field_service_description']['id'] = 'field_service_description';
  $handler->display->display_options['fields']['field_service_description']['table'] = 'field_data_field_service_description';
  $handler->display->display_options['fields']['field_service_description']['field'] = 'field_service_description';
  /* Field: Content: Service Icon */
  $handler->display->display_options['fields']['field_service_icon']['id'] = 'field_service_icon';
  $handler->display->display_options['fields']['field_service_icon']['table'] = 'field_data_field_service_icon';
  $handler->display->display_options['fields']['field_service_icon']['field'] = 'field_service_icon';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'service' => 'service',
  );

  /* Display: DesignsSquare.com: Site: LOAM: Organizacijas Overview */
  $handler = $view->new_display('block', 'DesignsSquare.com: Site: LOAM: Organizacijas Overview', 'block');
  $handler->display->display_options['display_description'] = 'front page list of organizations';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Service Icon */
  $handler->display->display_options['fields']['field_service_icon']['id'] = 'field_service_icon';
  $handler->display->display_options['fields']['field_service_icon']['table'] = 'field_data_field_service_icon';
  $handler->display->display_options['fields']['field_service_icon']['field'] = 'field_service_icon';
  $handler->display->display_options['fields']['field_service_icon']['label'] = '';
  $handler->display->display_options['fields']['field_service_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_service_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_icon']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_service_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_service_icon']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_service_icon']['settings'] = array(
    'url_type' => '1',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Service Description */
  $handler->display->display_options['fields']['field_service_description']['id'] = 'field_service_description';
  $handler->display->display_options['fields']['field_service_description']['table'] = 'field_data_field_service_description';
  $handler->display->display_options['fields']['field_service_description']['field'] = 'field_service_description';
  $handler->display->display_options['fields']['field_service_description']['label'] = '';
  $handler->display->display_options['fields']['field_service_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_description']['alter']['text'] = '<div class="span4">
<div style="background-color: rgb(241, 241, 241); padding: 15px; background-position: initial initial; background-repeat: initial initial;">
                <p style="text-align: center;">
                    <img width="50px" height="50px" alt="" src="[field_service_icon]" title="round1" class="size-full aligncenter">                </p>
                <h4 style="text-align: center;">[title]</h4>
                <p style="text-align: center; font-size: 11px; margin-bottom: 0px !important;">[field_service_description-value] </p>
            </div>
</div>';
  $handler->display->display_options['fields']['field_service_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_service_description']['type'] = 'text_plain';
  $handler->display->display_options['block_description'] = 'DesignsSquare.com: Site: LOAM: View - Organizations Overview';

  /* Display: DesignsSquare.com: Site: LOAM: View - Visas Organizacijas */
  $handler = $view->new_display('block', 'DesignsSquare.com: Site: LOAM: View - Visas Organizacijas', 'all_services');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'All Service List';
  $handler->display->display_options['display_description'] = 'all LOAM organizations';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Service Icon */
  $handler->display->display_options['fields']['field_service_icon']['id'] = 'field_service_icon';
  $handler->display->display_options['fields']['field_service_icon']['table'] = 'field_data_field_service_icon';
  $handler->display->display_options['fields']['field_service_icon']['field'] = 'field_service_icon';
  $handler->display->display_options['fields']['field_service_icon']['label'] = '';
  $handler->display->display_options['fields']['field_service_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_service_icon']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_icon']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_service_icon']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_service_icon']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_service_icon']['settings'] = array(
    'url_type' => '1',
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Service Description */
  $handler->display->display_options['fields']['field_service_description']['id'] = 'field_service_description';
  $handler->display->display_options['fields']['field_service_description']['table'] = 'field_data_field_service_description';
  $handler->display->display_options['fields']['field_service_description']['field'] = 'field_service_description';
  $handler->display->display_options['fields']['field_service_description']['label'] = '';
  $handler->display->display_options['fields']['field_service_description']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_service_description']['alter']['text'] = '<div class="span4">
<div style="background-color: rgb(241, 241, 241); padding: 15px; background-position: initial initial; background-repeat: initial initial;">
                <p style="text-align: center;">
                    <img width="50px" height="50px" alt="" src="[field_service_icon]" title="round1" class="size-full aligncenter">                </p>
                <h4 style="text-align: center;">[title]</h4>
                <p style="text-align: center; font-size: 11px; margin-bottom: 0px !important;">[field_service_description-value] </p>
            </div>
</div>';
  $handler->display->display_options['fields']['field_service_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_service_description']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_service_description']['type'] = 'text_plain';
  $handler->display->display_options['block_description'] = 'DesignsSquare.com: Site: LOAM: View - Visas Organizacijas';
  $export['designssquare_com_site_loam_view_organizacijas'] = $view;

  $view = new view();
  $view->name = 'designssquare_com_site_loam_view_quote';
  $view->description = '';
  $view->tag = 'default, designssquare_theme_builder_quote';
  $view->base_table = 'node';
  $view->human_name = 'DesignsSquare.com: Site: LOAM: View - Quote';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Quote Slider';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Quote */
  $handler->display->display_options['fields']['field_quote']['id'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['table'] = 'field_data_field_quote';
  $handler->display->display_options['fields']['field_quote']['field'] = 'field_quote';
  $handler->display->display_options['fields']['field_quote']['label'] = '';
  $handler->display->display_options['fields']['field_quote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_quote']['element_default_classes'] = FALSE;
  /* Field: Content: Quote Author */
  $handler->display->display_options['fields']['field_quote_author']['id'] = 'field_quote_author';
  $handler->display->display_options['fields']['field_quote_author']['table'] = 'field_data_field_quote_author';
  $handler->display->display_options['fields']['field_quote_author']['field'] = 'field_quote_author';
  $handler->display->display_options['fields']['field_quote_author']['label'] = '';
  $handler->display->display_options['fields']['field_quote_author']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_quote_author']['element_default_classes'] = FALSE;
  /* Field: Content: Quote Author Title */
  $handler->display->display_options['fields']['field_quote_author_position']['id'] = 'field_quote_author_position';
  $handler->display->display_options['fields']['field_quote_author_position']['table'] = 'field_data_field_quote_author_position';
  $handler->display->display_options['fields']['field_quote_author_position']['field'] = 'field_quote_author_position';
  $handler->display->display_options['fields']['field_quote_author_position']['label'] = '';
  $handler->display->display_options['fields']['field_quote_author_position']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_quote_author_position']['element_default_classes'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'quote' => 'quote',
  );

  /* Display: DesignsSquare.com: Site: LOAM: View - Quote */
  $handler = $view->new_display('block', 'DesignsSquare.com: Site: LOAM: View - Quote', 'block');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'DesignsSquare.com: Site: LOAM: View - Quote';
  $export['designssquare_com_site_loam_view_quote'] = $view;

  $view = new view();
  $view->name = 'ds_site_loam_jaunakais_avize_menu_ver_1';
  $view->description = '';
  $view->tag = 'Blog, designssquare_blog_block, designssquare_blog_block_recent_posts_ver1';
  $view->base_table = 'node';
  $view->human_name = 'DesignsSquare.com: Site: LOAM: Jaunākais Avīzē - Menu Ver 1';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Posts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
  );

  /* Display: Recent Posts Ver1 */
  $handler = $view->new_display('block', 'Recent Posts Ver1', 'recent_posts_ver1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Jaunākais Avīzē';
  $handler->display->display_options['block_description'] = 'DesignsSquare.com: Site: LOAM: Jaunākais Avīzē - Menu Ver1';
  $export['ds_site_loam_jaunakais_avize_menu_ver_1'] = $view;

  $view = new view();
  $view->name = 'ds_site_loam_jaunakais_avize_menu_ver_2';
  $view->description = '';
  $view->tag = 'Blog, designssquare_blog_block, designssquare_blog_block_recent_posts_ver2';
  $view->base_table = 'node';
  $view->human_name = 'DesignsSquare.com: Site: LOAM: Jaunākais Avīzē - Menu Ver 2';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Recent Posts';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'blog' => 'blog',
  );

  /* Display: Recent Posts Ver2 */
  $handler = $view->new_display('block', 'Recent Posts Ver2', 'recent_posts_ver2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Jaunākais Avīzē';
  $handler->display->display_options['display_description'] = 'anothor version of Recent Posts';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '4';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Comment count */
  $handler->display->display_options['fields']['comment_count']['id'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['table'] = 'node_comment_statistics';
  $handler->display->display_options['fields']['comment_count']['field'] = 'comment_count';
  $handler->display->display_options['fields']['comment_count']['label'] = '';
  $handler->display->display_options['fields']['comment_count']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['comment_count']['element_default_classes'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = '';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_user'] = FALSE;
  /* Field: User: Link */
  $handler->display->display_options['fields']['view_user']['id'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['table'] = 'users';
  $handler->display->display_options['fields']['view_user']['field'] = 'view_user';
  $handler->display->display_options['fields']['view_user']['relationship'] = 'uid';
  $handler->display->display_options['fields']['view_user']['label'] = '';
  $handler->display->display_options['fields']['view_user']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_user']['element_default_classes'] = FALSE;
  $handler->display->display_options['block_description'] = 'DesignsSquare.com: Site: LOAM: Jaunākais Avīzē - Menu Ver 2';
  $export['ds_site_loam_jaunakais_avize_menu_ver_2'] = $view;

  return $export;
}
