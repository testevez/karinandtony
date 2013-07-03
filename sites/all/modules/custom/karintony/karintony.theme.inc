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
  
 /*
  
  $file->content['links']['#links']['rpx_share_button'] = array(
    'title' => _rpx_share_button($file),
    'html' => TRUE,
  );
  */
  $build = file_view($file, 'kt_detail');
  
  drupal_add_css(drupal_get_path('module', 'flag') . '/theme/flag.css');
  drupal_add_js(drupal_get_path('module', 'flag') . '/theme/flag.js');
  
  //dsm($file);
  print drupal_render($build);
  //return theme_kt_detail($file);
  //print  drupal_render($build);
}


/*

 if (!variable_get('rpx_social_enabled', FALSE)) {
    return;
  }

  // Should we attach to teasers?
  if($view_mode == 'teaser' && !variable_get('rpx_attach_share_link_to_teasers_'. $node->type, FALSE))
    return;

  // Attach to node links section.
  if (variable_get('rpx_attach_share_link_to_nodelink_'. $node->type, FALSE)) {
	
  }

  // Attach to node contents section.
  if (variable_get('rpx_attach_share_link_to_nodecont_'. $node->type, FALSE)) {
    $node->content['rpx_share_button'] = array(
      '#markup' => _rpx_share_button($node),
      '#weight' => variable_get('rpx_attach_share_link_to_nodecont_weight_'. $node->type, 40),
    );
  }
*/