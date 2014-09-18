<?php
/**
 * @file
 * ads.features.inc
 */

/**
 * Implements hook_views_api().
 */
function ads_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ads_node_info() {
  $items = array(
    'site_ad' => array(
      'name' => t('Site Ad'),
      'base' => 'node_content',
      'description' => t('Ad content type to display images with adverts and links to relevant sites.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
