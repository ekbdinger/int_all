<?php

/**
 * Implementation of hook_views_default_views().
 */
function ekb_prod_mgmt_views_default_views() {
  $views = array();

  // Exported view: product_management
  $view = new view;
  $view->name = 'product_management';
  $view->description = 'Product Management';
  $view->tag = 'paul';
  $view->base_table = 'node';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'prod_mgmt_news' => 'prod_mgmt_news',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'role',
    'role' => array(
      3 => 3,
      5 => 5,
      35 => 35,
    ),
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('header', '<h1>Product Management Blog</h1>');
  $handler->override_option('header_format', '2');
  $handler->override_option('header_empty', 0);
  $handler->override_option('use_pager', '1');
  $handler->override_option('row_plugin', 'node');
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'product_management/news');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'primary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
