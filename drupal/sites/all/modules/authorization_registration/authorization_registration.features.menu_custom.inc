<?php
/**
 * @file
 * authorization_registration.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function authorization_registration_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: devel.
  $menus['devel'] = array(
    'menu_name' => 'devel',
    'title' => 'Development',
    'description' => 'Development link',
  );
  // Exported menu: features.
  $menus['features'] = array(
    'menu_name' => 'features',
    'title' => 'Features',
    'description' => 'Menu items for any enabled features.',
  );
  // Exported menu: user-menu.
  $menus['user-menu'] = array(
    'menu_name' => 'user-menu',
    'title' => 'User menu',
    'description' => 'The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Development');
  t('Development link');
  t('Features');
  t('Menu items for any enabled features.');
  t('The <em>User</em> menu contains links related to the user\'s account, as well as the \'Log out\' link.');
  t('User menu');


  return $menus;
}
