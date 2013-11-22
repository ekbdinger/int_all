<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ekb_support_tom_user_default_roles() {
  $roles = array();

  // Exported role: Support worker
  $roles['Support worker'] = array(
    'name' => 'Support worker',
  );

  return $roles;
}
