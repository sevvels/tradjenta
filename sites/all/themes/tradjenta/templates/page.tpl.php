<?php
/**
 * @file
 * Default theme implementation to display a single Drupal page.
 *
 * The doctype, html, head and body tags are not in this template. Instead they
 * can be found in the html.tpl.php template in this directory.
 *
 * Available variables:
 *
 * General utility variables:
 * - $base_path: The base URL path of the Drupal installation. At the very
 *   least, this will always default to /.
 * - $directory: The directory the template is located in, e.g. modules/system
 *   or themes/bartik.
 * - $is_front: TRUE if the current page is the front page.
 * - $logged_in: TRUE if the user is registered and signed in.
 * - $is_admin: TRUE if the user has permission to access administration pages.
 *
 * Site identity:
 * - $front_page: The URL of the front page. Use this instead of $base_path,
 *   when linking to the front page. This includes the language domain or
 *   prefix.
 * - $logo: The path to the logo image, as defined in theme configuration.
 * - $site_name: The name of the site, empty when display has been disabled
 *   in theme settings.
 * - $site_slogan: The slogan of the site, empty when display has been disabled
 *   in theme settings.
 *
 * Navigation:
 * - $main_menu (array): An array containing the Main menu links for the
 *   site, if they have been configured.
 * - $secondary_menu (array): An array containing the Secondary menu links for
 *   the site, if they have been configured.
 * - $breadcrumb: The breadcrumb trail for the current page.
 *
 * Page content (in order of occurrence in the default page.tpl.php):
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title: The page title, for use in the actual HTML content.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 * - $messages: HTML for status and error messages. Should be displayed
 *   prominently.
 * - $tabs (array): Tabs linking to any sub-pages beneath the current page
 *   (e.g., the view and edit tabs when displaying a node).
 * - $action_links (array): Actions local to the page, such as 'Add menu' on the
 *   menu administration interface.
 * - $feed_icons: A string of all feed icons for the current page.
 * - $node: The node object, if there is an automatically-loaded node
 *   associated with the page, and the node ID is the second argument
 *   in the page's path (e.g. node/12345 and node/12345/revisions, but not
 *   comment/reply/12345).
 *
 * Regions:
 * - $page['help']: Dynamic help text, mostly for admin pages.
 * - $page['highlighted']: Items for the highlighted content region.
 * - $page['content']: The main content of the current page.
 * - $page['sidebar_first']: Items for the first sidebar.
 * - $page['sidebar_second']: Items for the second sidebar.
 * - $page['header']: Items for the header region.
 * - $page['footer']: Items for the footer region.
 *
 * @see bootstrap_preprocess_page()
 * @see template_preprocess()
 * @see template_preprocess_page()
 * @see bootstrap_process_page()
 * @see template_process()
 * @see html.tpl.php
 *
 * @ingroup themeable
 */
?>
<div class="l-header-wrapper active hidden-xs" id="desktop-header">
    <div class="header-bg faded"></div>
    <div class="container">
      <div class="row">
        <div class="col-xs-12">
          <div class="header">
            <p class="callout">For U.S. Healthcare Professionals Only</p>
            <div class="logo">
              <a class="scroll-link" href="<?php print $front_page; ?>">
                <img src="<?php print $logo; ?>" alt="<?php print t('Tradjenta® (linagliptin) Tablets 5mg logo'); ?>" />
              </a>
            </div>
            <div class="nav">
              <?php if (!empty($sec_nav)): ?>
              <?php print render($sec_nav); ?>
              <?php endif; ?>
              <?php if (!empty($primary_nav)): ?>
              <?php print render($primary_nav); ?>
              <?php endif; ?>
            </div>
          </div>
        </div>
      </div>
    </div>
  </div>

<div class="main-container">

  <header role="banner" id="page-header">
    <?php if (!empty($site_slogan)): ?>
      <p class="lead"><?php print $site_slogan; ?></p>
    <?php endif; ?>

    <?php print render($page['header']); ?>
  </header> <!-- /#page-header -->

  <div class="row">

    <?php if (!empty($page['sidebar_first'])): ?>
      <aside class="col-sm-3" role="complementary">
        <?php print render($page['sidebar_first']); ?>
      </aside>  <!-- /#sidebar-first -->
    <?php endif; ?>

    <section>
      <?php if (!empty($page['highlighted'])): ?>
        <div class="highlighted jumbotron"><?php print render($page['highlighted']); ?></div>
      <?php endif; ?>
      <?php if (!empty($breadcrumb)): print $breadcrumb; endif;?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if (!empty($title)): ?>
        <h1 class="page-header"><?php print $title; ?></h1>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php if (!empty($tabs)): ?>
        <?php print render($tabs); ?>
      <?php endif; ?>
      <?php if (!empty($page['help'])): ?>
        <?php print render($page['help']); ?>
      <?php endif; ?>
      <?php if (!empty($action_links)): ?>
        <ul class="action-links"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
    </section>

    <?php if (!empty($page['sidebar_second'])): ?>
      <aside class="col-sm-3" role="complementary">
        <?php print render($page['sidebar_second']); ?>
      </aside>  <!-- /#sidebar-second -->
    <?php endif; ?>

  </div>
</div>


<div class="l-footer-wrapper">
  <div class="container">
    <div class="row">
      <div class="col-xs-12 col-sm-12">
        <a href="http://us.boehringer-ingelheim.com/" target="_blank">
          <img class="m-footer-bi-logo" src="/sites/all/themes/tradjenta/images/bi-footer-logo.png" alt="Boehringer Ingelheim" />
        </a>
        <a href="http://www.lilly.com/Pages/home.aspx" target="_blank">
          <img class="m-footer-lilly-logo" src="/sites/all/themes/tradjenta/images/lilly-footer-logo.png" alt="Boehringer Ingelheim" />
        </a>
        <div class="l-footer-nav-container">
          <?php if (!empty($footer_nav)): ?>
          <?php print render($footer_nav); ?>
          <?php endif; ?>
        </div>
      </div>
    </div>
    <div class="row l-footer-bottom">
      <div class="col-xs-12 col-sm-8">
          <p class="m-footer-disclaimer">TRADJENTA<sup>&reg;</sup> is a registered trademark of Boehringer Ingelheim International GmbH &amp; Co. KG and used under license. Copyright &copy; 2015 Boehringer Ingelheim Pharmaceuticals, Inc. All rights reserved. Use of this Site is subject to the Internet Site Legal Notices and Disclaimers and Privacy Statement.
          <br/>PC-TJ-0158-PROF</p>
      </div>
      <div class="col-xs-12 col-sm-4 l-footer-cares">
        <a href="http://us.boehringer-ingelheim.com/our_responsibility/patients-families.html"  target="_blank">
          <img class="m-footer-cares-logo" src="/sites/all/themes/tradjenta/images/cares-logo.jpg" alt="Boehringer Ingelheim CARES Foundation" />
        </a>
        <p class="m-footer-cares-text">Working hard to make our medicines available to people who need them.<a href="http://us.boehringer-ingelheim.com/our_responsibility/patients-families.html"  target="_blank">Visit site &gt;</a></p>
      </div>
    </div>
  </div>
</div>
