<?php

/**
 * @file
 * Theme functions for karintony.module
 */

/**
 * Theme function
 */
function theme_kt_detail($variables) {
  $file = $variables['file'];
  
  $build = file_view($file, 'kt_detail');
  drupal_add_css(drupal_get_path('module', 'flag') . '/theme/flag.css');
  drupal_add_js(drupal_get_path('module', 'flag') . '/theme/flag.js');
  print drupal_render($build);
  //return theme_kt_detail($file);
  //print  drupal_render($build);
}

