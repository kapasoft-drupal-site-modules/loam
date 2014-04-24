<?php
/**
 * @file
 * esignssquare_com_site_loam_data.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function esignssquare_com_site_loam_data_taxonomy_default_vocabularies() {
  return array(
    'features' => array(
      'name' => 'Features',
      'machine_name' => 'features',
      'description' => 'features about the company or service provide',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
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
