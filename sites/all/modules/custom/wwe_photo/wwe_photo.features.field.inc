<?php
/**
 * @file
 * wwe_photo.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function wwe_photo_field_default_fields() {
  $fields = array();

  // Exported field: 'file-brightcove-field_date'.
  $fields['file-brightcove-field_date'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_date',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'date',
      'settings' => array(
        'cache_count' => '4',
        'cache_enabled' => 0,
        'granularity' => array(
          'day' => 'day',
          'hour' => 'hour',
          'minute' => 'minute',
          'month' => 'month',
          'second' => 0,
          'year' => 'year',
        ),
        'timezone_db' => 'UTC',
        'todate' => '',
        'tz_handling' => 'site',
      ),
      'translatable' => '0',
      'type' => 'datestamp',
    ),
    'field_instance' => array(
      'bundle' => 'brightcove',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'featured_image' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'micro_image' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'prominent_image_large' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'prominent_image_medium' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'small_image' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'file',
      'field_name' => 'field_date',
      'label' => 'Date',
      'required' => 0,
      'settings' => array(
        'default_value' => 'now',
        'default_value2' => 'same',
        'default_value_code' => '',
        'default_value_code2' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'date',
        'settings' => array(
          'increment' => 15,
          'input_format' => 'm/d/Y - H:i:s',
          'input_format_custom' => '',
          'label_position' => 'above',
          'text_parts' => array(),
          'year_range' => '-3:+3',
        ),
        'type' => 'date_text',
        'weight' => '-3',
      ),
    ),
  );

  // Exported field: 'file-brightcove-field_description'.
  $fields['file-brightcove-field_description'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_description',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'brightcove',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'featured_image' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'micro_image' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'prominent_image_large' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'prominent_image_medium' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'small_image' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'file',
      'field_name' => 'field_description',
      'label' => 'Description',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '-4',
      ),
    ),
  );

  // Exported field: 'file-brightcove-field_duration'.
  $fields['file-brightcove-field_duration'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_duration',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'number_integer',
    ),
    'field_instance' => array(
      'bundle' => 'brightcove',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Duration of the movie.  In most cases this will be updated automatically.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'featured_image' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'micro_image' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'preview' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'prominent_image_large' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'prominent_image_medium' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'small_image' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'file',
      'field_name' => 'field_duration',
      'label' => 'Duration',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '-2',
      ),
    ),
  );

  // Exported field: 'node-photo_gallery-body'.
  $fields['node-photo_gallery-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'photo_gallery',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'ep_image' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'ep_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'ep_text' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => '0',
        ),
        'featured' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => '1',
        ),
        'featured_format_image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'featured_format_image_title_content_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'image_title_content_link' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'small_image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-photo_gallery-field_action'.
  $fields['node-photo_gallery-field_action'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_action',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'photo_gallery',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'ep_image' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'ep_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'ep_text' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'featured_format_image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'featured_format_image_title_content_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'image_title_content_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'small_image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_action',
      'label' => 'Take action',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-photo_gallery-field_featured'.
  $fields['node-photo_gallery-field_featured'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_featured',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'No',
          1 => 'Yes',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'photo_gallery',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'ep_image' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'ep_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'ep_text' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'featured_format_image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'featured_format_image_title_content_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'image_title_content_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'small_image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_featured',
      'label' => 'Featured',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-photo_gallery-field_photos'.
  $fields['node-photo_gallery-field_photos'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_photos',
      'foreign keys' => array(
        'file_managed' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'mediafield',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'media',
    ),
    'field_instance' => array(
      'bundle' => 'photo_gallery',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'flexslider_fields',
          'settings' => array(
            'flexslider_optionset' => 'wwe',
            'flexslider_reference_img_src' => NULL,
          ),
          'type' => 'flexslider',
          'weight' => '0',
        ),
        'ep_image' => array(
          'label' => 'hidden',
          'module' => 'wwe_video',
          'settings' => array(
            'display_single' => 1,
            'file_view_mode' => 'small_image',
          ),
          'type' => 'wwe_video',
          'weight' => '0',
        ),
        'ep_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'ep_text' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'featured' => array(
          'label' => 'hidden',
          'module' => 'wwe_video',
          'settings' => array(
            'display_single' => 1,
            'file_view_mode' => 'featured_image',
          ),
          'type' => 'wwe_video',
          'weight' => '0',
        ),
        'featured_format_image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'featured_format_image_title_content_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'image_title_content_link' => array(
          'label' => 'hidden',
          'module' => 'flexslider_fields',
          'settings' => array(
            'flexslider_optionset' => 'wwe',
            'flexslider_reference_img_src' => NULL,
          ),
          'type' => 'flexslider',
          'weight' => '0',
        ),
        'small_image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'wwe_video',
          'settings' => array(
            'display_single' => 1,
            'file_view_mode' => 'small_image',
          ),
          'type' => 'wwe_video',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_photos',
      'label' => 'Photos',
      'required' => 0,
      'settings' => array(
        'file_extensions' => 'jpg jpeg gif png',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'media',
        'settings' => array(
          'allowed_schemes' => array(
            'public' => 'public',
          ),
          'allowed_types' => array(
            'image' => 'image',
            'video' => 0,
            0 => 0,
            'audio' => 0,
            'document' => 0,
          ),
          'browser_plugins' => array(
            'media_default--media_browser_1' => 'media_default--media_browser_1',
            'media_default--media_browser_my_files' => 'media_default--media_browser_my_files',
            'upload' => 'upload',
          ),
          'progress_indicator' => 'throbber',
        ),
        'type' => 'media_generic',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-photo_gallery-field_pillars'.
  $fields['node-photo_gallery-field_pillars'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pillars',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'pillars',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'photo_gallery',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'ep_image' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'ep_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'ep_text' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'featured_format_image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'featured_format_image_title_content_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'image_title_content_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'small_image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pillars',
      'label' => 'Pillars',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-photo_gallery-field_tags'.
  $fields['node-photo_gallery-field_tags'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_tags',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'tags',
            'parent' => 0,
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'photo_gallery',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'ep_image' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'ep_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'ep_text' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'featured_format_image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'featured_format_image_title_content_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'image_title_content_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'small_image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_tags',
      'label' => 'Tags',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-video-body'.
  $fields['node-video-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'ep_image' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'ep_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'ep_text' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'featured' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => '1',
        ),
        'featured_format_image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'featured_format_image_title_content_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'image_title_content_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'small_image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => '1',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-video-field_pillars'.
  $fields['node-video-field_pillars'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_pillars',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'pillars',
            'parent' => '0',
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'ep_image' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'ep_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'ep_text' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'featured_format_image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'featured_format_image_title_content_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'image_title_content_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'small_image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_pillars',
      'label' => 'Pillars',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-video-field_tags'.
  $fields['node-video-field_tags'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_tags',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'tags',
            'parent' => 0,
          ),
        ),
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'ep_image' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'ep_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'ep_text' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'featured' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'featured_format_image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'featured_format_image_title_content_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'image_title_content_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'small_image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_tags',
      'label' => 'Tags',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'taxonomy',
        'settings' => array(
          'autocomplete_path' => 'taxonomy/autocomplete',
          'size' => 60,
        ),
        'type' => 'taxonomy_autocomplete',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-video-field_video'.
  $fields['node-video-field_video'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_video',
      'foreign keys' => array(
        'file_managed' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'mediafield',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'media',
    ),
    'field_instance' => array(
      'bundle' => 'video',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'wwe_video',
          'settings' => array(
            'display_single' => 0,
            'file_view_mode' => 'default',
          ),
          'type' => 'wwe_video',
          'weight' => '0',
        ),
        'ep_image' => array(
          'label' => 'hidden',
          'module' => 'wwe_video',
          'settings' => array(
            'display_single' => 1,
            'file_view_mode' => 'small_image',
          ),
          'type' => 'wwe_video',
          'weight' => '0',
        ),
        'ep_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'ep_text' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'featured' => array(
          'label' => 'hidden',
          'module' => 'wwe_video',
          'settings' => array(
            'display_single' => 1,
            'file_view_mode' => 'featured_image',
          ),
          'type' => 'wwe_video',
          'weight' => '0',
        ),
        'featured_format_image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'featured_format_image_title_content_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'image_title_content_link' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'small_image_title_content' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'wwe_video',
          'settings' => array(
            'display_single' => 1,
            'file_view_mode' => 'small_image',
          ),
          'type' => 'wwe_video',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_video',
      'label' => 'Video',
      'required' => 0,
      'settings' => array(
        'file_extensions' => 'jpg jpeg gif png txt doc docx xls xlsx pdf ppt pptx pps ppsx odt ods odp mp3 mov mp4 m4a m4v mpeg avi ogg oga ogv wmv ico',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'media',
        'settings' => array(
          'allowed_schemes' => array(
            'brightcove' => 'brightcove',
            'public' => 0,
            'youtube' => 0,
          ),
          'allowed_types' => array(
            'audio' => 0,
            'brightcove' => 'brightcove',
            'document' => 0,
            'image' => 0,
            'protected' => 0,
            'video' => 0,
          ),
          'browser_plugins' => array(
            'media_default--media_browser_1' => 'media_default--media_browser_1',
            'media_default--media_browser_my_files' => 0,
            'media_internet' => 'media_internet',
            'upload' => 0,
            'youtube' => 0,
          ),
          'progress_indicator' => 'throbber',
        ),
        'type' => 'media_generic',
        'weight' => '2',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Date');
  t('Description');
  t('Duration');
  t('Duration of the movie.  In most cases this will be updated automatically.');
  t('Featured');
  t('Photos');
  t('Pillars');
  t('Tags');
  t('Take action');
  t('Video');

  return $fields;
}
