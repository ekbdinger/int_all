<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ekb_ba_pages_user_default_roles() {
  $roles = array();

  // Exported role: BA
  $roles['BA'] = array(
    'name' => 'BA',
  );

  // Exported role: BA Worker
  $roles['BA Worker'] = array(
    'name' => 'BA Worker',
  );

  return $roles;
}
