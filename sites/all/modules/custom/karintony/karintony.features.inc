<?php
/**
 * @file
 * karintony.features.inc
 */

/**
 * Implements hook_views_api().
 */
function karintony_views_api() {
  return array("api" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function karintony_flag_default_flags() {
  $flags = array();
  // Exported flag: "Favorite Photographs".
  $flags['favorite_photos'] = array(
    'content_type' => 'file',
    'title' => 'Favorite Photographs',
    'global' => '0',
    'types' => array(
      0 => 'image',
    ),
    'flag_short' => 'Like',
    'flag_long' => 'Like this photograph',
    'flag_message' => 'This photograph has been added to your Favorite Photographs list',
    'unflag_short' => 'Unlike',
    'unflag_long' => 'Unlike this photograph',
    'unflag_message' => 'This photograph has been removed from your Favorite Photographs list',
    'unflag_denied_text' => 'This photograph is already in your Favorite Photogrpahs list',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'weight' => 0,
    'show_on_file_page' => TRUE,
    'show_on_entity' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'api_version' => 2,
    'module' => 'karintony',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_image_default_styles().
 */
function karintony_image_default_styles() {
  $styles = array();

  // Exported image style: 240_width.
  $styles['240_width'] = array(
    'name' => '240_width',
    'effects' => array(
      2 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '240',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: masonry_image_width.
  $styles['masonry_image_width'] = array(
    'name' => 'masonry_image_width',
    'effects' => array(
      3 => array(
        'label' => 'Scale',
        'help' => 'Scaling will maintain the aspect-ratio of the original image. If only a single dimension is specified, the other dimension will be calculated.',
        'effect callback' => 'image_scale_effect',
        'dimensions callback' => 'image_scale_dimensions',
        'form callback' => 'image_scale_form',
        'summary theme' => 'image_scale_summary',
        'module' => 'image',
        'name' => 'image_scale',
        'data' => array(
          'width' => '310',
          'height' => '',
          'upscale' => 0,
        ),
        'weight' => '1',
      ),
    ),
  );

  return $styles;
}
