<?php

/**
 * @file
 * Supports file operations including View, Edit, and Delete.
 */

/**
 * Menu callback; view a single file entity.
 */
function karin_tony_file_entity_view_page($file) {
  // @todo Implement granular editorial access: http://drupal.org/node/696970.
  //   In the meantime, protect information about private files from being
  //   discovered by unprivileged users. File IDs are autoincrement, so one can
  //   attempt discovery by trying to access different media/ID paths. See also
  //   media_browser_list(). This logic potentially belongs within
  //   media_access(), but that would require extending that function's
  //   signature to accept a $file paramter, and this is temporary code anyway.
  if (!user_access('administer files') && (file_uri_scheme($file->uri) === 'private')) {
    return MENU_ACCESS_DENIED;
  }
  
  return theme('kt_detail', array('file' => $file));
  //print  drupal_render($build);
}

