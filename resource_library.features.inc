<?php
/**
 * @file
 * resource_library.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function resource_library_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function resource_library_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function resource_library_node_info() {
  $items = array(
    'resource' => array(
      'name' => t('Resource'),
      'base' => 'node_content',
      'description' => t('Materials for the Resource Library'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
