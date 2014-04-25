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
  $view->name = 'designssquare_com_site_loam_gallery';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'DesignsSquare.com: Site: LOAM: gallery';
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

  /* Display: Gallery Overview */
  $handler = $view->new_display('block', 'Gallery Overview', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent From Photo Gallery';
  $handler->display->display_options['display_description'] = 'overview of photo galleries';
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
  $handler->display->display_options['block_description'] = 'Builder: Recent From Gallery';
  $export['designssquare_com_site_loam_gallery'] = $view;

  return $export;
}
