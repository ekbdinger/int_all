<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function ekb_prod_mgmt_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-prod-mgmt-worker
  $menus['menu-prod-mgmt-worker'] = array(
    'menu_name' => 'menu-prod-mgmt-worker',
    'title' => 'Product Mgmt Worker',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Product Mgmt Worker');


  return $menus;
}
