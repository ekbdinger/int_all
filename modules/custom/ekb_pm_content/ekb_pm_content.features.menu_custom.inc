<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function ekb_pm_content_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-pm-links
  $menus['menu-pm-links'] = array(
    'menu_name' => 'menu-pm-links',
    'title' => 'PM Links',
    'description' => 'This is a menu with links for the PM Team',
  );
  // Exported menu: menu-pm-worker
  $menus['menu-pm-worker'] = array(
    'menu_name' => 'menu-pm-worker',
    'title' => 'PM Admin',
    'description' => 'Created for Liz Wallace and Kelly Molter on May 24, 2012. Create and Edit PM related content only',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Created for Liz Wallace and Kelly Molter on May 24, 2012. Create and Edit PM related content only');
  t('PM Admin');
  t('PM Links');
  t('This is a menu with links for the PM Team');


  return $menus;
}
