<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ekb_ba_pages_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ekb_ba_pages_node_info() {
  $items = array(
    'ba_doc' => array(
      'name' => t('BA Document'),
      'module' => 'features',
      'description' => t('Documents for the BA Department'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'ba_news' => array(
      'name' => t('BA News'),
      'module' => 'features',
      'description' => t('News and Update from the BA Department'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function ekb_ba_pages_views_api() {
  return array(
    'api' => '2',
  );
}
