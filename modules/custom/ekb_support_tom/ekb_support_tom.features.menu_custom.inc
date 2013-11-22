<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function ekb_support_tom_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-support-worker
  $menus['menu-support-worker'] = array(
    'menu_name' => 'menu-support-worker',
    'title' => 'Support Worker Menu',
    'description' => 'Created on 07/12/2012. Initially this will just be Tom.  But could be another person as well in the future',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Created on 07/12/2012. Initially this will just be Tom.  But could be another person as well in the future');
  t('Support Worker Menu');


  return $menus;
}
