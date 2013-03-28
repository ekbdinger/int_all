<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function ekb_prod_mgmt_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-prod-mgmt-worker:node/add/prod-mgmt-news
  $menu_links['menu-prod-mgmt-worker:node/add/prod-mgmt-news'] = array(
    'menu_name' => 'menu-prod-mgmt-worker',
    'link_path' => 'node/add/prod-mgmt-news',
    'router_path' => 'node/add/prod-mgmt-news',
    'link_title' => 'New Product Mgmt News',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('New Product Mgmt News');


  return $menu_links;
}
