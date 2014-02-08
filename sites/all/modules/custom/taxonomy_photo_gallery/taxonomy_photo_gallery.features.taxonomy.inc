<?php
/**
 * @file
 * taxonomy_photo_gallery.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function taxonomy_photo_gallery_taxonomy_default_vocabularies() {
  return array(
    'photo_group' => array(
      'name' => 'Photo Group',
      'machine_name' => 'photo_group',
      'description' => 'Organizes photos into small groups, typically for use as photo galleries',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
