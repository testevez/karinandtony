<?php 


/**
 * Implements hook_action_info
 */
function taxonomy_photo_gallery_action_info() {
  return array(
    'taxonomy_photo_gallery_file2node_action' => array(
      'type' => 'file',
      'label' => t('Make a node for this file'),
      'configurable' => FALSE,
      //'behavior' => array('changes_property'),
      'triggers' => array('any'),
    ),
    'taxonomy_photo_gallery_assign_action' => array(
      'type' => 'file',
      'label' => t('Assign Photo Group'),
      'configurable' => TRUE,
      //'behavior' => array('changes_property'),
      'triggers' => array('any'),
    ),
    'taxonomy_photo_gallery_unassign_action' => array(
      'type' => 'file',
      'label' => t('Remove All Photo Groups'),
      'configurable' => FALSE,
      //'behavior' => array('changes_property'),
      'triggers' => array('any'),
    ),

    'taxonomy_photo_gallery_assign_node' => array(
      'type' => 'file',
      'label' => t('Assign Photo Gallery'),
      'configurable' => TRUE,
      //'behavior' => array('changes_property'),
      'triggers' => array('any'),
    ),
    'taxonomy_photo_gallery_unassign_node' => array(
      'type' => 'file',
      'label' => t('Remove from All Photo Galleries'),
      'configurable' => FALSE,
      //'behavior' => array('changes_property'),
      'triggers' => array('any'),
    ),
    'taxonomy_photo_gallery_styles_action' => array(
      'type' => 'file',
      'label' => t('Create every possible imagestyle for this image'),
      'configurable' => FALSE,
      'triggers' => array('any'),
    ),
  );
}
/**
 * function for taxonomy_photo_gallery_file2node_action()
 */
function taxonomy_photo_gallery_file2node_action($file, $context) {
  // check to see if there's a kt_photo for this node already

  // make a kt_node for this photo
  $file_info = (array)$file;
  $field_image['und'][] = $file_info;
  $node = array(
    'title' => $file->filename,
    'field_image' => $field_image,
    'type' => 'kt_photo',
    'uid' => $file->uid,
  );
  $node = (object)$node;
  node_save($node);
}
/**
 * Action function to create imagestyles for files
 */
function taxonomy_photo_gallery_styles_action($file, $context) {

  $all_styles = image_styles();

  $source = $file->uri;
  foreach ($all_styles as $style) {
    $destination = image_style_path($style['name'], $source);
    image_style_create_derivative($style, $source, $destination);
  }
 
}
/**
 * Set the Photo Group of a node. 
 * 
 * @param file
 *   A file object provided by the associated trigger.
 * @param $context
 *   Array with the following elements:
 *   - 'Photo Group': the Photo Group to assign
 *     
 */
function taxonomy_photo_gallery_assign_action($file, $context) {

  foreach($context['photo_group'] as $photo_group_tid) {
    if ($photo_group_tid) {
      $term = taxonomy_term_load($photo_group_tid);
      foreach ($file->field_photo_group['und'] as $i => $array) {
        $tid = current($array);
        $tids[$tid] = $tid;
        
      }
      if (!in_array($term->tid, $tids)) {
        $file->field_photo_group['und'][]['tid'] = $term->tid;
        file_save($file);
        drupal_set_message(t('Set image %title to have a Photo Group of %termname.', array('%title' => $file->title, '%termname' => $term->name)));
      }
      else {
        drupal_set_message(t('Image %title already had a Photo Group of %termname.', array('%title' => $file->title, '%termname' => $term->name)));
      }
    }
  }
}
/**
 * Set the Photo Gallery of a node. 
 * 
 * @param file
 *   A file object provided by the associated trigger.
 * @param $context
 *   Array with the following elements:
 *   - 'Photo Group': the Photo Group to assign
 *     
 */
function taxonomy_photo_gallery_assign_node($file, $context) {
  
  $file_id = $file->fid;

  foreach($context['photo_gallery'] as $photo_group_nid) {
    if ($photo_group_nid) {
      $node = node_load($photo_group_nid);
      foreach ($node->field_photos['und'] as $i => $array) {
        $fid = $array['fid'];
        $fids[$fid] = $fid;
        
      }
      if (!in_array($file_id, $fids)) {
        $node->field_photos['und'][] = array('fid' => $file_id);
        drupal_set_message(t('Set image %title to have a Photo Group of %galleryname.', array('%title' => $file->title, '%galleryname' => $node->title)));
        
      }
      else {
        drupal_set_message(t('Image %title already had a Photo Group of %galleryname.', array('%title' => $file->title, '%galleryname' => $node->title)));
      }
      node_save($node);
    }
  }
  
}
/**
 * Generates settings form for taxonomy_photo_gallery_assign_action.
 */
function taxonomy_photo_gallery_assign_action_form($context) {
  $opts = _taxonomy_photo_galleries_list();
  $form['photo_group'] = array(
    '#title' => t('Photo group'),
    '#type' => 'select',
    '#multiple' => TRUE,
    '#options' => $opts,
    '#description' => t('Assigns images to photo groups.'),
  );
  // No more options, return the form.
  return $form;
}
/**
 * Generates settings form for taxonomy_photo_gallery_assign_node.
 */
function taxonomy_photo_gallery_assign_node_form($context) {
  $opts = _taxonomy_photo_galleries_node_list();
  $form['photo_gallery'] = array(
    '#title' => t('Photo Gallery'),
    '#type' => 'select',
    '#multiple' => TRUE,
    '#options' => $opts,
    '#description' => t('Assigns images to photo galleries.'),
  );
  // No more options, return the form.
  return $form;
}


/**
 * Submit handler for taxonomy_photo_gallery_assign_action.
 */
function taxonomy_photo_gallery_assign_action_submit($form, $form_state) {
  return array('photo_group' => $form_state['values']['photo_group']);
}
/**
 * Submit handler for taxonomy_photo_gallery_assign_node.
 */
function taxonomy_photo_gallery_assign_node_submit($form, $form_state) {
  return array('photo_gallery' => $form_state['values']['photo_gallery']);
}

/**
 * Action function for wwe_admin_node_remove_pillars_action.
 * 
 * @param $node
 *   A node object provided by the associated trigger.
 * @param $context
 *     
 */
function taxonomy_photo_gallery_unassign_action($file, $context) {

   unset($file->field_photo_group['und']);
   file_save($file);
   //drupal_set_message(t('Removed all Pillars from @type %title..', array('@type' => node_type_get_name($node), '%title' => $node->title)));
}

