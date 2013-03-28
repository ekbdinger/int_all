<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function ekb_devices_panel_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_views_api().
 */
function ekb_devices_panel_views_api() {
  return array(
    'api' => '2',
  );
}
