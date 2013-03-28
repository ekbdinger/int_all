<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function ekb_ba_pages_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-ba-links
  $menus['menu-ba-links'] = array(
    'menu_name' => 'menu-ba-links',
    'title' => 'BA Links',
    'description' => '',
  );
  // Exported menu: menu-ba-workers
  $menus['menu-ba-workers'] = array(
    'menu_name' => 'menu-ba-workers',
    'title' => 'BA Worker',
    'description' => 'For people who have the ability to create content for the BA Pages',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('BA Links');
  t('BA Worker');
  t('For people who have the ability to create content for the BA Pages');


  return $menus;
}
