<?php
/**
 * @file
 * wwe_photo.file_default_displays.inc
 */

/**
 * Implements hook_file_default_displays().
 */
function wwe_photo_file_default_displays() {
  $export = array();

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'brightcove__default__media_brightcove_video';
  $file_display->weight = -49;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'bgcolor' => '#252525',
    'width' => '642',
    'height' => '361',
    'playerID' => '1511047392001',
    'playerKey' => 'AQ~~,AAAAFszvO9k~,_Kl7mkws6Uh6y3mQWT7fM1xSQ8kUwxDG',
    'autoplay' => 0,
  );
  $export['brightcove__default__media_brightcove_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'brightcove__featured_image__media_brightcove_video';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'bgcolor' => '#252525',
    'width' => '545',
    'height' => '345',
    'playerID' => '1511047392001',
    'playerKey' => 'AQ~~,AAAAFszvO9k~,_Kl7mkws6Uh6y3mQWT7fM1xSQ8kUwxDG',
    'autoplay' => 0,
  );
  $export['brightcove__featured_image__media_brightcove_video'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'brightcove__micro_image__media_brightcove_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'micro_images',
  );
  $export['brightcove__micro_image__media_brightcove_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'brightcove__preview__media_brightcove_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'thumbnail',
  );
  $export['brightcove__preview__media_brightcove_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'brightcove__prominent_image_large__media_brightcove_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'prominent_image_large',
  );
  $export['brightcove__prominent_image_large__media_brightcove_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'brightcove__prominent_image_medium__media_brightcove_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'prominent_image_medium',
  );
  $export['brightcove__prominent_image_medium__media_brightcove_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'brightcove__small_image__media_brightcove_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'small_images',
  );
  $export['brightcove__small_image__media_brightcove_image'] = $file_display;

  $file_display = new stdClass();
  $file_display->api_version = 1;
  $file_display->name = 'brightcove__teaser__media_brightcove_image';
  $file_display->weight = 0;
  $file_display->status = TRUE;
  $file_display->settings = array(
    'image_style' => 'square_thumbnail',
  );
  $export['brightcove__teaser__media_brightcove_image'] = $file_display;

  return $export;
}
