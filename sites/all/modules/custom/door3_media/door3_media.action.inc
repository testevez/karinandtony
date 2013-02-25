<?php 


/**
 * Implements hook_action_info
 */
function door3_media_action_info() {
  return array(
    'door3_media_file_gallery_action_form' => array(
      'type' => 'node',
      'label' => t('Assign Pillar'),
      'configurable' => TRUE,
      'behavior' => array('changes_property'),
      'triggers' => array('node_presave', 'node_insert', 'node_update'),
    ),
    'door3_media_remove_file_gallery_action_form' => array(
      'type' => 'node',
      'label' => t('Remove Pillars'),
      'configurable' => FALSE,
      'behavior' => array('changes_property'),
      'triggers' => array('node_presave', 'node_insert', 'node_update'),
    ),
  );
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
function door3_media_file_gallery_action_form($context) {
  $opts = wwe_general_pillar_options(TRUE);
  $form['gallery'] = array(
    '#title' => t('Pillar'),
    '#type' => 'select',
    '#multiple' => TRUE,
    '#options' => $opts,
    '#description' => t('Assigns files to taxonomy.'),
  );
  // No more options, return the form.
  return $form;
}


/**
 * Submit handler for wwe_admin_node_pillar_action.
 */
function wwe_admin_node_pillar_action_submit($form, $form_state) {
  return array('pillar' => $form_state['values']['pillar']);
}
/**
 * Action function for wwe_admin_node_pillar_action.
 *
 * Set the pillar of a node. 
 * 
 * @param $node
 *   A node object provided by the associated trigger.
 * @param $context
 *   Array with the following elements:
 *   - 'pillar': the pillar to assign
 *     
 */
function wwe_admin_node_pillar_action($node, $context) {
  foreach($context['pillar'] as $pillar_tid) {
    if ($pillar_tid) {
      $pillar_term = taxonomy_term_load($pillar_tid);
      $node->field_pillars['und'][]['tid'] = $pillar_term->tid;
      //$node->promote = NODE_PROMOTED;
      //$node->sticky  = NODE_STICKY;
      //watchdog('action', 'Set @type %title to sticky and promoted by special action for user %username.', array('@type' => node_type_get_name($node), '%title' => $node->title, '%username' => $account->name));
      drupal_set_message(t('Set @type %title to to have a pillar of %pillarname.', array('@type' => node_type_get_name($node), '%title' => $node->title, '%pillarname' => $pillar_term->name)));
    }
  }
}
/**
 * Action function for wwe_admin_node_remove_pillars_action.
 * 
 * @param $node
 *   A node object provided by the associated trigger.
 * @param $context
 *     
 */
function wwe_admin_node_remove_pillars_action($node, $context) {
   unset($node->field_pillars['und']);
   drupal_set_message(t('Removed all Pillars from @type %title..', array('@type' => node_type_get_name($node), '%title' => $node->title)));
}



