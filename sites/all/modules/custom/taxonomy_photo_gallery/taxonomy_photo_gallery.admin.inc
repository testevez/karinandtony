<?php 


/**
 * Form callback function for module's adminsitration.
 */
function taxonomy_photo_gallery_admin_form($form, &$form_state) {
  $form['taxonomy_photo_gallery_path'] = array(
  	'#type' => 'textfield',
  	'#title' => t("The url of the photos landing page"),
  	'#description' => t("Please override the default if needed."),
    '#default_value' => variable_get('taxonomy_photo_gallery_path', 'photos'),
  	//'#prefix' => '<div id="replace_textfield_div">',
  	//'#suffix' => '</div>',
  );
  return system_settings_form($form);
}