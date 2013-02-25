<?php
/**
 * @file
 * wwe_photo.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function wwe_photo_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:file/add
  $menu_links['navigation:file/add'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'file/add',
    'router_path' => 'file/add',
    'link_title' => 'Add file',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add file');


  return $menu_links;
}
