<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ekb_prod_mgmt_user_default_roles() {
  $roles = array();

  // Exported role: Prod Mgmt Worker
  $roles['Prod Mgmt Worker'] = array(
    'name' => 'Prod Mgmt Worker',
  );

  return $roles;
}
