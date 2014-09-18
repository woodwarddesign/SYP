<?php
/**
 * @file
 * ads.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ads_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'advertisements';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Advertisements';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Advertisements';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  /* Field: Content: User ad */
  $handler->display->display_options['fields']['field_user_ad']['id'] = 'field_user_ad';
  $handler->display->display_options['fields']['field_user_ad']['table'] = 'field_data_field_user_ad';
  $handler->display->display_options['fields']['field_user_ad']['field'] = 'field_user_ad';
  $handler->display->display_options['fields']['field_user_ad']['label'] = '';
  $handler->display->display_options['fields']['field_user_ad']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_ad']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_user_ad']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_user_ad']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_ad']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_user_ad']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'site_ad' => 'site_ad',
  );
  /* Filter criterion: Content: Ad type (field_ad_type) */
  $handler->display->display_options['filters']['field_ad_type_value']['id'] = 'field_ad_type_value';
  $handler->display->display_options['filters']['field_ad_type_value']['table'] = 'field_data_field_ad_type';
  $handler->display->display_options['filters']['field_ad_type_value']['field'] = 'field_ad_type_value';
  $handler->display->display_options['filters']['field_ad_type_value']['value'] = array(
    1 => '1',
  );

  /* Display: User ad */
  $handler = $view->new_display('block', 'User ad', 'user_page_ad');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'User block ad';
  $handler->display->display_options['display_description'] = 'Displays an ad in the user page';
  $handler->display->display_options['block_description'] = 'User page ad';

  /* Display: Footer ad */
  $handler = $view->new_display('block', 'Footer ad', 'footer_ad');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Footer ad';
  $handler->display->display_options['display_description'] = 'Displays an ad in the footer area';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  /* Field: Content: Footer ad */
  $handler->display->display_options['fields']['field_footer_ad']['id'] = 'field_footer_ad';
  $handler->display->display_options['fields']['field_footer_ad']['table'] = 'field_data_field_footer_ad';
  $handler->display->display_options['fields']['field_footer_ad']['field'] = 'field_footer_ad';
  $handler->display->display_options['fields']['field_footer_ad']['label'] = '';
  $handler->display->display_options['fields']['field_footer_ad']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_footer_ad']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_footer_ad']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_footer_ad']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_footer_ad']['settings'] = array(
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
    'site_ad' => 'site_ad',
  );
  /* Filter criterion: Content: Ad type (field_ad_type) */
  $handler->display->display_options['filters']['field_ad_type_value']['id'] = 'field_ad_type_value';
  $handler->display->display_options['filters']['field_ad_type_value']['table'] = 'field_data_field_ad_type';
  $handler->display->display_options['filters']['field_ad_type_value']['field'] = 'field_ad_type_value';
  $handler->display->display_options['filters']['field_ad_type_value']['value'] = array(
    2 => '2',
  );
  $handler->display->display_options['block_description'] = 'Footer ad';

  /* Display: Banner ad */
  $handler = $view->new_display('block', 'Banner ad', 'banner_ad');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Banner ad';
  $handler->display->display_options['display_description'] = 'Displays a banner ad';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  /* Field: Content: Banner ad */
  $handler->display->display_options['fields']['field_banner_ad']['id'] = 'field_banner_ad';
  $handler->display->display_options['fields']['field_banner_ad']['table'] = 'field_data_field_banner_ad';
  $handler->display->display_options['fields']['field_banner_ad']['field'] = 'field_banner_ad';
  $handler->display->display_options['fields']['field_banner_ad']['label'] = '';
  $handler->display->display_options['fields']['field_banner_ad']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_banner_ad']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_banner_ad']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_ad']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_ad']['settings'] = array(
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
    'site_ad' => 'site_ad',
  );
  /* Filter criterion: Content: Ad type (field_ad_type) */
  $handler->display->display_options['filters']['field_ad_type_value']['id'] = 'field_ad_type_value';
  $handler->display->display_options['filters']['field_ad_type_value']['table'] = 'field_data_field_ad_type';
  $handler->display->display_options['filters']['field_ad_type_value']['field'] = 'field_ad_type_value';
  $handler->display->display_options['filters']['field_ad_type_value']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['block_description'] = 'Banner ad';

  /* Display: Front Page Banner ad */
  $handler = $view->new_display('block', 'Front Page Banner ad', 'front_page_banner_ad');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Front Page Banner ad';
  $handler->display->display_options['display_description'] = 'Displays a banner ad on the front page';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  /* Field: Content: Banner ad */
  $handler->display->display_options['fields']['field_banner_ad']['id'] = 'field_banner_ad';
  $handler->display->display_options['fields']['field_banner_ad']['table'] = 'field_data_field_banner_ad';
  $handler->display->display_options['fields']['field_banner_ad']['field'] = 'field_banner_ad';
  $handler->display->display_options['fields']['field_banner_ad']['label'] = '';
  $handler->display->display_options['fields']['field_banner_ad']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_banner_ad']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_banner_ad']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_ad']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_ad']['settings'] = array(
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
    'site_ad' => 'site_ad',
  );
  /* Filter criterion: Content: Ad type (field_ad_type) */
  $handler->display->display_options['filters']['field_ad_type_value']['id'] = 'field_ad_type_value';
  $handler->display->display_options['filters']['field_ad_type_value']['table'] = 'field_data_field_ad_type';
  $handler->display->display_options['filters']['field_ad_type_value']['field'] = 'field_ad_type_value';
  $handler->display->display_options['filters']['field_ad_type_value']['value'] = array(
    3 => '3',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';
  $handler->display->display_options['block_description'] = 'Front Page Banner ad';

  /* Display: Front Page Banner ad */
  $handler = $view->new_display('block', 'Front Page Banner ad', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Bottom Content Ad';
  $handler->display->display_options['display_description'] = 'Displays a banner ad on the front page';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: URL */
  $handler->display->display_options['fields']['field_url']['id'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['table'] = 'field_data_field_url';
  $handler->display->display_options['fields']['field_url']['field'] = 'field_url';
  $handler->display->display_options['fields']['field_url']['label'] = '';
  $handler->display->display_options['fields']['field_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_url']['click_sort_column'] = 'url';
  /* Field: Content: Banner ad */
  $handler->display->display_options['fields']['field_banner_ad']['id'] = 'field_banner_ad';
  $handler->display->display_options['fields']['field_banner_ad']['table'] = 'field_data_field_banner_ad';
  $handler->display->display_options['fields']['field_banner_ad']['field'] = 'field_banner_ad';
  $handler->display->display_options['fields']['field_banner_ad']['label'] = '';
  $handler->display->display_options['fields']['field_banner_ad']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_banner_ad']['alter']['path'] = '[field_url]';
  $handler->display->display_options['fields']['field_banner_ad']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_banner_ad']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_banner_ad']['settings'] = array(
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
    'site_ad' => 'site_ad',
  );
  /* Filter criterion: Content: Ad type (field_ad_type) */
  $handler->display->display_options['filters']['field_ad_type_value']['id'] = 'field_ad_type_value';
  $handler->display->display_options['filters']['field_ad_type_value']['table'] = 'field_data_field_ad_type';
  $handler->display->display_options['filters']['field_ad_type_value']['field'] = 'field_ad_type_value';
  $handler->display->display_options['filters']['field_ad_type_value']['value'] = array(
    3 => '3',
  );
  $handler->display->display_options['block_description'] = 'Generic Page Ads below content';
  $translatables['advertisements'] = array(
    t('Master'),
    t('Advertisements'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('User ad'),
    t('User block ad'),
    t('Displays an ad in the user page'),
    t('User page ad'),
    t('Footer ad'),
    t('Displays an ad in the footer area'),
    t('Banner ad'),
    t('Displays a banner ad'),
    t('Front Page Banner ad'),
    t('Displays a banner ad on the front page'),
    t('Bottom Content Ad'),
    t('Generic Page Ads below content'),
  );
  $export['advertisements'] = $view;

  return $export;
}
