<?php
/**
 * @file
 * wwe_photo.flexslider_default_preset.inc
 */

/**
 * Implements hook_flexslider_default_presets().
 */
function wwe_photo_flexslider_default_presets() {
  $export = array();

  $preset = new stdClass();
  $preset->disabled = FALSE; /* Edit this to true to make a default preset disabled initially */
  $preset->api_version = 1;
  $preset->name = 'wwe';
  $preset->title = 'WWE';
  $preset->theme = 'classic';
  $preset->imagestyle_normal = 'flexslider_full';
  $preset->options = array(
    'animation' => 'fade',
    'animationDuration' => 600,
    'slideDirection' => 'horizontal',
    'slideshow' => 1,
    'slideshowSpeed' => 7000,
    'animationLoop' => 1,
    'randomize' => 0,
    'slideToStart' => 0,
    'directionNav' => 1,
    'controlNav' => 1,
    'keyboardNav' => 1,
    'mousewheel' => 1,
    'prevText' => '',
    'nextText' => '',
    'pausePlay' => 0,
    'pauseText' => 'Pause',
    'playText' => 'Play',
    'pauseOnAction' => 1,
    'controlsContainer' => '.flex-nav-container',
    'manualControls' => '',
  );
  $export['wwe'] = $preset;

  return $export;
}
