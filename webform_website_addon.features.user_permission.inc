<?php
/**
 * @file
 * webform_website_addon.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function webform_website_addon_user_default_permissions() {
  $permissions = array();

  // Exported permission: access all webform results.
  $permissions['access all webform results'] = array(
    'name' => 'access all webform results',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'webform',
  );

  return $permissions;
}
