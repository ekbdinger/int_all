<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ekb_pm_content_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function ekb_pm_content_node_info() {
  $items = array(
    'pm_doc' => array(
      'name' => t('PM Document'),
      'module' => 'features',
      'description' => t('Project Management Documents'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'pm_news' => array(
      'name' => t('PM News'),
      'module' => 'features',
      'description' => t('Project Management News and Updates for the bulletin board'),
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
function ekb_pm_content_views_api() {
  return array(
    'api' => '2',
  );
}
