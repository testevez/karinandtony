<?php
/**
 * @file
 * karintony.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function karintony_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'karin_and_tony_frontpage';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'file_managed';
  $view->human_name = 'Karin and Tony frontpage';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '40';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'views_fluidgrid';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: File: Name */
  $handler->display->display_options['fields']['filename']['id'] = 'filename';
  $handler->display->display_options['fields']['filename']['table'] = 'file_managed';
  $handler->display->display_options['fields']['filename']['field'] = 'filename';
  $handler->display->display_options['fields']['filename']['label'] = '';
  $handler->display->display_options['fields']['filename']['exclude'] = TRUE;
  $handler->display->display_options['fields']['filename']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['filename']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['filename']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['filename']['link_to_file'] = TRUE;
  /* Field: File: Rendered */
  $handler->display->display_options['fields']['rendered']['id'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['table'] = 'file_managed';
  $handler->display->display_options['fields']['rendered']['field'] = 'rendered';
  $handler->display->display_options['fields']['rendered']['label'] = '';
  $handler->display->display_options['fields']['rendered']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['rendered']['file_view_mode'] = 'masonry';
  /* Filter criterion: File: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'file_managed';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'image' => 'image',
  );
  /* Filter criterion: File: Photo group (field_photo_group) */
  $handler->display->display_options['filters']['field_photo_group_tid']['id'] = 'field_photo_group_tid';
  $handler->display->display_options['filters']['field_photo_group_tid']['table'] = 'field_data_field_photo_group';
  $handler->display->display_options['filters']['field_photo_group_tid']['field'] = 'field_photo_group_tid';
  $handler->display->display_options['filters']['field_photo_group_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_photo_group_tid']['expose']['operator_id'] = 'field_photo_group_tid_op';
  $handler->display->display_options['filters']['field_photo_group_tid']['expose']['label'] = 'Photo group (field_photo_group)';
  $handler->display->display_options['filters']['field_photo_group_tid']['expose']['operator'] = 'field_photo_group_tid_op';
  $handler->display->display_options['filters']['field_photo_group_tid']['expose']['identifier'] = 'field_photo_group_tid';
  $handler->display->display_options['filters']['field_photo_group_tid']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_photo_group_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_photo_group_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_photo_group_tid']['vocabulary'] = 'photo_group';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'karin-and-tony-frontpage';
  $export['karin_and_tony_frontpage'] = $view;

  return $export;
}
