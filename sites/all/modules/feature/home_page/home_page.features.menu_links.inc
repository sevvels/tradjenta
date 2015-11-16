<?php
/**
 * @file
 * home_page.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function home_page_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_dosing:<front>.
  $menu_links['main-menu_dosing:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Dosing',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'main-nav-item',
        'style' => '',
      ),
      'fragment' => 'dosing',
      'identifier' => 'main-menu_dosing:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_efficacy:<front>.
  $menu_links['main-menu_efficacy:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Efficacy',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'main-nav-item',
        'style' => '',
      ),
      'fragment' => 'efficacy',
      'identifier' => 'main-menu_efficacy:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_resources:<front>.
  $menu_links['main-menu_resources:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'main-nav-item',
        'style' => '',
      ),
      'fragment' => 'resources',
      'identifier' => 'main-menu_resources:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_safety-data:<front>.
  $menu_links['main-menu_safety-data:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Safety Data',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'main-nav-item',
        'style' => '',
      ),
      'fragment' => 'safety',
      'identifier' => 'main-menu_safety-data:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_contact-us:<front>.
  $menu_links['menu-footer-menu_contact-us:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'nav-item',
        'style' => '',
      ),
      'fragment' => 'contact',
      'identifier' => 'menu-footer-menu_contact-us:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_privacy-statement://bidocs.boehringer-ingelheim.com/BIWebAccess/ViewServlet.ser?docBase=renetnt&folderPath=/Privacy+Statements/Diabetes++Alliance+Privacy+Statement.htm.
  $menu_links['menu-footer-menu_privacy-statement://bidocs.boehringer-ingelheim.com/BIWebAccess/ViewServlet.ser?docBase=renetnt&folderPath=/Privacy+Statements/Diabetes++Alliance+Privacy+Statement.htm'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '//bidocs.boehringer-ingelheim.com/BIWebAccess/ViewServlet.ser?docBase=renetnt&folderPath=/Privacy+Statements/Diabetes++Alliance+Privacy+Statement.htm',
    'router_path' => '',
    'link_title' => 'Privacy Statement',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'nav-item',
        'style' => '',
      ),
      'identifier' => 'menu-footer-menu_privacy-statement://bidocs.boehringer-ingelheim.com/BIWebAccess/ViewServlet.ser?docBase=renetnt&folderPath=/Privacy+Statements/Diabetes++Alliance+Privacy+Statement.htm',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_sitemap:<front>.
  $menu_links['menu-footer-menu_sitemap:<front>'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Sitemap',
    'options' => array(
      'fragment' => 'sitemap',
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'nav-item',
        'style' => '',
      ),
      'identifier' => 'menu-footer-menu_sitemap:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu_terms-of-use:http://bidocs.boehringer-ingelheim.com/BIWebAccess/ViewServlet.ser?docBase=renetnt&folderPath=/Privacy+Statements/PC-BDFR-0009-CONS_BI+Terms+of+Use_Alliance.pdf.
  $menu_links['menu-footer-menu_terms-of-use:http://bidocs.boehringer-ingelheim.com/BIWebAccess/ViewServlet.ser?docBase=renetnt&folderPath=/Privacy+Statements/PC-BDFR-0009-CONS_BI+Terms+of+Use_Alliance.pdf'] = array(
    'menu_name' => 'menu-footer-menu',
    'link_path' => 'http://bidocs.boehringer-ingelheim.com/BIWebAccess/ViewServlet.ser?docBase=renetnt&folderPath=/Privacy+Statements/PC-BDFR-0009-CONS_BI+Terms+of+Use_Alliance.pdf',
    'router_path' => '',
    'link_title' => 'Terms of Use',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'nav-item',
        'style' => '',
      ),
      'identifier' => 'menu-footer-menu_terms-of-use:http://bidocs.boehringer-ingelheim.com/BIWebAccess/ViewServlet.ser?docBase=renetnt&folderPath=/Privacy+Statements/PC-BDFR-0009-CONS_BI+Terms+of+Use_Alliance.pdf',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_for-patients://www.tradjenta.com.
  $menu_links['menu-secondary-menu_for-patients://www.tradjenta.com'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => '//www.tradjenta.com',
    'router_path' => '',
    'link_title' => 'For Patients',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => 'secondary-nav-item',
        'style' => '',
      ),
      'identifier' => 'menu-secondary-menu_for-patients://www.tradjenta.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_important-safety-information:<front>.
  $menu_links['menu-secondary-menu_important-safety-information:<front>'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Important Safety Information',
    'options' => array(
      'attributes' => array(),
      'item_attributes' => array(
        'id' => '',
        'class' => 'secondary-nav-item first expand-isi',
        'style' => '',
      ),
      'identifier' => 'menu-secondary-menu_important-safety-information:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_other-medication-options://hcp.jentadueto.com.
  $menu_links['menu-secondary-menu_other-medication-options://hcp.jentadueto.com'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => '//hcp.jentadueto.com',
    'router_path' => '',
    'link_title' => 'Other Medication Options',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => 'secondary-nav-item',
        'style' => '',
      ),
      'identifier' => 'menu-secondary-menu_other-medication-options://hcp.jentadueto.com',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-secondary-menu_prescribing-information--medication-guide:http://bidocs.boehringer-ingelheim.com/BIWebAccess/ViewServlet.ser?docBase=renetnt&folderPath=/Prescribing+Information/PIs/Tradjenta/Tradjenta.pdf.
  $menu_links['menu-secondary-menu_prescribing-information--medication-guide:http://bidocs.boehringer-ingelheim.com/BIWebAccess/ViewServlet.ser?docBase=renetnt&folderPath=/Prescribing+Information/PIs/Tradjenta/Tradjenta.pdf'] = array(
    'menu_name' => 'menu-secondary-menu',
    'link_path' => 'http://bidocs.boehringer-ingelheim.com/BIWebAccess/ViewServlet.ser?docBase=renetnt&folderPath=/Prescribing+Information/PIs/Tradjenta/Tradjenta.pdf',
    'router_path' => '',
    'link_title' => 'Prescribing Information & Medication Guide',
    'options' => array(
      'attributes' => array(
        'target' => '_blank',
      ),
      'item_attributes' => array(
        'id' => '',
        'class' => 'secondary-nav-item',
        'style' => '',
      ),
      'identifier' => 'menu-secondary-menu_prescribing-information--medication-guide:http://bidocs.boehringer-ingelheim.com/BIWebAccess/ViewServlet.ser?docBase=renetnt&folderPath=/Prescribing+Information/PIs/Tradjenta/Tradjenta.pdf',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Us');
  t('Dosing');
  t('Efficacy');
  t('For Patients');
  t('Important Safety Information');
  t('Other Medication Options');
  t('Prescribing Information & Medication Guide');
  t('Privacy Statement');
  t('Resources');
  t('Safety Data');
  t('Sitemap');
  t('Terms of Use');

  return $menu_links;
}
