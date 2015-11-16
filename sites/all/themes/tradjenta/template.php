<?php

/**
 * @file
 * template.php
 */

/**
 * Overriding theme wrapper function for the primary menu links.
 */
function tradjenta_menu_tree__primary(&$variables) {
  return '<ul class="main-nav">' . $variables['tree'] . '</ul>';
}

/**
 * Bootstrap theme wrapper function for the secondary menu links.
 */
function tradjenta_menu_tree__secondary_menu(&$variables) {
  return '<ul class="secondary-nav">' . $variables['tree'] . '</ul>';
}

/**
 * Implements hook_preprocess_page().
 *
 * @see page.tpl.php
 */
function tradjenta_preprocess_page(&$variables) {
  // Footer nav.
  // Build links.
  $variables['footer_nav'] = menu_tree('menu-footer-menu');
  // Provide default theme wrapper function.
  $variables['footer_nav']['#theme_wrappers'] = array('menu_tree__footer');
  // Secondary nav.
  // Build links.
  $variables['sec_nav'] = menu_tree('menu-secondary-menu');
  // Provide default theme wrapper function.
  $variables['sec_nav']['#theme_wrappers'] = array('menu_tree__secondary_menu');
}

/**
 * Bootstrap theme wrapper function for the secondary menu links.
 */
function tradjenta_menu_tree__footer(&$variables) {
  return '<ul class="m-footer-nav footer-nav-mobile-left">' . $variables['tree'] . '</ul>';
}


function tradjenta_qt_quicktabs_tabset($vars) {
  $variables = array(
    'attributes' => array(
      'class' => 'quicktabs-tabs m-tabs-header quicktabs-style-' . $vars['tabset']['#options']['style'],
    ),
    'items' => array(),
  );
  $last_key = key( array_slice( $vars['tabset']['tablinks'], -1, 1, TRUE ) );
  foreach (element_children($vars['tabset']['tablinks']) as $key) {
    $item = array();
    if (is_array($vars['tabset']['tablinks'][$key])) {
      $tab = $vars['tabset']['tablinks'][$key];
      $item['class'] = array('tab');
      if ($key == $vars['tabset']['#options']['active']) {
        array_push($item['class'], 'active');
      }
      switch ($key) {
        case '0':
          array_push($item['class'], 'tab-straight', 'tab-straight-left');
          break;
        case '1':
          array_push($item['class'], 'tab-skewed', 'tab-skewed-first');
          break;
        case '2':
          array_push($item['class'], 'tab-skewed', 'tab-skewed-last');
          break;
        case '3':
          array_push($item['class'], 'tab-straight', 'tab-straight-right');
          break;
        default:
          array_push($item['class'], 'tab-skewed', 'tab-skewed-first');
          break;
      }
            $item['data'] = drupal_render($tab);
      $variables['items'][] = $item;
    }
  }
  return theme('item_list', $variables);
}

/**
 * Theme function to output content for classic Quicktabs style tabs.
 *
 * @ingroup themeable
 */
function tradjenta_qt_quicktabs($variables) {
  $element = $variables['element'];
  $output = '<div class="container"><div class="row"><div class="col-xs-12 col-sm-10 col-sm-push-1">';
  $output .= '<h4 class="eyebrow">In addition to diet and exercise, to improve glycemic control in adult patients with type 2 diabetes</h4>';
  $output .= '<h1>Efficacy</h1>';
  $output .= '<div '. drupal_attributes($element['#options']['attributes']) .'>';
  $output .= drupal_render($element['tabs']);

  $output .= drupal_render($element['container']);

  $output .= '</div></div></div></div>';
  return $output;
}
