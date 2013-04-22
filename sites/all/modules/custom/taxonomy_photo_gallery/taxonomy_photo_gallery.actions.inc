<?php 


/**
 * Implements hook_action_info
 */
function taxonomy_photo_gallery_action_info() {
  return array(
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
  );
}
/**
 * Action function for wwe_admin_node_pillar_action.
 *
 * Set the pillar of a node. 
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
 * Generates settings form for wwe_admin_node_pillar_action.
 *
 * @param $context
 *   An array of options of this action (in case it is being edited)
 *
 * @return array $form
 *
 * @see action_example_action_info()
 */
function taxonomy_photo_gallery_assign_action_form($context) {
  $opts = _taxonomy_photo_galleries_list();
  $form['photo_group'] = array(
    '#title' => t('Photo group'),
    '#type' => 'select',
    '#multiple' => TRUE,
    '#options' => $opts,
    '#description' => t('Assigns images to photo groups / galleries.'),
  );
  // No more options, return the form.
  return $form;
}


/**
 * Submit handler for wwe_admin_node_pillar_action.
 */
function taxonomy_photo_gallery_assign_action_submit($form, $form_state) {
  return array('photo_group' => $form_state['values']['photo_group']);
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

