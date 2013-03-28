<?php

/**
 * Implementation of hook_user_default_roles().
 */
function ekb_pm_content_user_default_roles() {
  $roles = array();

  // Exported role: PM Worker
  $roles['PM Worker'] = array(
    'name' => 'PM Worker',
  );

  return $roles;
}
