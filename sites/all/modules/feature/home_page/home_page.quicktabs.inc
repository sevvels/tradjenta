<?php
/**
 * @file
 * home_page.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function home_page_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'efficacy';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'EFFICACY';
  $quicktabs->tabs = array(
    0 => array(
      'nid' => '8',
      'view_mode' => 'full',
      'hide_title' => 1,
      'title' => 'Monotheraphy and Add-On Studies',
      'weight' => '-100',
      'type' => 'node',
    ),
    1 => array(
      'nid' => '4',
      'view_mode' => 'full',
      'hide_title' => 1,
      'title' => 'Add-on to Basalin Insulin',
      'weight' => '-99',
      'type' => 'node',
    ),
    2 => array(
      'nid' => '6',
      'view_mode' => 'full',
      'hide_title' => 1,
      'title' => '2-year Noninferiority Study VS. an SU',
      'weight' => '-98',
      'type' => 'node',
    ),
    3 => array(
      'nid' => '12',
      'view_mode' => 'full',
      'hide_title' => 1,
      'title' => 'Data in Adult Patients with Type 2 Diabetes and Severe Renal Impairment',
      'weight' => '-97',
      'type' => 'node',
    ),
  );
  $quicktabs->renderer = 'quicktabs';
  $quicktabs->style = 'nostyle';
  $quicktabs->options = array();

  // Translatables
  // Included for use with string extractors like potx.
  t('2-year Noninferiority Study VS. an SU');
  t('Add-on to Basalin Insulin');
  t('Data in Adult Patients with Type 2 Diabetes and Severe Renal Impairment');
  t('EFFICACY');
  t('Monotheraphy and Add-On Studies');

  $export['efficacy'] = $quicktabs;

  return $export;
}
