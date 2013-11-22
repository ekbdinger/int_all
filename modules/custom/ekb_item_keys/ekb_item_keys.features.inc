<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ekb_item_keys_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ekb_item_keys_node_info() {
  $items = array(
    'item_key' => array(
      'name' => t('Item Key'),
      'module' => 'features',
      'description' => t('List of Item Keys that can be created into a view to sort and search.  Could also create a node-reference field that might pull these in dynamically.  '),
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
function ekb_item_keys_views_api() {
  return array(
    'api' => '2',
  );
}
