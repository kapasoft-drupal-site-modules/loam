<?php
/**
 * @file
 * designssquare_com_site_loam_structure.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function designssquare_com_site_loam_structure_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_company_description';
  $strongarm->value = 'Latviešu Organizāciju Apvieniba Minesotā (LOAM) apvieno 14 latviešu organizācijas kopējam kultūras un labdarības darbam. LOAM ir bezpeļņas organizācija ar 501(3)c statusu un ir atbrīvota no nodokļiem.';
  $export['builder_company_description'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_company_title';
  $strongarm->value = 'LOAM organizācija';
  $export['builder_company_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_footer_logo';
  $strongarm->value = 'Loam<span class="lbut">.</span>';
  $export['builder_footer_logo'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_icon_eight';
  $strongarm->value = '<div class="icon_da"></div>';
  $export['builder_social_icon_eight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_icon_eleven';
  $strongarm->value = '<div class="icon_envato"></div>';
  $export['builder_social_icon_eleven'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_icon_five';
  $strongarm->value = '<div class="icon_t"></div>';
  $export['builder_social_icon_five'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_icon_four';
  $strongarm->value = '<div class="icon_pi"></div>';
  $export['builder_social_icon_four'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_icon_fourteen';
  $strongarm->value = '<div class="icon_myspace"></div>';
  $export['builder_social_icon_fourteen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_icon_nine';
  $strongarm->value = '<div class="icon_skype"></div>';
  $export['builder_social_icon_nine'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_icon_one';
  $strongarm->value = '<div class="icon_flickr"></div>';
  $export['builder_social_icon_one'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_icon_seven';
  $strongarm->value = '<div class="icon_in"></div>';
  $export['builder_social_icon_seven'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_icon_six';
  $strongarm->value = '<div class="icon_youtube"></div>';
  $export['builder_social_icon_six'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_icon_ten';
  $strongarm->value = '<div class="icon_icq"></div>';
  $export['builder_social_icon_ten'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_icon_thirteen';
  $strongarm->value = '<div class="icon_bing"></div>';
  $export['builder_social_icon_thirteen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_icon_three';
  $strongarm->value = '<div class="icon_facebook"></div>';
  $export['builder_social_icon_three'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_icon_twelve';
  $strongarm->value = '<div class="icon_forrst"></div>';
  $export['builder_social_icon_twelve'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_icon_two';
  $strongarm->value = '<div class="icon_google"></div>';
  $export['builder_social_icon_two'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_url_eight';
  $strongarm->value = 'http://deviantart.com/';
  $export['builder_social_url_eight'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_url_eleven';
  $strongarm->value = 'http://envato.com';
  $export['builder_social_url_eleven'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_url_five';
  $strongarm->value = 'http://twitter.com/';
  $export['builder_social_url_five'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_url_four';
  $strongarm->value = 'http://pinterest.com/';
  $export['builder_social_url_four'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_url_fourteen';
  $strongarm->value = 'http://myspace.com';
  $export['builder_social_url_fourteen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_url_nine';
  $strongarm->value = 'http://www.skype.com/';
  $export['builder_social_url_nine'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_url_one';
  $strongarm->value = 'http://flickr.com/';
  $export['builder_social_url_one'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_url_seven';
  $strongarm->value = 'http://linkedin.com/';
  $export['builder_social_url_seven'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_url_six';
  $strongarm->value = 'http://youtube.com/';
  $export['builder_social_url_six'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_url_ten';
  $strongarm->value = 'http://www.icq.com';
  $export['builder_social_url_ten'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_url_thirteen';
  $strongarm->value = 'http://www.bing.com';
  $export['builder_social_url_thirteen'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_url_three';
  $strongarm->value = 'http://facebook.com/';
  $export['builder_social_url_three'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_url_twelve';
  $strongarm->value = 'http://forrst.com';
  $export['builder_social_url_twelve'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_social_url_two';
  $strongarm->value = 'http://plus.google.com/';
  $export['builder_social_url_two'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_twitter_invite';
  $strongarm->value = 'Uzzini visu, kas notiek par cilvēkiem un organizācijām tev svarīgas
';
  $export['builder_twitter_invite'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'builder_twitter_title';
  $strongarm->value = 'LOAM Twitter Ziņotājs';
  $export['builder_twitter_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'call_action_button';
  $strongarm->value = 'Sazinies ar mums!';
  $export['call_action_button'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'call_action_content';
  $strongarm->value = 'Ja vēlies atbalstīt LOAM vai kādu no tas organizācijām
';
  $export['call_action_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'call_action_title';
  $strongarm->value = 'LOAM ir bezpeļņas organizācija, kas pastāv uz ziedojumiem un cilvēku ziedotā laika.
                        ';
  $export['call_action_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'call_action_url';
  $strongarm->value = '#';
  $export['call_action_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'catchy_phrase';
  $strongarm->value = '<h2 style="text-align: center;"><span class="colored"> "Darām to, kas darāms." </span>ir LOAM slogans</h2>';
  $export['catchy_phrase'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contact_info_address';
  $strongarm->value = '9930 124th Minneapolis, MN';
  $export['contact_info_address'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contact_info_email';
  $strongarm->value = 'contact@loam.lcom';
  $export['contact_info_email'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contact_info_phone';
  $strongarm->value = '+1 800 2000 600';
  $export['contact_info_phone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'contact_info_title';
  $strongarm->value = 'Kontaktu Informācija';
  $export['contact_info_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'copy_rights_message';
  $strongarm->value = '<span class="copyright">Copyright 2013 LOAM. Web design by <a href="http://kapasoft.com">KapaSoft Web Solutions</a>
';
  $export['copy_rights_message'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__service';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'path' => array(
          'weight' => '30',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__service_page';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '1',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__service_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'footer_logo_image_fid';
  $strongarm->value = '22';
  $export['footer_logo_image_fid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_service';
  $strongarm->value = array();
  $export['node_options_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_service_page';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_service_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_service';
  $strongarm->value = '1';
  $export['node_preview_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_service_page';
  $strongarm->value = '1';
  $export['node_preview_service_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_service';
  $strongarm->value = 0;
  $export['node_submitted_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_service_page';
  $strongarm->value = 0;
  $export['node_submitted_service_page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pay_attention_call_action';
  $strongarm->value = 'Atsaucies tautieti!';
  $export['pay_attention_call_action'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pay_attention_content';
  $strongarm->value = 'Jaunajā LOAM portālā jums ir iespēja informēt par notiekošo par svarīgāko. Tas ir vienkārši. Ielagojies <a href="/user" target="_blank">šeit</a> un atstāj savu rakstu. Mēs visi būsim ieguvēji ';
  $export['pay_attention_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pay_attention_title';
  $strongarm->value = 'Paziņojums';
  $export['pay_attention_title'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'LOAM';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_slogan';
  $strongarm->value = 'apvienot latviešu organizācijas kopējam kultūras and labdarības darbam';
  $export['site_slogan'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'twitter_invite';
  $strongarm->value = 'Find out what"s happening, right now, with the people and organizations you care about.';
  $export['twitter_invite'] = $strongarm;

  return $export;
}
