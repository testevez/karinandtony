<?php 


/**
 * Implements hook_action_info
 */
function taxonomy_photo_gallery_action_info() {
  return array(
      /*
    'taxonomy_photo_gallery_file2node_action' => array(
      'type' => 'file',
      'label' => t('Make a node for this file'),
      'configurable' => FALSE,
      //'behavior' => array('changes_property'),
      'triggers' => array('any'),
    ),
      */
    'taxonomy_photo_gallery_assign_action' => array(
      'type' => 'file',
      'label' => t('Assign Photo Category'),
      'configurable' => TRUE,
      //'behavior' => array('changes_property'),
      'triggers' => array('any'),
    ),
    'taxonomy_photo_gallery_unassign_action' => array(
      'type' => 'file',
      'label' => t('Remove All Photo Categories'),
      'configurable' => FALSE,
      //'behavior' => array('changes_property'),
      'triggers' => array('any'),
    ),
    // end user
    'taxonomy_photo_gallery_assign_node_eu' => array(
      'type' => 'file',
      'label' => t('Assign to my Photo Gallery(s)'),
      'configurable' => TRUE,
      'triggers' => array('any'),
      ),
    // admin
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
      foreach ($node->field_flexslider_example_slidesh[LANGUAGE_NONE] as $i => $array) {
        $fid = $array['fid'];
        $fids[$fid] = $fid;
      }
      if (!in_array($file_id, $fids)) {
        $node->field_flexslider_example_slidesh[LANGUAGE_NONE][] = array('fid' => $file_id);
        drupal_set_message(t('Set image %title to have a Gallery of %galleryname.', array('%title' => $file->title, '%galleryname' => $node->title)));
      }
      else {
        drupal_set_message(t('Image %title already had a Gallery of %galleryname.', array('%title' => $file->title, '%galleryname' => $node->title)));
      }
      node_save($node);
    }
  }
}
function taxonomy_photo_gallery_assign_node_eu($file, $context) {
	/*
	if ($context['photo_gallery_new']) {
		global $user;
		$node = new stdClass();
		$node->type = ' flexslider_example';
		$node->status = 1;
		$node->uid = $user->uid;
		$node->title = $context['photo_gallery_new'];
		$node->promote = 1;
		$node->created = date();
		$node->timestamp = date();
		$node->changed = date();
		$node->sticky = 0;
		$node->format = 3;
		$node->language = 'en';
		$node->teaser = '';
		$node->body = '';
		$node->revision = 0;
		node_save($node);
	}
	*/
    $file_id = $file->fid;
    foreach($context['photo_gallery'] as $photo_group_nid) {
        if ($photo_group_nid) {
            $node = node_load($photo_group_nid);
            foreach ($node->field_flexslider_example_slidesh[LANGUAGE_NONE] as $i => $array) {
                $fid = $array['fid'];
                $fids[$fid] = $fid;
            }
            if (!in_array($file_id, $fids)) {
                $node->field_flexslider_example_slidesh[LANGUAGE_NONE][] = array('fid' => $file_id);
                drupal_set_message(t('Set image %title to have a Gallery of %galleryname.', array('%title' => $file->title, '%galleryname' => $node->title)));
            }
            else {
                drupal_set_message(t('Image %title already had a Gallery of %galleryname.', array('%title' => $file->title, '%galleryname' => $node->title)));
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
function taxonomy_photo_gallery_assign_node_eu_form($context) {
    $opts = _taxonomy_photo_galleries_node_list();
    $form['photo_gallery'] = array(
        '#title' => t('Add to an existing Photo Gallery'),
        '#type' => 'select',
        '#multiple' => TRUE,
        '#options' => $opts,
        '#description' => t('Assigns images to photo galleries.'),
    );
    /*
    $form['photo_gallery_new'] = array(
        '#title' => t('Add to a new Photo Gallery'),
        '#prefix' => 'Name of new Gallery:',
        '#type' => 'textfield',
    	'#description' => t('Dont put anything in this field if you want to put the photos into an existing gallery.'),
    );
    */
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
function taxonomy_photo_gallery_assign_node_eu_submit($form, $form_state) {
    return array(
    		'photo_gallery' => $form_state['values']['photo_gallery'],
    		'photo_gallery_new' => $form_state['values']['photo_gallery_new']
    );
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

