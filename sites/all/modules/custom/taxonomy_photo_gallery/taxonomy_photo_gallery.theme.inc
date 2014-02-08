<?php 
/**
 * @file
 * Contains all the code needed to support the module's theme
 *
 */

/**
 * Implements hook_theme().
 *
 * Defines the theming capabilities provided by this module.
 */
function taxonomy_photo_gallery_theme() {
  return array(
    'taxonomy_photo_gallery_teaser' => array(
      'variables' => array(
        'term' => NULL,
      ),
    ),
    'taxonomy_photo_gallery_page' => array(
      'variables' => array(
        'terms' => NULL,
      ),
    ),
    /*
    'theming_example_content_array' => array(
      // We use 'render element' when the item to be passed is a self-describing
      // render array (it will have #theme_wrappers)
      'render element' => 'element',
    ),
    'theming_example_list' => array(
      // We use 'variables' when the item to be passed is an array whose
      // structure must be described here.
      'variables' => array(
        'title' => NULL,
        'items' => NULL,
      ),
    ),
    'theming_example_select_form'  => array(
      'render element' => 'form',
    ),
    'theming_example_text_form'  => array(
      'render element' => 'form',
      // In this one the rendering will be done by a template file
      // (theming-example-text-form.tpl.php) instead of being rendered by a
      // function. Note the use of dashes to separate words in place of
      // underscores. The template file's extension is also left out so that
      // it may be determined automatically depending on the template engine
      // the site is using.
      'template' => 'theming-example-text-form',
      
    ),
    */
  );
}

/**
 * Themes a teaser view for a taxonomy photo gallery
 */
function theme_taxonomy_photo_gallery_teaser($variables) {

  $term = $variables['term'];
  if (is_numeric($term)) {
    $term = taxonomy_term_load($term);
  }
  if (!$term->tid) return FALSE;
  
  $path = variable_get('taxonomy_photo_gallery_path', 'photos');
  $output = '';
  $output .= '<h2>'. l($term->name, $path) .'</h2>';
  $output .= '<p>'. 'photo here' . '</p>';
  return $output;
}
/**
 * Themes the main photos landing page for taxonomy photo gallery
 */
function theme_taxonomy_photo_gallery_page($variables) {
  $terms = $variables['terms'];
  if (!$terms) {
    
    $vid = _taxonomy_photo_gallery_group_vid();
    $terms = taxonomy_get_tree($vid);
  }
  dsm($terms);
  $items = array();
  return theme('item_list', $items, FALSE, 'ul', array('class' => 'taxonomy-photo-gallery-page'));
}
  