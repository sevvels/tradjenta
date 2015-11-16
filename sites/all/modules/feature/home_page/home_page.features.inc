<?php
/**
 * @file
 * home_page.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function home_page_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "quicktabs" && $api == "quicktabs") {
    return array("version" => "1");
  }
}
