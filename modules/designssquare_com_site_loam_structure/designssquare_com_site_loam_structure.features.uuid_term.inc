<?php
/**
 * @file
 * designssquare_com_site_loam_structure.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function designssquare_com_site_loam_structure_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => 'none',
    'description' => 'there is no sidebar',
    'format' => 'filtered_html',
    'weight' => 1,
    'uuid' => '3656f50c-c9b3-476d-b225-cf52f279949a',
    'vocabulary_machine_name' => 'post_sidebar',
  );
  $terms[] = array(
    'name' => 'Audios',
    'description' => 'All Audio Posts',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '3cef33ef-6ecf-4f0e-bb4b-e66ab7a2b122',
    'vocabulary_machine_name' => 'blog_categories',
  );
  $terms[] = array(
    'name' => 'Small',
    'description' => 'post with small image or video',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '4724e570-b398-44db-bc53-db323445d51c',
    'vocabulary_machine_name' => 'post_format',
  );
  $terms[] = array(
    'name' => 'Text Posts',
    'description' => 'All Text Posts',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '553f1ea7-4573-4bab-8cb1-b8810e30e283',
    'vocabulary_machine_name' => 'blog_categories',
  );
  $terms[] = array(
    'name' => 'left',
    'description' => 'there is sidebar on left',
    'format' => 'filtered_html',
    'weight' => 2,
    'uuid' => '6dbf4c34-4e34-4ed7-aaa3-f4991036be13',
    'vocabulary_machine_name' => 'post_sidebar',
  );
  $terms[] = array(
    'name' => 'Big',
    'description' => 'post with large image or video',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '770c84f6-5cf0-4310-b306-66f4c0037afc',
    'vocabulary_machine_name' => 'post_format',
  );
  $terms[] = array(
    'name' => 'Image Posts',
    'description' => 'All Image Posts',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => '8aeb7d0f-2eaa-477b-9320-87c89191c6a4',
    'vocabulary_machine_name' => 'blog_categories',
  );
  $terms[] = array(
    'name' => 'Videos',
    'description' => 'All Video Posts',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'bbe940de-d14e-4f41-8eff-eccba132453a',
    'vocabulary_machine_name' => 'blog_categories',
  );
  $terms[] = array(
    'name' => 'right',
    'description' => 'there is sidebar on right',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'bdfd197f-6e7f-489e-94cc-cfd7ea290a70',
    'vocabulary_machine_name' => 'post_sidebar',
  );
  $terms[] = array(
    'name' => 'Uncategorized',
    'description' => 'All Uncategorized Posts',
    'format' => 'full_html',
    'weight' => 0,
    'uuid' => 'c91c0033-2fb4-4bbd-b74c-2b6f381b3f7d',
    'vocabulary_machine_name' => 'blog_categories',
  );
  return $terms;
}
