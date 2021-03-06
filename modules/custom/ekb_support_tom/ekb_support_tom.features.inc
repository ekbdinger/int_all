<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ekb_support_tom_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ekb_support_tom_node_info() {
  $items = array(
    'support_news' => array(
      'name' => t('Support News'),
      'module' => 'features',
      'description' => t('Updates from Tom Olafsson and the Support team'),
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
function ekb_support_tom_views_api() {
  return array(
    'api' => '2',
  );
}
