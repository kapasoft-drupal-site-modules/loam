<?php
/**
 * @file
 * esignssquare_com_site_loam_data.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function esignssquare_com_site_loam_data_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => 'Daugavas Vanagi',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '563450ce-e7eb-447c-a4fd-61c9d77ffc4b',
  'type' => 'service',
  'language' => 'und',
  'created' => 1386005911,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0013ffce-6e5b-4d65-b24b-60beba7adf00',
  'revision_uid' => 1,
  'field_service_description' => array(
    'und' => array(
      0 => array(
        'value' => 'Daugavas Vanagi iestājas par šo un to mazs aprkasts seko',
        'format' => NULL,
        'safe_value' => 'Daugavas Vanagi iestājas par šo un to mazs aprkasts seko',
      ),
    ),
  ),
  'field_service_icon' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'admin.png',
        'uri' => 'public://admin_1.png',
        'filemime' => 'image/png',
        'filesize' => 2628,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '7b7e6242-0cab-4365-8ab4-3ebdc501fbac',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 50,
        'height' => 50,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/admin_1.png',
      ),
    ),
  ),
  'field_content_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => '8.jpg',
        'uri' => 'public://8_8.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 11519,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '909664ad-aec7-4d14-bb1c-b816dc16ffa0',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 770,
        'height' => 533,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/8_8.jpg',
      ),
    ),
  ),
  'field_content_par' => array(
    'und' => array(
      0 => array(
        'value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.
',
        'format' => NULL,
        'safe_value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.
',
      ),
      1 => array(
        'value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.',
        'format' => NULL,
        'safe_value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.',
      ),
      2 => array(
        'value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
        'format' => NULL,
        'safe_value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
      ),
    ),
  ),
  'field_description' => array(
    'und' => array(
      0 => array(
        'value' => '<span class="colored">Daugavas Vanagi : </span>mazs ievads par organizāciju nāk šeit',
        'format' => NULL,
        'safe_value' => '&lt;span class=&quot;colored&quot;&gt;Daugavas Vanagi : &lt;/span&gt;mazs ievads par organizāciju nāk šeit',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-02 17:38:31 +0000',
  'alias_url' => 'content/daugavas-vanagi',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'MSP Draudze',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '4f57c94e-3f8b-4a8b-af01-9bcdac14e63d',
  'type' => 'service',
  'language' => 'und',
  'created' => 1384880288,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0ddafa3b-726e-4f18-90ed-2716443db918',
  'revision_uid' => 1,
  'field_service_description' => array(
    'und' => array(
      0 => array(
        'value' => 'MSP Draudze ir par to un šo. Šeit seko mazs ievads par MSP Draudze un tās norisēm citām interesantām lietām',
        'format' => NULL,
        'safe_value' => 'MSP Draudze ir par to un šo. Šeit seko mazs ievads par MSP Draudze un tās norisēm citām interesantām lietām',
      ),
    ),
  ),
  'field_service_icon' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'admin.png',
        'uri' => 'public://admin_0.png',
        'filemime' => 'image/png',
        'filesize' => 2628,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '97504721-8c07-4514-b78a-36a169547228',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 50,
        'height' => 50,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/admin_0.png',
      ),
    ),
  ),
  'field_content_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => '7.jpg',
        'uri' => 'public://7_1.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 11519,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'bc63e368-1505-4a1e-a8b4-45f02693734b',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 770,
        'height' => 533,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/7_1.jpg',
      ),
    ),
  ),
  'field_content_par' => array(
    'und' => array(
      0 => array(
        'value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.
',
        'format' => NULL,
        'safe_value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.
',
      ),
      1 => array(
        'value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.',
        'format' => NULL,
        'safe_value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.',
      ),
      2 => array(
        'value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
        'format' => NULL,
        'safe_value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
      ),
    ),
  ),
  'field_description' => array(
    'und' => array(
      0 => array(
        'value' => '<span>MSP Draudze : </span> Mazs apraksts par organizāciju nāk šeit',
        'format' => NULL,
        'safe_value' => '&lt;span&gt;MSP Draudze : &lt;/span&gt; Mazs apraksts par organizāciju nāk šeit',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-11-19 16:58:08 +0000',
  'alias_url' => 'content/msp-draudze',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Emigrants from Latvia to send record $787 million to homeland',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '5599ba6a-33fc-4067-a634-39dd2862c17a',
  'type' => 'blog',
  'language' => 'und',
  'created' => 1387296010,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '117200b0-e20b-4949-8521-0b1fc6c55193',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Remittances to Latvia, payments made by emigrants back to their home country, are expected to reach a record USD 787 million this year, according to data compiled by the World Bank and released in October.

That would be a 7.8 percent increase from 2012, when emigrants from Latvia sent back about USD 730 million. Large numbers of emigrants from Latvia are found in a number of countries, but chiefly in the United Kingdom and Ireland, as well as the Russian Federation, the United States, Germany, Israel, Canada, Australia, Lithuania and Sweden, according to the bank’s Migration and Remittances Factbook 2011.

The amount of remittances to Latvia has increased steadily since 1996, the first year the World Bank has data about the country. Only in 2009 did remittances temporarily retreat.

This year the remittances are expected to account for 2.6 percent of Latvia’s Gross Domestic Product, according to the World Bank.

Remittances from immigrants in Latvia back to their home countries are estimated to reach USD 64 million by the end of this year, an increase of 36 percent from 2012.

Emigrants from Lithuania will send back more than USD 1.8 billion in remittances this year, or 3.6 percent of that country’s GDP, the World Bank data show. Meanwhile, emigrants from Estonia are expected to send back USD 451 million, or 1.8 percent of GDP.

The migration and remittances data are available from the World Bank’s website. 

ARTICLE source <a href="http://latviansonline.com/blogs/article/8637/" target="_blank">Latvians Online</a> ',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Remittances to Latvia, payments made by emigrants back to their home country, are expected to reach a record USD 787 million this year, according to data compiled by the World Bank and released in October.</p>
<p>That would be a 7.8 percent increase from 2012, when emigrants from Latvia sent back about USD 730 million. Large numbers of emigrants from Latvia are found in a number of countries, but chiefly in the United Kingdom and Ireland, as well as the Russian Federation, the United States, Germany, Israel, Canada, Australia, Lithuania and Sweden, according to the bank’s Migration and Remittances Factbook 2011.</p>
<p>The amount of remittances to Latvia has increased steadily since 1996, the first year the World Bank has data about the country. Only in 2009 did remittances temporarily retreat.</p>
<p>This year the remittances are expected to account for 2.6 percent of Latvia’s Gross Domestic Product, according to the World Bank.</p>
<p>Remittances from immigrants in Latvia back to their home countries are estimated to reach USD 64 million by the end of this year, an increase of 36 percent from 2012.</p>
<p>Emigrants from Lithuania will send back more than USD 1.8 billion in remittances this year, or 3.6 percent of that country’s GDP, the World Bank data show. Meanwhile, emigrants from Estonia are expected to send back USD 451 million, or 1.8 percent of GDP.</p>
<p>The migration and remittances data are available from the World Bank’s website. </p>
<p>ARTICLE source <a href="http://latviansonline.com/blogs/article/8637/" target="_blank">Latvians Online</a> </p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_audio' => array(),
  'field_blog_entry_tag' => array(),
  'field_blog_img' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => '131117remittances.jpg',
        'uri' => 'public://blog/131117remittances.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 65123,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '474f679e-371d-49c0-910d-beec01838ce3',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 880,
        'height' => 461,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/131117remittances.jpg',
      ),
    ),
  ),
  'field_blog_sidebar' => array(),
  'field_category' => array(),
  'field_posts_format' => array(),
  'field_video_file' => array(),
  'field_video_id' => array(),
  'field_sidebar_positioning' => array(
    'und' => array(
      0 => array(
        'tid' => 43,
        'uuid' => '8f130afd-c0d6-4493-aabc-7c87e37fe0ac',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Post',
      1 => 'sioct:BlogPost',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-17 16:00:10 +0000',
  'alias_url' => 'content/emigrants-latvia-send-record-787-million-homeland',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Sveicinati!',
  'log' => '',
  'status' => 0,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'b3c9c877-94b3-4999-83f0-f8b03b7c9fb5',
  'type' => 'welcome',
  'language' => 'und',
  'created' => 1384809248,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2544d1d1-e6c7-4bb9-b030-7b1713ece915',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div style="background-color: rgb(58, 58, 58); padding: 10px; margin-bottom: 20px;">
                        <h1 style="color: rgb(255, 255, 255) !important; margin-bottom: 3px !important;"><b>Sveicināti!</b></h1>
                        <h5 style="color: rgb(255, 255, 255);">Informatīvs portāls par latviešu organizācijām, par pašlaik aktuālo un notiekošo Minnesotā</h5>
                    </div>

                    <p>Latviešu Organizāciju Apvieniba Minesotā (LOAM) apvieno 14 latviešu organizācijas kopējam kultūras un labdarības darbam</p>
                    <p>
                        <span class="pun"><em>LOAM darbības lokā ietilpst galvenokārt uzdevumi, ko nespēj vai nevēlas veikt atsevišķas latviešu organizācijas. Šajā sakaribā esam izvelējušies organizācijas mudi: "Darām to, kas darāms."</em></span>
                    </p>

                    <hr class="visible-desktop"></hr>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<div style="background-color: rgb(58, 58, 58); padding: 10px; margin-bottom: 20px;">
<h1 style="color: rgb(255, 255, 255) !important; margin-bottom: 3px !important;"><b>Sveicināti!</b></h1>
<h5 style="color: rgb(255, 255, 255);">Informatīvs portāls par latviešu organizācijām, par pašlaik aktuālo un notiekošo Minnesotā</h5>
</div>
<p>Latviešu Organizāciju Apvieniba Minesotā (LOAM) apvieno 14 latviešu organizācijas kopējam kultūras un labdarības darbam</p>
<p>
                        <span class="pun"><em>LOAM darbības lokā ietilpst galvenokārt uzdevumi, ko nespēj vai nevēlas veikt atsevišķas latviešu organizācijas. Šajā sakaribā esam izvelējušies organizācijas mudi: "Darām to, kas darāms."</em></span>
                    </p>
<hr class="visible-desktop" />',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_features' => array(
    'und' => array(
      0 => array(
        'tid' => 33,
        'uuid' => '27d927a9-6ea8-4df5-bc8f-4f60e586a4a1',
      ),
      1 => array(
        'tid' => 35,
        'uuid' => '75efd7d9-b71e-4ba1-bd65-ea3abcf92a4f',
      ),
      2 => array(
        'tid' => 38,
        'uuid' => '9ea8fdba-6165-4846-b47b-fe6a0e61010c',
      ),
      3 => array(
        'tid' => 41,
        'uuid' => 'fe40396c-8b2b-4c3d-a510-b139cda8970c',
      ),
      4 => array(
        'tid' => 36,
        'uuid' => '7c69ea01-9c90-4b88-84cd-f11760e3ff66',
      ),
      5 => array(
        'tid' => 34,
        'uuid' => '5038f9aa-87db-426e-86f2-319c64ea1f80',
      ),
      6 => array(
        'tid' => 40,
        'uuid' => 'dfd9df67-f88a-46e3-94bb-47cf29e29a78',
      ),
      7 => array(
        'tid' => 31,
        'uuid' => '2395718f-175f-4676-8837-9e3d17a9a4b4',
      ),
      8 => array(
        'tid' => 32,
        'uuid' => '23cd8c51-5f47-4dc9-8c6f-d3f3050e1579',
      ),
      9 => array(
        'tid' => 39,
        'uuid' => 'ba4da224-065c-4098-9ce3-664ac11eed7d',
      ),
      10 => array(
        'tid' => 37,
        'uuid' => '85a1fb3f-d3af-49c6-b86c-f17cd22b4430',
      ),
      11 => array(
        'tid' => 29,
        'uuid' => '1ca10335-3045-4d37-9f14-7953469c16be',
      ),
      12 => array(
        'tid' => 28,
        'uuid' => '10caebcb-ed8c-4b3f-9dcb-875bd61220b2',
      ),
      13 => array(
        'tid' => 30,
        'uuid' => '21b4ce7e-6d45-44fa-b8ff-914c6e3c5500',
      ),
    ),
  ),
  'field_features_title' => array(
    'und' => array(
      0 => array(
        'value' => 'LOAM organizācijas:',
        'format' => NULL,
        'safe_value' => 'LOAM organizācijas:',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-11-18 21:14:08 +0000',
  'alias_url' => 'content/sveicinati',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Par LOAM',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'b19bd880-8eed-4ab6-b6b9-80b2e79839b2',
  'type' => 'about',
  'language' => 'und',
  'created' => 1397345889,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2ba8cec9-f9fd-4361-ad3d-c7e972746721',
  'revision_uid' => 1,
  'field_about_paragraph' => array(
    'und' => array(
      0 => array(
        'value' => 'Te varētu bū† mazliet par LOAM vēsturi, par tās faktiem un citām interestām lietām. Te varētu bū† mazliet par LOAM vēsturi, par tās faktiem un citām interestām lietām. ',
        'format' => NULL,
        'safe_value' => 'Te varētu bū† mazliet par LOAM vēsturi, par tās faktiem un citām interestām lietām. Te varētu bū† mazliet par LOAM vēsturi, par tās faktiem un citām interestām lietām. ',
      ),
      1 => array(
        'value' => '<i>Te varētu bū† mazliet par LOAM vēsturi, par tās faktiem un citām interestām lietām</i>',
        'format' => NULL,
        'safe_value' => '&lt;i&gt;Te varētu bū† mazliet par LOAM vēsturi, par tās faktiem un citām interestām lietām&lt;/i&gt;',
      ),
      2 => array(
        'value' => '<b>svarīgākais var tikt izcelts</b> Te varētu bū† mazliet par LOAM vēsturi, par tās faktiem un citām interestām lietām.  Te varētu bū† mazliet par LOAM vēsturi, par tās faktiem un citām interestām lietām. Te varētu bū† mazliet par LOAM vēsturi, par tās faktiem un citām interestām lietām. ',
        'format' => NULL,
        'safe_value' => '&lt;b&gt;svarīgākais var tikt izcelts&lt;/b&gt; Te varētu bū† mazliet par LOAM vēsturi, par tās faktiem un citām interestām lietām.  Te varētu bū† mazliet par LOAM vēsturi, par tās faktiem un citām interestām lietām. Te varētu bū† mazliet par LOAM vēsturi, par tās faktiem un citām interestām lietām. ',
      ),
    ),
  ),
  'field_about_photo' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'Latvia-currency.jpg',
        'uri' => 'public://Latvia-currency_0.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 371034,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'c454a566-6d4d-45a8-9251-c1b4db596e7e',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1808,
        'height' => 1808,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/Latvia-currency_0.jpg',
      ),
    ),
  ),
  'field_broshure' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'Westminster-20130918-00335.jpg',
        'uri' => 'public://Westminster-20130918-00335_0.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 216277,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'b1e69355-bf4c-43f7-b0ea-7dd60f26265c',
        'rdf_mapping' => array(),
        'display' => 1,
        'description' => '',
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/Westminster-20130918-00335_0.jpg',
      ),
    ),
  ),
  'field_broshure_button_text' => array(
    'und' => array(
      0 => array(
        'value' => '<i class="icon-download-alt"></i>Nolādē Aprakstu PDF ',
        'format' => NULL,
        'safe_value' => '&lt;i class=&quot;icon-download-alt&quot;&gt;&lt;/i&gt;Nolādē Aprakstu PDF ',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-04-12 23:38:09 +0000',
  'alias_url' => 'about',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Jautrība Sit Augstu Vilni Dvīņu Pilsētā',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '1473676f-8abb-4a2f-aec3-43b9ada32f68',
  'type' => 'gallery_four',
  'language' => 'und',
  'created' => 1386044573,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3180b19d-7822-4669-a398-7775bc3a5a75',
  'revision_uid' => 1,
  'field_description' => array(
    'und' => array(
      0 => array(
        'value' => '<span class="colored">Raibais Vakars:</span>  Jautrība Sit Augstu Vilni Dvīņu Pilsētā',
        'format' => NULL,
        'safe_value' => '&lt;span class=&quot;colored&quot;&gt;Raibais Vakars:&lt;/span&gt;  Jautrība Sit Augstu Vilni Dvīņu Pilsētā',
      ),
    ),
  ),
  'field_featured_photo' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020113.JPG',
        'uri' => 'public://gallery/P1020113_0.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 135747,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'fdeaf6cf-2443-43e6-98e2-5e00736126d0',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020113_0.JPG',
      ),
    ),
  ),
  'field_gallery_introduction' => array(
    'und' => array(
      0 => array(
        'value' => 'Šeit nāk mazs apraksts par foto galeriju',
        'format' => NULL,
        'safe_value' => 'Šeit nāk mazs apraksts par foto galeriju',
      ),
    ),
  ),
  'field_photo' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020095.JPG',
        'uri' => 'public://gallery/P1020095.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 164717,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'abb83cab-d587-4219-be45-c5f956c4bfa1',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020095.JPG',
      ),
      1 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020096.JPG',
        'uri' => 'public://gallery/P1020096.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 216073,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '7af71bea-e6a8-4095-b462-b10bd5bed150',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020096.JPG',
      ),
      2 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020102.JPG',
        'uri' => 'public://gallery/P1020102.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 202479,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'e057f326-64a9-4099-8bc3-d4604765d584',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020102.JPG',
      ),
      3 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020103.JPG',
        'uri' => 'public://gallery/P1020103.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 155509,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '232467ba-fd96-41c1-898e-1ecd398507e6',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020103.JPG',
      ),
      4 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020104.JPG',
        'uri' => 'public://gallery/P1020104.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 156178,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '5a1f3418-06d2-4ccd-9ed6-220f26049515',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020104.JPG',
      ),
      5 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020105.JPG',
        'uri' => 'public://gallery/P1020105.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 182215,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '3a57c165-f2a2-4965-ac55-dd8f265ad018',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020105.JPG',
      ),
      6 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020109.JPG',
        'uri' => 'public://gallery/P1020109_0.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 188843,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'ceb93fca-ed4b-460d-b35c-1890b73888c9',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020109_0.JPG',
      ),
      7 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020112.JPG',
        'uri' => 'public://gallery/P1020112.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 170680,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'bef575ae-4118-4099-81da-b518977f5f93',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020112.JPG',
      ),
      8 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020113.JPG',
        'uri' => 'public://gallery/P1020113.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 135747,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '78d0f5e5-41bf-4f48-85d1-22292c32e061',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020113.JPG',
      ),
      9 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020114.JPG',
        'uri' => 'public://gallery/P1020114.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 190923,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '432de634-7e99-4105-8ea5-62f8e94c33d3',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020114.JPG',
      ),
      10 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020116.JPG',
        'uri' => 'public://gallery/P1020116_0.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 188945,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '4f1d7bb7-d674-43e7-b487-1bd00e17dc68',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020116_0.JPG',
      ),
      11 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020121.JPG',
        'uri' => 'public://gallery/P1020121.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 200447,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '40d45c5f-ab1f-4cde-90f5-7a0e9a494038',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020121.JPG',
      ),
      12 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020132-rotated2.jpg',
        'uri' => 'public://gallery/P1020132-rotated2.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 262562,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'c1c4aca1-c567-4f71-be44-0f92aeeb6f09',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 768,
        'height' => 1024,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020132-rotated2.jpg',
      ),
      13 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020131-rotated2.jpg',
        'uri' => 'public://gallery/P1020131-rotated2.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 254023,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '995a5459-0824-40c9-babe-b6bd69ca4c55',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 768,
        'height' => 1024,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020131-rotated2.jpg',
      ),
      14 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020134-rotated2.jpg',
        'uri' => 'public://gallery/P1020134-rotated2.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 220909,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'b2d13a14-808d-4f7b-a3c9-77351a785b6a',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 768,
        'height' => 1024,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020134-rotated2.jpg',
      ),
      15 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020135-rotated2.jpg',
        'uri' => 'public://gallery/P1020135-rotated2.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 177212,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '4f973a53-1138-43a9-8ba9-058b65946885',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 768,
        'height' => 1024,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020135-rotated2.jpg',
      ),
      16 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020139.JPG',
        'uri' => 'public://gallery/P1020139.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 217918,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '5bf74f31-edf4-441e-afa5-3a28d1f402ec',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020139.JPG',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-03 04:22:53 +0000',
  'alias_url' => 'content/jautrība-sit-augstu-vilni-dvīņu-pilsētā',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Jaunie un Stiprie Nevēlas Atpalikt',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'df6e1c4c-4855-498b-b5c1-05811241dbd7',
  'type' => 'gallery_two',
  'language' => 'und',
  'created' => 1386042065,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '33fda0d4-9ba3-43f0-ad1c-a0ce46c0737e',
  'revision_uid' => 1,
  'field_description' => array(
    'und' => array(
      0 => array(
        'value' => '<span class="colored">Raibais Vakars:</span> Jaunie un Stiprie Nevēlas Atpalikt',
        'format' => NULL,
        'safe_value' => '&lt;span class=&quot;colored&quot;&gt;Raibais Vakars:&lt;/span&gt; Jaunie un Stiprie Nevēlas Atpalikt',
      ),
    ),
  ),
  'field_featured_photo' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020100.JPG',
        'uri' => 'public://gallery/P1020100_0.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 245645,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '9f764f5e-6d1c-4d6f-859c-e5725f5611e3',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020100_0.JPG',
      ),
    ),
  ),
  'field_gallery_introduction' => array(
    'und' => array(
      0 => array(
        'value' => 'Mazs ievads par šo foto galerija nāk šeit',
        'format' => NULL,
        'safe_value' => 'Mazs ievads par šo foto galerija nāk šeit',
      ),
    ),
  ),
  'field_photo' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020089.JPG',
        'uri' => 'public://gallery/P1020089.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 221549,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'fc079a4c-4342-4b2c-bc46-1a31dc96b196',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020089.JPG',
      ),
      1 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020090.JPG',
        'uri' => 'public://gallery/P1020090.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 204232,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'eff305af-3299-495c-a704-22bbd1e58e62',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020090.JPG',
      ),
      2 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020099.JPG',
        'uri' => 'public://gallery/P1020099.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 235977,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '6cdc9480-3cfa-43bc-9a24-458bc7e08178',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020099.JPG',
      ),
      3 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020100.JPG',
        'uri' => 'public://gallery/P1020100.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 245645,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '60d819ba-0e44-4710-a2ec-67c42af7b5a4',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020100.JPG',
      ),
      4 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020101.JPG',
        'uri' => 'public://gallery/P1020101.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 236939,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '044c89d2-a725-481e-86e9-711b9e982bb9',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020101.JPG',
      ),
      5 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020106.JPG',
        'uri' => 'public://gallery/P1020106.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 160492,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '9907e70f-9515-4d20-b44e-afedf99b05a1',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020106.JPG',
      ),
      6 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020108.JPG',
        'uri' => 'public://gallery/P1020108.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 152693,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '0a865f43-80b9-4bce-96d7-278a6d1e2ca8',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020108.JPG',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-03 03:41:05 +0000',
  'alias_url' => 'content/jaunie-un-stiprie-nevēlas-atpalikt',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Latvieši atpūšās Dvīņu Pilsētā',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '3b991586-aaad-41c9-b55c-e97ef278f3fb',
  'type' => 'gallery_two',
  'language' => 'und',
  'created' => 1387258296,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '34dfd79b-fc5d-4fef-88e9-0f8a42167ccd',
  'revision_uid' => 1,
  'field_description' => array(
    'und' => array(
      0 => array(
        'value' => '<span class="colored">Raibais Vakars:</span> Latvieši Atpūšās Dvīņu Pilsētā',
        'format' => NULL,
        'safe_value' => '&lt;span class=&quot;colored&quot;&gt;Raibais Vakars:&lt;/span&gt; Latvieši Atpūšās Dvīņu Pilsētā',
      ),
    ),
  ),
  'field_featured_photo' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020079.JPG',
        'uri' => 'public://gallery/P1020079_0.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 175846,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '7884328b-ff87-416c-ad34-f34b31bf0c92',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020079_0.JPG',
      ),
    ),
  ),
  'field_gallery_introduction' => array(
    'und' => array(
      0 => array(
        'value' => 'Te nāk mazs apraksts par foto galeriju un notikumiem',
        'format' => NULL,
        'safe_value' => 'Te nāk mazs apraksts par foto galeriju un notikumiem',
      ),
    ),
  ),
  'field_photo' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020079.JPG',
        'uri' => 'public://gallery/P1020079.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 175846,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'ac052299-55e0-4a97-a8c4-17e2c0a42dcc',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020079.JPG',
      ),
      1 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020082.JPG',
        'uri' => 'public://gallery/P1020082.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 181885,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'bc16cb5e-ae7a-4e94-9a5f-571a1fa0c720',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020082.JPG',
      ),
      2 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020083.JPG',
        'uri' => 'public://gallery/P1020083.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 200694,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '76a8ba3e-0bf9-48b0-aa5c-9fdfbe31d8e3',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020083.JPG',
      ),
      3 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020084.JPG',
        'uri' => 'public://gallery/P1020084.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 176432,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '404707de-4840-485d-b55b-b6b8cb535baf',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020084.JPG',
      ),
      4 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020085.JPG',
        'uri' => 'public://gallery/P1020085.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 177027,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '5e4d87fc-e14e-44e0-a3d1-116552ea579f',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020085.JPG',
      ),
      5 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020087.JPG',
        'uri' => 'public://gallery/P1020087.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 207883,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '76c34b91-db4a-49bd-9712-30b8ee55926d',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020087.JPG',
      ),
      6 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020118.JPG',
        'uri' => 'public://gallery/P1020118_0.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 229344,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '7a6c9c1e-4729-41f3-b655-2fd2d120651c',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020118_0.JPG',
      ),
      7 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020123.JPG',
        'uri' => 'public://gallery/P1020123.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 222264,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '8339533b-3225-4c5b-ad44-dc356c755080',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020123.JPG',
      ),
      8 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020141-rotated2.jpg',
        'uri' => 'public://gallery/P1020141-rotated2.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 238040,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'fba04b8c-9055-4208-98ae-b61761ef2dd7',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 768,
        'height' => 1024,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020141-rotated2.jpg',
      ),
      9 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020145.JPG',
        'uri' => 'public://gallery/P1020145.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 245225,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '8adf2461-1421-4e64-b357-71de726250b4',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020145.JPG',
      ),
      10 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020147.JPG',
        'uri' => 'public://gallery/P1020147.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 213412,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'f10327bf-e635-43f9-8343-859d18766e7c',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020147.JPG',
      ),
      11 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020150-rotated2.jpg',
        'uri' => 'public://gallery/P1020150-rotated2.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 236079,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'c196443a-6a00-43c1-adff-f7b26ed249f0',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 768,
        'height' => 1024,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020150-rotated2.jpg',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-17 05:31:36 +0000',
  'alias_url' => 'content/latvieši-atpūšās-dvīņu-pilsētā',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Moving to Latvia, so what’s it like?',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'ddf84e4b-384a-45df-8fc1-dcf5e01b1342',
  'type' => 'blog',
  'language' => 'und',
  'created' => 1387290796,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4e400aed-cf80-4f61-a8d1-d5c803663e2d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Latvians Online interviewed Julija Gifford, a Canadian-Latvian twenty-something who moved to Latvia from Ontario a few years ago

We wanted to learn how she found the move and how she’s doing now. Her answers were honest and at the same time quite inspirational.

<b>How and when did you decide to move to Latvia? Was it easy to reach this decision? How did your family and friends take the news?</b>

I decided I’d study in Latvia around the same time when all of my friends were choosing their universities, in Grade 12. After having done a lot of research about Ontario universities, different programs, going to all of the university fairs, I came to the realization that I didn’t feel passionate about any of the opportunities that my classmates were looking at. I wasn’t the kind of person who knew that they would only be a doctor, lawyer, etc, and I had too many different interests to be able to focus on one. So I decided to look outside Canada’s borders, where the real education would come in the form of life experience. 

It was a difficult decision to reach. There was minimal information available for international students, and there was a lot of uncertainty involved. While applications for universities in Canada happen in the winter, applications in Latvia only happen in the summer. So by graduation all of my friends had already been accepted and knew where they would be going in the fall, while I was left, crossing my fingers, hoping everything would be OK. 

I’ve always been quite independent - so my family and friends’ opinions never really factored into my decision-making. But for the most part everyone was very supportive. 

Read more at <a href="http://latviansonline.com/commentary/article/8658/">Latvians Online</a>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Latvians Online interviewed Julija Gifford, a Canadian-Latvian twenty-something who moved to Latvia from Ontario a few years ago</p>
<p>We wanted to learn how she found the move and how she’s doing now. Her answers were honest and at the same time quite inspirational.</p>
<p><b>How and when did you decide to move to Latvia? Was it easy to reach this decision? How did your family and friends take the news?</b></p>
<p>I decided I’d study in Latvia around the same time when all of my friends were choosing their universities, in Grade 12. After having done a lot of research about Ontario universities, different programs, going to all of the university fairs, I came to the realization that I didn’t feel passionate about any of the opportunities that my classmates were looking at. I wasn’t the kind of person who knew that they would only be a doctor, lawyer, etc, and I had too many different interests to be able to focus on one. So I decided to look outside Canada’s borders, where the real education would come in the form of life experience. </p>
<p>It was a difficult decision to reach. There was minimal information available for international students, and there was a lot of uncertainty involved. While applications for universities in Canada happen in the winter, applications in Latvia only happen in the summer. So by graduation all of my friends had already been accepted and knew where they would be going in the fall, while I was left, crossing my fingers, hoping everything would be OK. </p>
<p>I’ve always been quite independent - so my family and friends’ opinions never really factored into my decision-making. But for the most part everyone was very supportive. </p>
<p>Read more at <a href="http://latviansonline.com/commentary/article/8658/">Latvians Online</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_audio' => array(),
  'field_blog_entry_tag' => array(),
  'field_blog_img' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'dziemas_svetki.jpg',
        'uri' => 'public://blog/dziemas_svetki.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 100029,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '68a849fc-5e71-4c83-800d-82be8502e949',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 880,
        'height' => 461,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/dziemas_svetki.jpg',
      ),
    ),
  ),
  'field_blog_sidebar' => array(),
  'field_category' => array(),
  'field_posts_format' => array(),
  'field_video_file' => array(),
  'field_video_id' => array(),
  'field_sidebar_positioning' => array(
    'und' => array(
      0 => array(
        'tid' => 43,
        'uuid' => '8f130afd-c0d6-4493-aabc-7c87e37fe0ac',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Post',
      1 => 'sioct:BlogPost',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-17 14:33:16 +0000',
  'alias_url' => 'content/moving-latvia-so-what’s-it',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '...Laiks Dejām',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '8534b88b-16f1-4c86-a2b2-08a145d254bf',
  'type' => 'gallery_three',
  'language' => 'und',
  'created' => 1386044026,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5c4032a6-9dcc-461d-a81d-e9380fbff430',
  'revision_uid' => 1,
  'field_description' => array(
    'und' => array(
      0 => array(
        'value' => '<span class="colored">Raibais Vakars:</span>...laiks dejām',
        'format' => NULL,
        'safe_value' => '&lt;span class=&quot;colored&quot;&gt;Raibais Vakars:&lt;/span&gt;...laiks dejām',
      ),
    ),
  ),
  'field_featured_photo' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020127.JPG',
        'uri' => 'public://gallery/P1020127_1.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 193116,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'cee9b6e9-00bd-436e-9f7f-72b3d9de6c9e',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020127_1.JPG',
      ),
    ),
  ),
  'field_gallery_introduction' => array(
    'und' => array(
      0 => array(
        'value' => 'Te mazs apraksts par foto galeriju un notikumiem',
        'format' => NULL,
        'safe_value' => 'Te mazs apraksts par foto galeriju un notikumiem',
      ),
    ),
  ),
  'field_photo' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020124.JPG',
        'uri' => 'public://gallery/P1020124_0.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 221260,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'a418271d-4df7-4788-b416-e97477c13a42',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020124_0.JPG',
      ),
      1 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020125.JPG',
        'uri' => 'public://gallery/P1020125_0.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 200785,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '070d4811-011c-4cb2-a8ba-77d84b6ee93d',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020125_0.JPG',
      ),
      2 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020126.JPG',
        'uri' => 'public://gallery/P1020126_0.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 226150,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '3ba1da08-7b7e-4dca-b7b4-59fcbc887ece',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020126_0.JPG',
      ),
      3 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020127.JPG',
        'uri' => 'public://gallery/P1020127_0.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 193116,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'fe3ae01c-b419-460e-b215-83f11d4828df',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020127_0.JPG',
      ),
      4 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020128.JPG',
        'uri' => 'public://gallery/P1020128_0.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 168384,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'bf360a13-ec59-4759-a05e-3c493b5ee307',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020128_0.JPG',
      ),
      5 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020129-rotated2.jpg',
        'uri' => 'public://gallery/P1020129-rotated2.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 149679,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'f6c63ae1-598f-497a-b178-db532ae1f24f',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 768,
        'height' => 1024,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020129-rotated2.jpg',
      ),
      6 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020130-rotated2.jpg',
        'uri' => 'public://gallery/P1020130-rotated2.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 178072,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '165247d7-8a00-4522-8b58-7fb8144a7e29',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 768,
        'height' => 1024,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020130-rotated2.jpg',
      ),
      7 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'P1020143.JPG',
        'uri' => 'public://gallery/P1020143.JPG',
        'filemime' => 'image/jpeg',
        'filesize' => 218452,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '8ee32a7b-4d4c-40d1-9f4e-eb0b46aa4f00',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 1024,
        'height' => 768,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/P1020143.JPG',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-03 04:13:46 +0000',
  'alias_url' => 'content/laiks-dejām',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Latviešu Skola',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '76679345-ef70-43e6-bb90-b193a8b53134',
  'type' => 'service',
  'language' => 'und',
  'created' => 1384880371,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '691ff9a1-88b0-4981-a312-8bb3f2a253dd',
  'revision_uid' => 1,
  'field_service_description' => array(
    'und' => array(
      0 => array(
        'value' => 'Latviešu skola tiekās šādās dienas un dara šo, notiek sarīkojumu, utt. Te seko mazs ievads par Latviešu skolu',
        'format' => NULL,
        'safe_value' => 'Latviešu skola tiekās šādās dienas un dara šo, notiek sarīkojumu, utt. Te seko mazs ievads par Latviešu skolu',
      ),
    ),
  ),
  'field_service_icon' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'admin.png',
        'uri' => 'public://admin_5.png',
        'filemime' => 'image/png',
        'filesize' => 2628,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '4e567f7b-c799-4d16-9a44-a67f95551960',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 50,
        'height' => 50,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/admin_5.png',
      ),
    ),
  ),
  'field_content_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => '8.jpg',
        'uri' => 'public://8_4.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 11519,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '6aacd6c5-aa14-4838-9ab2-ac34d83512b1',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 770,
        'height' => 533,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/8_4.jpg',
      ),
    ),
  ),
  'field_content_par' => array(
    'und' => array(
      0 => array(
        'value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
        'format' => NULL,
        'safe_value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
      ),
      1 => array(
        'value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.',
        'format' => NULL,
        'safe_value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.',
      ),
      2 => array(
        'value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.',
        'format' => NULL,
        'safe_value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.',
      ),
    ),
  ),
  'field_description' => array(
    'und' => array(
      0 => array(
        'value' => '<span class="colored">Latviešu Skola : </span>mazs apraksts par organizāciju nāk šeit',
        'format' => NULL,
        'safe_value' => '&lt;span class=&quot;colored&quot;&gt;Latviešu Skola : &lt;/span&gt;mazs apraksts par organizāciju nāk šeit',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-11-19 16:59:31 +0000',
  'alias_url' => 'content/latviešu-skola',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Perkonītis',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '567f8a83-d579-48be-a655-2a41c0efa8af',
  'type' => 'service',
  'language' => 'und',
  'created' => 1387242964,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6bb608e8-4a78-4f62-b891-e5411772c863',
  'revision_uid' => 1,
  'field_service_description' => array(
    'und' => array(
      0 => array(
        'value' => 'Perkonītis ir viena lieliska aizraujoša organizācija, kur jautrība sit augstu vilni. Te seko mazs ievads par organizāciju',
        'format' => NULL,
        'safe_value' => 'Perkonītis ir viena lieliska aizraujoša organizācija, kur jautrība sit augstu vilni. Te seko mazs ievads par organizāciju',
      ),
    ),
  ),
  'field_service_icon' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'admin.png',
        'uri' => 'public://admin_7.png',
        'filemime' => 'image/png',
        'filesize' => 2628,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'acde902f-80c5-472a-a997-113c402e59d8',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 50,
        'height' => 50,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/admin_7.png',
      ),
    ),
  ),
  'field_content_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => '8.jpg',
        'uri' => 'public://8.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 11519,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '21f7f0e9-5b83-4641-bf15-9e9b85c7baeb',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 770,
        'height' => 533,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/8.jpg',
      ),
    ),
  ),
  'field_content_par' => array(
    'und' => array(
      0 => array(
        'value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.',
        'format' => NULL,
        'safe_value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.',
      ),
      1 => array(
        'value' => 'Cu munere labore sit, deserunt necessitatibus per te. Habemus tibique eu pro, ei noluisse consectetuer usu. Brute tollit necessitatibus ne cum, an mei idque volumus epicuri. At sit habeo everti. Vim liber probatus adipisci no, honestatis philosophia eam ex. Doming nostrud accumsan mel eu.',
        'format' => NULL,
        'safe_value' => 'Cu munere labore sit, deserunt necessitatibus per te. Habemus tibique eu pro, ei noluisse consectetuer usu. Brute tollit necessitatibus ne cum, an mei idque volumus epicuri. At sit habeo everti. Vim liber probatus adipisci no, honestatis philosophia eam ex. Doming nostrud accumsan mel eu.',
      ),
      2 => array(
        'value' => 'Mea legimus consectetuer definitionem ea, pro suas graeco inciderint et. An eos audiam insolens efficiantur, nullam percipit urbanitas pri te, diceret inermis voluptatibus ea mei. Cibo omnes timeam ne sea, mei brute omnes audiam ei, ut munere noster sed. Equidem ocurreret at mei, fierent inimicus nec ea. Per ea causae maiorum splendide, ne pri etiam simul euismod, utinam partiendo iudicabit at eos.
',
        'format' => NULL,
        'safe_value' => 'Mea legimus consectetuer definitionem ea, pro suas graeco inciderint et. An eos audiam insolens efficiantur, nullam percipit urbanitas pri te, diceret inermis voluptatibus ea mei. Cibo omnes timeam ne sea, mei brute omnes audiam ei, ut munere noster sed. Equidem ocurreret at mei, fierent inimicus nec ea. Per ea causae maiorum splendide, ne pri etiam simul euismod, utinam partiendo iudicabit at eos.
',
      ),
    ),
  ),
  'field_description' => array(
    'und' => array(
      0 => array(
        'value' => '<span class="colored"> Perkonītis : </span> Deju Kolektīvs ',
        'format' => NULL,
        'safe_value' => '&lt;span class=&quot;colored&quot;&gt; Perkonītis : &lt;/span&gt; Deju Kolektīvs ',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-17 01:16:04 +0000',
  'alias_url' => 'content/perkonītis',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Pasaules latvieši Rīgā',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'ac09c234-38fe-4b37-bf14-653112b0b7b8',
  'type' => 'blog',
  'language' => 'und',
  'created' => 1386350916,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6c571711-a90a-4f08-b3e0-54eb4e666e46',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Nesen Rīgā notika Pasaules latviešu ekonomikas un inovāciju forums, kurā piedalījās ap 350 dalībnieku. Starp tiem bija Amerikas latvietis un paševakuācijas ierīces Easy Down izgudrotājs Ivars Avots, ASV firmas Booz Allen Hamilton konsultants biomedicīnas un optikas tehnoloģijas investīcijās Zigurts Majumdar, un Kanādas firmas GreenMantra bizness attīstības vadītājs Kārlis Vasarājs. Raidījuma “Viss notiek” žurnāliste Eva Ikstena–Strapcāne stāsta par viņiem un par viņu cerībām sadarboties ar Latviju. (Video no Vimeo) ',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Nesen Rīgā notika Pasaules latviešu ekonomikas un inovāciju forums, kurā piedalījās ap 350 dalībnieku. Starp tiem bija Amerikas latvietis un paševakuācijas ierīces Easy Down izgudrotājs Ivars Avots, ASV firmas Booz Allen Hamilton konsultants biomedicīnas un optikas tehnoloģijas investīcijās Zigurts Majumdar, un Kanādas firmas GreenMantra bizness attīstības vadītājs Kārlis Vasarājs. Raidījuma “Viss notiek” žurnāliste Eva Ikstena–Strapcāne stāsta par viņiem un par viņu cerībām sadarboties ar Latviju. (Video no Vimeo) </p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_audio' => array(),
  'field_blog_entry_tag' => array(),
  'field_blog_img' => array(),
  'field_blog_sidebar' => array(),
  'field_category' => array(),
  'field_posts_format' => array(),
  'field_video_file' => array(),
  'field_video_id' => array(
    'und' => array(
      0 => array(
        'value' => 70193168,
        'format' => NULL,
        'safe_value' => 70193168,
      ),
    ),
  ),
  'field_sidebar_positioning' => array(
    'und' => array(
      0 => array(
        'tid' => 43,
        'uuid' => '8f130afd-c0d6-4493-aabc-7c87e37fe0ac',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Post',
      1 => 'sioct:BlogPost',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-06 17:28:36 +0000',
  'alias_url' => 'content/pasaules-latvieši-rīgā',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Dubultpilsonība',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '3aa8335c-f30e-4096-9b74-fab61d3ef330',
  'type' => 'quote',
  'language' => 'und',
  'created' => 1385008957,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '712391e9-e9ab-47cf-821e-450f62a9a297',
  'revision_uid' => 1,
  'field_quote' => array(
    'und' => array(
      0 => array(
        'value' => 'Latvijas valsts parlaments izmaina pilsonības likumu un tagad ir iespējams saņemt dubult pilsonību. Lasi vairāk par šo un procesu, kā saņemt dubult pilsonību avīzes rakstā <a href="/dubultpisloniba" target="_blank">Latvian Dual Citizenship</a>',
        'format' => NULL,
        'safe_value' => 'Latvijas valsts parlaments izmaina pilsonības likumu un tagad ir iespējams saņemt dubult pilsonību. Lasi vairāk par šo un procesu, kā saņemt dubult pilsonību avīzes rakstā &lt;a href=&quot;/dubultpisloniba&quot; target=&quot;_blank&quot;&gt;Latvian Dual Citizenship&lt;/a&gt;',
      ),
    ),
  ),
  'field_quote_author' => array(
    'und' => array(
      0 => array(
        'value' => 'Jānis Ozols',
        'format' => NULL,
        'safe_value' => 'Jānis Ozols',
      ),
    ),
  ),
  'field_quote_author_position' => array(
    'und' => array(
      0 => array(
        'value' => 'LOAM valdes biedrs',
        'format' => NULL,
        'safe_value' => 'LOAM valdes biedrs',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-11-21 04:42:37 +0000',
  'alias_url' => 'content/dubultpilsonība',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'LOAM',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '64a64ec0-0a56-4db7-91c3-ba88b3e419af',
  'type' => 'service_page',
  'language' => 'und',
  'created' => 1387327369,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '73a0c923-586f-4955-9a85-99f850a67683',
  'revision_uid' => 1,
  'field_about_service' => array(
    'und' => array(
      0 => array(
        'value' => 'Latviešu Organizāciju Apvieniba Minesotā (LOAM) apvieno 14 latviešu organizācijas kopējam kultūras un labdarības darbam. LOAM ir bezpeļņas organizācija ar 501(3)c statusu un ir atbrīvota no nodokļiem.',
        'format' => NULL,
        'safe_value' => 'Latviešu Organizāciju Apvieniba Minesotā (LOAM) apvieno 14 latviešu organizācijas kopējam kultūras un labdarības darbam. LOAM ir bezpeļņas organizācija ar 501(3)c statusu un ir atbrīvota no nodokļiem.',
      ),
      1 => array(
        'value' => 'LOAM darbības lokā ietilpst galvenokārt uzdevumi, ko nespēj vai nevēlas veikt atsevišķas latviešu organizācijas. Šajā sakaribā esam izvelējušies organizācijas mudi: "Darām to, kas darāms." Šeit pieskaitāma sadarbība ar IHRC (Immigration History Research Center), sarīkojumu kalendāra sastādīšana un izsludināšana presē, politiska darbība vietēja amerikāņu sabiedrībā un Latvijā, Minesotas latviešu adrešu/telefonu grāmatas uzturēšana, ceļojošu latviešu kultūras darbinieku koncertu/teatŗu izrāžu/lekciju sarīkošana, u.c.',
        'format' => NULL,
        'safe_value' => 'LOAM darbības lokā ietilpst galvenokārt uzdevumi, ko nespēj vai nevēlas veikt atsevišķas latviešu organizācijas. Šajā sakaribā esam izvelējušies organizācijas mudi: &quot;Darām to, kas darāms.&quot; Šeit pieskaitāma sadarbība ar IHRC (Immigration History Research Center), sarīkojumu kalendāra sastādīšana un izsludināšana presē, politiska darbība vietēja amerikāņu sabiedrībā un Latvijā, Minesotas latviešu adrešu/telefonu grāmatas uzturēšana, ceļojošu latviešu kultūras darbinieku koncertu/teatŗu izrāžu/lekciju sarīkošana, u.c.',
      ),
      2 => array(
        'value' => '<em>LOAM atbalsta arī individuālo organizāciju sarīkojumus, ieskaitot 14. jūniju un 18. novembri, ko rīko īpaši sadarbojoties divām mūsu organizācijām.</em>',
        'format' => NULL,
        'safe_value' => '&lt;em&gt;LOAM atbalsta arī individuālo organizāciju sarīkojumus, ieskaitot 14. jūniju un 18. novembri, ko rīko īpaši sadarbojoties divām mūsu organizācijām.&lt;/em&gt;',
      ),
    ),
  ),
  'field_description' => array(
    'und' => array(
      0 => array(
        'value' => '<span class="colored">LOAM:</span>Latviešu Organizāciju Apvieniba Minesotā ',
        'format' => NULL,
        'safe_value' => '&lt;span class=&quot;colored&quot;&gt;LOAM:&lt;/span&gt;Latviešu Organizāciju Apvieniba Minesotā ',
      ),
    ),
  ),
  'field_primary_service_photo' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => '9.jpg',
        'uri' => 'public://service/9.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 11519,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '1e80e548-3aae-497e-859c-d4e502cda13d',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 770,
        'height' => 533,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/9.jpg',
      ),
    ),
  ),
  'field_secondary_content' => array(
    'und' => array(
      0 => array(
        'value' => '<strong>LOAM vesture</strong> erat non arcu gravida porttitor. Nunc et magna nisi.Aliquam at erat in purus aliquet mollis',
        'format' => NULL,
        'safe_value' => '&lt;strong&gt;LOAM vesture&lt;/strong&gt; erat non arcu gravida porttitor. Nunc et magna nisi.Aliquam at erat in purus aliquet mollis',
      ),
      1 => array(
        'value' => '<strong>Fusce elementum velit vel dolor iaculis egestas.</strong>
',
        'format' => NULL,
        'safe_value' => '&lt;strong&gt;Fusce elementum velit vel dolor iaculis egestas.&lt;/strong&gt;
',
      ),
      2 => array(
        'value' => 'Maecenas ut nulla quis eros scelerisque posuere vel vitae nibh. Proin id condimentum sem. Morbi vitae dui in magna vestibulum suscipit vitae vel nunc
',
        'format' => NULL,
        'safe_value' => 'Maecenas ut nulla quis eros scelerisque posuere vel vitae nibh. Proin id condimentum sem. Morbi vitae dui in magna vestibulum suscipit vitae vel nunc
',
      ),
    ),
  ),
  'field_secondary_phote' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => '8.jpg',
        'uri' => 'public://service/8.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 11519,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '8e18aead-0a10-4f70-a2ff-85ae52819cac',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 770,
        'height' => 533,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/8.jpg',
      ),
    ),
  ),
  'field_secondary_title' => array(
    'und' => array(
      0 => array(
        'value' => 'LOAM Vēsture',
        'format' => NULL,
        'safe_value' => 'LOAM Vēsture',
      ),
    ),
  ),
  'field_service_main_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Par LOAM',
        'format' => NULL,
        'safe_value' => 'Par LOAM',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-18 00:42:49 +0000',
  'alias_url' => 'content/loam',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'SP Latviešu katoļu draudze',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '417c6a89-ad25-463a-afa0-c8590d1cc617',
  'type' => 'service',
  'language' => 'und',
  'created' => 1387242491,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7c677a5f-cf9e-4825-b56c-9859ca245283',
  'revision_uid' => 1,
  'field_service_description' => array(
    'und' => array(
      0 => array(
        'value' => 'SP Latviešu katoļu draudze ir draudze, kas atrodas Saint Paulā. Te seko mazs apraksts par Sant Paulas Latviešu katoļu draudzi MN',
        'format' => NULL,
        'safe_value' => 'SP Latviešu katoļu draudze ir draudze, kas atrodas Saint Paulā. Te seko mazs apraksts par Sant Paulas Latviešu katoļu draudzi MN',
      ),
    ),
  ),
  'field_service_icon' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'admin.png',
        'uri' => 'public://admin_10.png',
        'filemime' => 'image/png',
        'filesize' => 2628,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'ffe2cef4-6d74-4ae5-ab97-0a34b3c02483',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 50,
        'height' => 50,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/admin_10.png',
      ),
    ),
  ),
  'field_content_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => '8.jpg',
        'uri' => 'public://8_2.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 11519,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '81d6d110-65c0-4cfb-91d3-2fdbc8e0bc74',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 770,
        'height' => 533,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/8_2.jpg',
      ),
    ),
  ),
  'field_content_par' => array(
    'und' => array(
      0 => array(
        'value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
        'format' => NULL,
        'safe_value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
      ),
      1 => array(
        'value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.',
        'format' => NULL,
        'safe_value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.',
      ),
      2 => array(
        'value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.',
        'format' => NULL,
        'safe_value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.',
      ),
    ),
  ),
  'field_description' => array(
    'und' => array(
      0 => array(
        'value' => '<span class="colored">SP Latviešu katoļu draudze: </span>Mazliet par SP katoļu draudzi',
        'format' => NULL,
        'safe_value' => '&lt;span class=&quot;colored&quot;&gt;SP Latviešu katoļu draudze: &lt;/span&gt;Mazliet par SP katoļu draudzi',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-17 01:08:11 +0000',
  'alias_url' => 'content/sp-latviešu-katoļu-draudze',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Kontakts',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '0522ceaf-6f95-4e45-8832-255c249466d8',
  'type' => 'contact',
  'language' => 'und',
  'created' => 1386019138,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '828b4d0d-06c3-49b7-8fda-40105f44cba2',
  'revision_uid' => 1,
  'field_contact_address' => array(
    'und' => array(
      0 => array(
        'value' => '3152 17th Ave S',
        'format' => NULL,
        'safe_value' => '3152 17th Ave S',
      ),
    ),
  ),
  'field_contact_city' => array(
    'und' => array(
      0 => array(
        'value' => 'Minneapolis',
        'format' => NULL,
        'safe_value' => 'Minneapolis',
      ),
    ),
  ),
  'field_contact_email' => array(
    'und' => array(
      0 => array(
        'value' => 'contact@loam.com',
        'format' => NULL,
        'safe_value' => 'contact@loam.com',
      ),
    ),
  ),
  'field_contact_fax' => array(),
  'field_contact_form_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Mēs esam priecīgi no jums dzirdēt',
        'format' => NULL,
        'safe_value' => 'Mēs esam priecīgi no jums dzirdēt',
      ),
    ),
  ),
  'field_contact_info_content' => array(
    'und' => array(
      0 => array(
        'value' => '<em><strong>LOAM</strong> valdes sēdes notiek Minneapoles - St.Paulas evaņģēliski luteriskā baznīcā, kas atrodās dienvid Minneapolisē Minnesotā</em>',
        'format' => NULL,
        'safe_value' => '&lt;em&gt;&lt;strong&gt;LOAM&lt;/strong&gt; valdes sēdes notiek Minneapoles - St.Paulas evaņģēliski luteriskā baznīcā, kas atrodās dienvid Minneapolisē Minnesotā&lt;/em&gt;',
      ),
    ),
  ),
  'field_contact_info_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Kontaktu Informācija',
        'format' => NULL,
        'safe_value' => 'Kontaktu Informācija',
      ),
    ),
  ),
  'field_contact_latitude' => array(
    'und' => array(
      0 => array(
        'value' => 44.941953,
        'format' => NULL,
        'safe_value' => 44.941953,
      ),
    ),
  ),
  'field_contact_longitude' => array(
    'und' => array(
      0 => array(
        'value' => -93.239386,
        'format' => NULL,
        'safe_value' => -93.239386,
      ),
    ),
  ),
  'field_contact_phone' => array(
    'und' => array(
      0 => array(
        'value' => '888-123-4567',
        'format' => NULL,
        'safe_value' => '888-123-4567',
      ),
    ),
  ),
  'field_contact_state' => array(
    'und' => array(
      0 => array(
        'value' => 'Minnesota',
        'format' => NULL,
        'safe_value' => 'Minnesota',
      ),
    ),
  ),
  'field_contact_website' => array(
    'und' => array(
      0 => array(
        'value' => 'http://company.com',
        'format' => NULL,
        'safe_value' => 'http://company.com',
      ),
    ),
  ),
  'field_contact_zip' => array(
    'und' => array(
      0 => array(
        'value' => 55407,
        'format' => NULL,
        'safe_value' => 55407,
      ),
    ),
  ),
  'field_description' => array(
    'und' => array(
      0 => array(
        'value' => '<span class="colored">Kontaktu Informācija: </span>Informē, atbalsti  <span class="colored">VAI </span>tā pat vien apsveicinies ',
        'format' => NULL,
        'safe_value' => '&lt;span class=&quot;colored&quot;&gt;Kontaktu Informācija: &lt;/span&gt;Informē, atbalsti  &lt;span class=&quot;colored&quot;&gt;VAI &lt;/span&gt;tā pat vien apsveicinies ',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-02 21:18:58 +0000',
  'alias_url' => 'content/kontakts',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Sākums',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '80216b42-bb7b-495b-856a-647fa16c85ca',
  'type' => 'home_one',
  'language' => 'und',
  'created' => 1397361669,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '905d6971-c509-47d6-a7ae-8efb72b958f2',
  'revision_uid' => 1,
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-04-13 04:01:09 +0000',
  'alias_url' => 'sākums-latviesu-organizāciju-apvieniba-minesotā',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Teiksma',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '1616cada-081d-46a4-adb2-ea048ea2988b',
  'type' => 'service',
  'language' => 'und',
  'created' => 1387243033,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9116258e-504a-48e8-9ec9-92e7433d9bf4',
  'revision_uid' => 1,
  'field_service_description' => array(
    'und' => array(
      0 => array(
        'value' => 'Teiksma ir organizācija, kas atbalsta šo un to. Te seko mazs ievads apr Teiksma organizāciju, par tās norisēm un citām lietām',
        'format' => NULL,
        'safe_value' => 'Teiksma ir organizācija, kas atbalsta šo un to. Te seko mazs ievads apr Teiksma organizāciju, par tās norisēm un citām lietām',
      ),
    ),
  ),
  'field_service_icon' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'admin.png',
        'uri' => 'public://admin_6.png',
        'filemime' => 'image/png',
        'filesize' => 2628,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '8746e535-7a33-4361-bb77-a55d0e80d3c8',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 50,
        'height' => 50,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/admin_6.png',
      ),
    ),
  ),
  'field_content_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => '7.jpg',
        'uri' => 'public://7.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 11519,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'ca6c1960-2387-4fc6-a837-f8dc19f45f27',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 770,
        'height' => 533,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/7.jpg',
      ),
    ),
  ),
  'field_content_par' => array(
    'und' => array(
      0 => array(
        'value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
        'format' => NULL,
        'safe_value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
      ),
      1 => array(
        'value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.',
        'format' => NULL,
        'safe_value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.',
      ),
      2 => array(
        'value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.',
        'format' => NULL,
        'safe_value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.',
      ),
    ),
  ),
  'field_description' => array(
    'und' => array(
      0 => array(
        'value' => '<span class="colored">Teiksma : </span>mūzikas ansamblis',
        'format' => NULL,
        'safe_value' => '&lt;span class=&quot;colored&quot;&gt;Teiksma : &lt;/span&gt;mūzikas ansamblis',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-17 01:17:13 +0000',
  'alias_url' => 'content/teiksma',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'LOAM',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '5c34c1b5-5f62-4185-aae4-1173698b9b90',
  'type' => 'service_page',
  'language' => 'und',
  'created' => 1397349557,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '91a5d3b6-5427-4004-ba4a-32cc6b35ffff',
  'revision_uid' => 1,
  'field_about_service' => array(
    'und' => array(
      0 => array(
        'value' => 'Latviešu Organizāciju Apvieniba Minesotā (LOAM) apvieno 14 latviešu organizācijas kopējam kultūras un labdarības darbam. LOAM ir bezpeļņas organizācija ar 501(3)c statusu un ir atbrīvota no nodokļiem.',
        'format' => NULL,
        'safe_value' => 'Latviešu Organizāciju Apvieniba Minesotā (LOAM) apvieno 14 latviešu organizācijas kopējam kultūras un labdarības darbam. LOAM ir bezpeļņas organizācija ar 501(3)c statusu un ir atbrīvota no nodokļiem.',
      ),
      1 => array(
        'value' => 'LOAM darbības lokā ietilpst galvenokārt uzdevumi, ko nespēj vai nevēlas veikt atsevišķas latviešu organizācijas. Šajā sakaribā esam izvelējušies organizācijas mudi: "Darām to, kas darāms." Šeit pieskaitāma sadarbība ar IHRC (Immigration History Research Center), sarīkojumu kalendāra sastādīšana un izsludināšana presē, politiska darbība vietēja amerikāņu sabiedrībā un Latvijā, Minesotas latviešu adrešu/telefonu grāmatas uzturēšana, ceļojošu latviešu kultūras darbinieku koncertu/teatŗu izrāžu/lekciju sarīkošana, u.c.',
        'format' => NULL,
        'safe_value' => 'LOAM darbības lokā ietilpst galvenokārt uzdevumi, ko nespēj vai nevēlas veikt atsevišķas latviešu organizācijas. Šajā sakaribā esam izvelējušies organizācijas mudi: &quot;Darām to, kas darāms.&quot; Šeit pieskaitāma sadarbība ar IHRC (Immigration History Research Center), sarīkojumu kalendāra sastādīšana un izsludināšana presē, politiska darbība vietēja amerikāņu sabiedrībā un Latvijā, Minesotas latviešu adrešu/telefonu grāmatas uzturēšana, ceļojošu latviešu kultūras darbinieku koncertu/teatŗu izrāžu/lekciju sarīkošana, u.c.',
      ),
      2 => array(
        'value' => '<em>LOAM atbalsta arī individuālo organizāciju sarīkojumus, ieskaitot 14. jūniju un 18. novembri, ko rīko īpaši sadarbojoties divām mūsu organizācijām.</em>',
        'format' => NULL,
        'safe_value' => '&lt;em&gt;LOAM atbalsta arī individuālo organizāciju sarīkojumus, ieskaitot 14. jūniju un 18. novembri, ko rīko īpaši sadarbojoties divām mūsu organizācijām.&lt;/em&gt;',
      ),
    ),
  ),
  'field_description' => array(
    'und' => array(
      0 => array(
        'value' => '<span class="colored">LOAM:</span>Latviešu Organizāciju Apvieniba Minesotā ',
        'format' => NULL,
        'safe_value' => '&lt;span class=&quot;colored&quot;&gt;LOAM:&lt;/span&gt;Latviešu Organizāciju Apvieniba Minesotā ',
      ),
    ),
  ),
  'field_primary_service_photo' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => '9.jpg',
        'uri' => 'public://service/9_0.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 11519,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'c4cceb6b-fb74-4e3a-ae57-e64485719dd3',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 770,
        'height' => 533,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/9_0.jpg',
      ),
    ),
  ),
  'field_secondary_content' => array(
    'und' => array(
      0 => array(
        'value' => '<strong>LOAM vesture</strong> erat non arcu gravida porttitor. Nunc et magna nisi.Aliquam at erat in purus aliquet mollis',
        'format' => NULL,
        'safe_value' => '&lt;strong&gt;LOAM vesture&lt;/strong&gt; erat non arcu gravida porttitor. Nunc et magna nisi.Aliquam at erat in purus aliquet mollis',
      ),
      1 => array(
        'value' => '<strong>Fusce elementum velit vel dolor iaculis egestas.</strong>',
        'format' => NULL,
        'safe_value' => '&lt;strong&gt;Fusce elementum velit vel dolor iaculis egestas.&lt;/strong&gt;',
      ),
      2 => array(
        'value' => 'Maecenas ut nulla quis eros scelerisque posuere vel vitae nibh. Proin id condimentum sem. Morbi vitae dui in magna vestibulum suscipit vitae vel nunc
',
        'format' => NULL,
        'safe_value' => 'Maecenas ut nulla quis eros scelerisque posuere vel vitae nibh. Proin id condimentum sem. Morbi vitae dui in magna vestibulum suscipit vitae vel nunc
',
      ),
    ),
  ),
  'field_secondary_phote' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => '8.jpg',
        'uri' => 'public://service/8_0.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 11519,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '5d729393-529f-4fdd-b59d-1d2db974a1ac',
        'rdf_mapping' => array(),
        'alt' => '',
        'title' => '',
        'width' => 770,
        'height' => 533,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/8_0.jpg',
      ),
    ),
  ),
  'field_secondary_title' => array(
    'und' => array(
      0 => array(
        'value' => 'LOAM Vēsture',
        'format' => NULL,
        'safe_value' => 'LOAM Vēsture',
      ),
    ),
  ),
  'field_service_main_title' => array(
    'und' => array(
      0 => array(
        'value' => 'Par LOAM',
        'format' => NULL,
        'safe_value' => 'Par LOAM',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-04-13 00:39:17 +0000',
  'alias_url' => 'latviesu-organizāciju-apvieniba-minesotā',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'LK Sabiedrība',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '7d9c2fc8-7ee2-4bd5-8a7d-db40cb691774',
  'type' => 'service',
  'language' => 'und',
  'created' => 1386005588,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9710d352-8991-4253-84a0-df17a9cf4579',
  'revision_uid' => 1,
  'field_service_description' => array(
    'und' => array(
      0 => array(
        'value' => 'LK Sabiedrība dara šo un to seko mazs ievads par organizāciju visas interesantās lietas un apraksts',
        'format' => NULL,
        'safe_value' => 'LK Sabiedrība dara šo un to seko mazs ievads par organizāciju visas interesantās lietas un apraksts',
      ),
    ),
  ),
  'field_service_icon' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'admin.png',
        'uri' => 'public://admin.png',
        'filemime' => 'image/png',
        'filesize' => 2628,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'bfa99ea8-6a68-480e-afb4-5f6978364e47',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 50,
        'height' => 50,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/admin.png',
      ),
    ),
  ),
  'field_content_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => '8.jpg',
        'uri' => 'public://8_5.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 11519,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '707f2df0-7f30-47cd-8720-ad6f15d6b59c',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 770,
        'height' => 533,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/8_5.jpg',
      ),
    ),
  ),
  'field_content_par' => array(
    'und' => array(
      0 => array(
        'value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
        'format' => NULL,
        'safe_value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
      ),
      1 => array(
        'value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.
',
        'format' => NULL,
        'safe_value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.
',
      ),
      2 => array(
        'value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.',
        'format' => NULL,
        'safe_value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.',
      ),
    ),
  ),
  'field_description' => array(
    'und' => array(
      0 => array(
        'value' => '<span class="colored">LK Sabiedrība : </span>mazs ievads par organizāciju nāk šeit',
        'format' => NULL,
        'safe_value' => '&lt;span class=&quot;colored&quot;&gt;LK Sabiedrība : &lt;/span&gt;mazs ievads par organizāciju nāk šeit',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-02 17:33:08 +0000',
  'alias_url' => 'content/lk-sabiedrība',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'SELGA',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '42eef227-8c86-4267-950c-111992c31733',
  'type' => 'service',
  'language' => 'und',
  'created' => 1387242842,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '99e684d6-a3e6-4b60-96d0-393ad9627797',
  'revision_uid' => 1,
  'field_service_description' => array(
    'und' => array(
      0 => array(
        'value' => 'SELGA ir organizācija, kas dara šo un to. Te seko mazs ievads par organizāciju SELGA par tās norisēm un citām interesantām lietām',
        'format' => NULL,
        'safe_value' => 'SELGA ir organizācija, kas dara šo un to. Te seko mazs ievads par organizāciju SELGA par tās norisēm un citām interesantām lietām',
      ),
    ),
  ),
  'field_service_icon' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'admin.png',
        'uri' => 'public://admin_8.png',
        'filemime' => 'image/png',
        'filesize' => 2628,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '88bcaab8-c941-415c-bd7d-3774165dbecd',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 50,
        'height' => 50,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/admin_8.png',
      ),
    ),
  ),
  'field_content_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => '8.jpg',
        'uri' => 'public://8_0.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 11519,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '2ebc7415-7c89-4a8e-97ac-1db5692cf357',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 770,
        'height' => 533,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/8_0.jpg',
      ),
    ),
  ),
  'field_content_par' => array(
    'und' => array(
      0 => array(
        'value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
        'format' => NULL,
        'safe_value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
      ),
      1 => array(
        'value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.',
        'format' => NULL,
        'safe_value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.',
      ),
      2 => array(
        'value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.',
        'format' => NULL,
        'safe_value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.',
      ),
    ),
  ),
  'field_description' => array(
    'und' => array(
      0 => array(
        'value' => '<span class="colored">SELGA:</span> Mazliet par organizaciju nāk šeit',
        'format' => NULL,
        'safe_value' => '&lt;span class=&quot;colored&quot;&gt;SELGA:&lt;/span&gt; Mazliet par organizaciju nāk šeit',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-17 01:14:02 +0000',
  'alias_url' => 'content/selga',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Perkonītis Ziņojums',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '5c9cf0c3-cf3a-4943-9bed-0c2df893f85f',
  'type' => 'quote',
  'language' => 'und',
  'created' => 1385008818,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9a447246-f2a8-4caf-9b65-766496a3a894',
  'revision_uid' => 1,
  'field_quote' => array(
    'und' => array(
      0 => array(
        'value' => 'Dejas kopa \'Perkonītis\' pirmais mēģinājums jaunajai sezonai ir 2014 g. 1 februārī pl. 6pm Latviešu baznīcā otrajā stāva telpās. Visi interesenti un dejas mīlētāji ir aicināti pievienoties. Mēs tiekamies vienu reizi nedēļā, lai sagatavotos priekšnesumiem Latviešu ASV dziesmasvētkiem 2014 gadā Los Angolas, kā arī vietējiem pasākumiem tādiem kā Festival of Nations vasarā. Par papildus informāciju, lūdzu sazinaties ar mani caur e-pastu <a href="mailto:perkonitis@loam.com"> perkonitis@loam.com</a> vai pa telefonu 651-333-3333',
        'format' => NULL,
        'safe_value' => 'Dejas kopa &#039;Perkonītis&#039; pirmais mēģinājums jaunajai sezonai ir 2014 g. 1 februārī pl. 6pm Latviešu baznīcā otrajā stāva telpās. Visi interesenti un dejas mīlētāji ir aicināti pievienoties. Mēs tiekamies vienu reizi nedēļā, lai sagatavotos priekšnesumiem Latviešu ASV dziesmasvētkiem 2014 gadā Los Angolas, kā arī vietējiem pasākumiem tādiem kā Festival of Nations vasarā. Par papildus informāciju, lūdzu sazinaties ar mani caur e-pastu &lt;a href=&quot;mailto:perkonitis@loam.com&quot;&gt; perkonitis@loam.com&lt;/a&gt; vai pa telefonu 651-333-3333',
      ),
    ),
  ),
  'field_quote_author' => array(
    'und' => array(
      0 => array(
        'value' => 'Ieva Liepiņa',
        'format' => NULL,
        'safe_value' => 'Ieva Liepiņa',
      ),
    ),
  ),
  'field_quote_author_position' => array(
    'und' => array(
      0 => array(
        'value' => 'Pērkonītis entuziaste',
        'format' => NULL,
        'safe_value' => 'Pērkonītis entuziaste',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-11-21 04:40:18 +0000',
  'alias_url' => 'content/perkonītis-ziņojums',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Latviešu Koncertapvienība MN',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'deb3d0ff-7791-4335-9982-a15206c8869b',
  'type' => 'service',
  'language' => 'und',
  'created' => 1386005701,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b304734b-78db-454a-a403-45351065678b',
  'revision_uid' => 1,
  'field_service_description' => array(
    'und' => array(
      0 => array(
        'value' => 'Latviešu Koncertapvienība MN atbalsta šo un to seko mazs apraksts par organizāciju Latviešu Koncertapvienība MN',
        'format' => NULL,
        'safe_value' => 'Latviešu Koncertapvienība MN atbalsta šo un to seko mazs apraksts par organizāciju Latviešu Koncertapvienība MN',
      ),
    ),
  ),
  'field_service_icon' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'admin.png',
        'uri' => 'public://admin_4.png',
        'filemime' => 'image/png',
        'filesize' => 2628,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '3adfcd23-81c9-4172-a13d-797ee2b37756',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 50,
        'height' => 50,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/admin_4.png',
      ),
    ),
  ),
  'field_content_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => '8.jpg',
        'uri' => 'public://8_6.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 11519,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '037a5abd-020b-46dd-90cb-c4629fc5c4eb',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 770,
        'height' => 533,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/8_6.jpg',
      ),
    ),
  ),
  'field_content_par' => array(
    'und' => array(
      0 => array(
        'value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.',
        'format' => NULL,
        'safe_value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.',
      ),
      1 => array(
        'value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.
',
        'format' => NULL,
        'safe_value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.
',
      ),
      2 => array(
        'value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
        'format' => NULL,
        'safe_value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
      ),
    ),
  ),
  'field_description' => array(
    'und' => array(
      0 => array(
        'value' => '<span class="colored">Latviešu Koncertapvienība MN : </span>mazs ievads par organizāciju nāk šeit',
        'format' => NULL,
        'safe_value' => '&lt;span class=&quot;colored&quot;&gt;Latviešu Koncertapvienība MN : &lt;/span&gt;mazs ievads par organizāciju nāk šeit',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-02 17:35:01 +0000',
  'alias_url' => 'content/latviešu-koncertapvienība-mn',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Latviešu Fonds izsludina 2014. gada konkursu',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '21e8b89e-a445-445e-813e-a32cdf1df472',
  'type' => 'blog',
  'language' => 'und',
  'created' => 1386349965,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b96e3f0f-dc47-4446-99b2-dc8937cbecaa',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'Ar Imanta Ziedoņa vārdiem izsludinu 2014. gada Latviešu Fonda konkursu:

<i>
”...Vai piepildīt šo saimi, šo sētu un šo namu, šo tautu un šo zemi ar kautko piepildāmu. Kad vakars zelta zvaigznes kā mākslinieks sviež tušā, jūs arī varat paspēt kaut ko no nebijušā.”.
</i>

Šīs rindas man tika atdzīvinātas oktobŗa otrajā pusē, kad Čikāgā piedzīvoju nedēļas nogali, kas vēl pastiprināja manu pārliecību, ka Latviešu Fonds palīdz piepildīt latviešu namus. Jau vairāk kā četrdesmit gadus Fonds ir palīdzējis māksliniekiem, skolotājiem, zinātniekiem un kultūras darbiniekiem radoši darboties latviešu tautas labā. 

Nesen Čikāgas Latviešu biedrības namā notika Latvijas grupas “Trio” koncerts. Šie apvienības TILTS rīkotie vieskoncerti bija viens no četriem 2013. gada Latviešu fonda Lielo projektu konkursā atbalstītajiem pieteikumiem. Saņemot vislielāko balsu skaitu, fonda dalībnieki izteica savu vēlmi baudīt mākslinieku uzstāšanos vietējos latviešu centros. Tūlīt pēc šī koncerta, nākamajā pēcpusdienā, Ciānas baznīcas telpās Čikāgas literārās kopas rīkotajā Imanta Ziedoņa pasākumā, uzstājās 2013. gada Mazo projektu konkursā atbalstītais Čikāgas vīru koris. Ieklausoties Imanta Ziedoņa vārdos, nodomāju, ka Latviešu Fonds turpina padarīt iespējamu piepildīt latviešu kultūras telpu ar kaut ko no nebijušā. 

Otrais lielais projekts, kas tika atbalstīts 2013. gada konkursā, ir Okupācijas muzeja ekspozīcijas vizuālais papildinājums - 1941. gada deportācijas vagons, ko paredzēts rādīt publikai 2015. gadā. Tas izglītos par noziegumu pret cilvēci - Latvijas pilsoņu masveida deportāciju uz Sibīriju. Redzam, ka Latviešu Fonda dalībnieki turpina balsot par projektiem, kas atspoguļo mūsu organizācijas pamatmērķi - veicināt latviešu kultūras, mākslas un izglītības attīstību, uzsverot trimdas periodu un tajā laikā piedzīvoto. 

Trešais, 2013. gada atbalstītais projekts jau atspoguļo jaunu pieeju latviešu kultūras stiprināšanai. Arņa Grosa pieteiktā latviešu valodas gramatikas vārdu locīšanas aplikācija piedāvā mūsdienot vārdu locīšanas apguvi. Turpmāk planšetdatoros un mobilajos tālruņos būs iespējams uzšķirt pareizo locījumu lietvārdiem un darbības vārdiem. Balsojums par šo projektu liecina, ka Latviešu Fonda dalībnieki ir gatavi atbalstīt projektus, kas izmanto jaunās tehnoloģijas un skar arvien jaunāku paaudzi. 

Pēdējais lielais projekts, kas saņem atbalstu ir Dzintras Gekas dokumentālā filma Dieva Putniņi. Šī ir filma par trimdas bērnu likteņiem. Jau intervēti vairāk kā 60 ‘trimdas bērni’. Topošās filmas mērķauditorija ir cilvēki visā pasaulē, kas piedzīvojuši līdzīgas vēsturiskās situācijas. Šis vērienīgais projekts, ierobežoto līdzekļu dēļ, saņēma tikai nelielu procentu no pieprasītās summas, un tādējādi vēlreiz mudināja padomi pārdomāt, kā pārveidot Latviešu Fondu, lai būtu iespējams sniegt plašāku atbalstu projektiem.

Nesenajā Latviešu Fonda saietā Toronto, Aija Mazsīle novadīja nodarbību par to, ko Latviešu Fondam vajadzētu paturēt, ko pamest, un ko pilnvedot. LF dalībnieki pilno sarakstu varēs lasīt nākamajā LF apkārtrakstā. Viens no ieteikumiem bija izreklamēt projektus, kas nesaņēma visu no Fonda pieprasīto finansējumu un aicināt ziedot atsevišķiem projektiem. Padomes sēdē arī tika pārrunāts, kā paplašināt fonda iespējas atbalstīt vairāk
vērtīgo projektu.  



December 17: Hilda, Teiksma

Sveiks!  Log in | Register
Latvians Online
Dual citizenship

Latvia\'s lawmakers amend the Citizenship Law. Visit our page of resources.

    Home
    Quick
    News
    Events
    Commentary
    Reviews
    Forum
    Marketplace
    Advertise
    Donate
    Newsletter
    Izglītība

News

Home › News › Article
Latviešu Fonds izsludina 2014. gada konkursu

Kristīna Sīmane-Laimiņa

Publicēts 2013.11.27

Ar Imanta Ziedoņa vārdiem izsludinu 2014. gada Latviešu Fonda konkursu:

”...Vai piepildīt šo saimi, šo sētu un šo namu, šo tautu un šo zemi ar kautko piepildāmu. Kad vakars zelta zvaigznes kā mākslinieks sviež tušā, jūs arī varat paspēt kaut ko no nebijušā.”.

Šīs rindas man tika atdzīvinātas oktobŗa otrajā pusē, kad Čikāgā piedzīvoju nedēļas nogali, kas vēl pastiprināja manu pārliecību, ka Latviešu Fonds palīdz piepildīt latviešu namus. Jau vairāk kā četrdesmit gadus Fonds ir palīdzējis māksliniekiem, skolotājiem, zinātniekiem un kultūras darbiniekiem radoši darboties latviešu tautas labā.

Nesen Čikāgas Latviešu biedrības namā notika Latvijas grupas “Trio” koncerts. Šie apvienības TILTS rīkotie vieskoncerti bija viens no četriem 2013. gada Latviešu fonda Lielo projektu konkursā atbalstītajiem pieteikumiem. Saņemot vislielāko balsu skaitu, fonda dalībnieki izteica savu vēlmi baudīt mākslinieku uzstāšanos vietējos latviešu centros. Tūlīt pēc šī koncerta, nākamajā pēcpusdienā, Ciānas baznīcas telpās Čikāgas literārās kopas rīkotajā Imanta Ziedoņa pasākumā, uzstājās 2013. gada Mazo projektu konkursā atbalstītais Čikāgas vīru koris. Ieklausoties Imanta Ziedoņa vārdos, nodomāju, ka Latviešu Fonds turpina padarīt iespējamu piepildīt latviešu kultūras telpu ar kaut ko no nebijušā. 

Otrais lielais projekts, kas tika atbalstīts 2013. gada konkursā, ir Okupācijas muzeja ekspozīcijas vizuālais papildinājums - 1941. gada deportācijas vagons, ko paredzēts rādīt publikai 2015. gadā. Tas izglītos par noziegumu pret cilvēci - Latvijas pilsoņu masveida deportāciju uz Sibīriju. Redzam, ka Latviešu Fonda dalībnieki turpina balsot par projektiem, kas atspoguļo mūsu organizācijas pamatmērķi - veicināt latviešu kultūras, mākslas un izglītības attīstību, uzsverot trimdas periodu un tajā laikā piedzīvoto. 

Trešais, 2013. gada atbalstītais projekts jau atspoguļo jaunu pieeju latviešu kultūras stiprināšanai. Arņa Grosa pieteiktā latviešu valodas gramatikas vārdu locīšanas aplikācija piedāvā mūsdienot vārdu locīšanas apguvi. Turpmāk planšetdatoros un mobilajos tālruņos būs iespējams uzšķirt pareizo locījumu lietvārdiem un darbības vārdiem. Balsojums par šo projektu liecina, ka Latviešu Fonda dalībnieki ir gatavi atbalstīt projektus, kas izmanto jaunās tehnoloģijas un skar arvien jaunāku paaudzi.

Pēdējais lielais projekts, kas saņem atbalstu ir Dzintras Gekas dokumentālā filma Dieva Putniņi. Šī ir filma par trimdas bērnu likteņiem. Jau intervēti vairāk kā 60 ‘trimdas bērni’. Topošās filmas mērķauditorija ir cilvēki visā pasaulē, kas piedzīvojuši līdzīgas vēsturiskās situācijas. Šis vērienīgais projekts, ierobežoto līdzekļu dēļ, saņēma tikai nelielu procentu no pieprasītās summas, un tādējādi vēlreiz mudināja padomi pārdomāt, kā pārveidot Latviešu Fondu, lai būtu iespējams sniegt plašāku atbalstu projektiem.

Nesenajā Latviešu Fonda saietā Toronto, Aija Mazsīle novadīja nodarbību par to, ko Latviešu Fondam vajadzētu paturēt, ko pamest, un ko pilnvedot. LF dalībnieki pilno sarakstu varēs lasīt nākamajā LF apkārtrakstā. Viens no ieteikumiem bija izreklamēt projektus, kas nesaņēma visu no Fonda pieprasīto finansējumu un aicināt ziedot atsevišķiem projektiem. Padomes sēdē arī tika pārrunāts, kā paplašināt fonda iespējas atbalstīt vairāk
vērtīgo projektu. 

Padome arī uzklausīja jau sen izteikto kritiku, ka projektu konkursa gaŗais cikls daudziem bremzē plānot un realizēt savas idejas. Tāpēc šogad Latviešu Fonds ir apņēmies samazināt laika sprīdi no konkursa sākuma, līdz rezultātu izziņošanai. Ja vecajā ciklā, lai uzzinātu rezultātus Lielajiem projektiem, bija jāgaida līdz rudens pilnsapulcei, tad 2014. gada konkursa cikls paredz izziņot rezultātus jau vasarā. Mazo projektu izziņošana paliks kā iepriekš - aprīļa beigās. 

2014. gada Latviešu Fonda projektus varēs pieteikt no 2014. gada 1. janvāra līdz 15. februārim, sekojot noteikumiem, kas publicēti http://www.latviesufonds.info nodaļā projektu pieteicējiem. Pavasarī padome izskatīs Mazo projektu pieteikumus, kuriem nepieciešams finansējums zem divtūkstots dolāriem, un izvirzīs desmit Lielos projektus (nepieciešamais finansējums no diviem līdz desmit tūkstošiem dolāru), par kuŗiem Latviešu Fonda dalībnieki balsos no maija mēneša līdz Jāņiem. Jau otro gadu dalībniekiem būs iespējams balsot elektroniski. Uzvarētājus ceram paziņot pirms vasaras beigām, lai projektu pieteicēji varētu jau rudenī sākt “sviest zvaigznes tušā”. 



December 17: Hilda, Teiksma

Sveiks!  Log in | Register
Latvians Online
Dual citizenship

Latvia\'s lawmakers amend the Citizenship Law. Visit our page of resources.

    Home
    Quick
    News
    Events
    Commentary
    Reviews
    Forum
    Marketplace
    Advertise
    Donate
    Newsletter
    Izglītība

News

Home › News › Article
Latviešu Fonds izsludina 2014. gada konkursu

Kristīna Sīmane-Laimiņa

Publicēts 2013.11.27

Ar Imanta Ziedoņa vārdiem izsludinu 2014. gada Latviešu Fonda konkursu:

”...Vai piepildīt šo saimi, šo sētu un šo namu, šo tautu un šo zemi ar kautko piepildāmu. Kad vakars zelta zvaigznes kā mākslinieks sviež tušā, jūs arī varat paspēt kaut ko no nebijušā.”.

Šīs rindas man tika atdzīvinātas oktobŗa otrajā pusē, kad Čikāgā piedzīvoju nedēļas nogali, kas vēl pastiprināja manu pārliecību, ka Latviešu Fonds palīdz piepildīt latviešu namus. Jau vairāk kā četrdesmit gadus Fonds ir palīdzējis māksliniekiem, skolotājiem, zinātniekiem un kultūras darbiniekiem radoši darboties latviešu tautas labā.

Nesen Čikāgas Latviešu biedrības namā notika Latvijas grupas “Trio” koncerts. Šie apvienības TILTS rīkotie vieskoncerti bija viens no četriem 2013. gada Latviešu fonda Lielo projektu konkursā atbalstītajiem pieteikumiem. Saņemot vislielāko balsu skaitu, fonda dalībnieki izteica savu vēlmi baudīt mākslinieku uzstāšanos vietējos latviešu centros. Tūlīt pēc šī koncerta, nākamajā pēcpusdienā, Ciānas baznīcas telpās Čikāgas literārās kopas rīkotajā Imanta Ziedoņa pasākumā, uzstājās 2013. gada Mazo projektu konkursā atbalstītais Čikāgas vīru koris. Ieklausoties Imanta Ziedoņa vārdos, nodomāju, ka Latviešu Fonds turpina padarīt iespējamu piepildīt latviešu kultūras telpu ar kaut ko no nebijušā. 

Otrais lielais projekts, kas tika atbalstīts 2013. gada konkursā, ir Okupācijas muzeja ekspozīcijas vizuālais papildinājums - 1941. gada deportācijas vagons, ko paredzēts rādīt publikai 2015. gadā. Tas izglītos par noziegumu pret cilvēci - Latvijas pilsoņu masveida deportāciju uz Sibīriju. Redzam, ka Latviešu Fonda dalībnieki turpina balsot par projektiem, kas atspoguļo mūsu organizācijas pamatmērķi - veicināt latviešu kultūras, mākslas un izglītības attīstību, uzsverot trimdas periodu un tajā laikā piedzīvoto. 

Trešais, 2013. gada atbalstītais projekts jau atspoguļo jaunu pieeju latviešu kultūras stiprināšanai. Arņa Grosa pieteiktā latviešu valodas gramatikas vārdu locīšanas aplikācija piedāvā mūsdienot vārdu locīšanas apguvi. Turpmāk planšetdatoros un mobilajos tālruņos būs iespējams uzšķirt pareizo locījumu lietvārdiem un darbības vārdiem. Balsojums par šo projektu liecina, ka Latviešu Fonda dalībnieki ir gatavi atbalstīt projektus, kas izmanto jaunās tehnoloģijas un skar arvien jaunāku paaudzi.

Pēdējais lielais projekts, kas saņem atbalstu ir Dzintras Gekas dokumentālā filma Dieva Putniņi. Šī ir filma par trimdas bērnu likteņiem. Jau intervēti vairāk kā 60 ‘trimdas bērni’. Topošās filmas mērķauditorija ir cilvēki visā pasaulē, kas piedzīvojuši līdzīgas vēsturiskās situācijas. Šis vērienīgais projekts, ierobežoto līdzekļu dēļ, saņēma tikai nelielu procentu no pieprasītās summas, un tādējādi vēlreiz mudināja padomi pārdomāt, kā pārveidot Latviešu Fondu, lai būtu iespējams sniegt plašāku atbalstu projektiem.

Nesenajā Latviešu Fonda saietā Toronto, Aija Mazsīle novadīja nodarbību par to, ko Latviešu Fondam vajadzētu paturēt, ko pamest, un ko pilnvedot. LF dalībnieki pilno sarakstu varēs lasīt nākamajā LF apkārtrakstā. Viens no ieteikumiem bija izreklamēt projektus, kas nesaņēma visu no Fonda pieprasīto finansējumu un aicināt ziedot atsevišķiem projektiem. Padomes sēdē arī tika pārrunāts, kā paplašināt fonda iespējas atbalstīt vairāk
vērtīgo projektu. 

Padome arī uzklausīja jau sen izteikto kritiku, ka projektu konkursa gaŗais cikls daudziem bremzē plānot un realizēt savas idejas. Tāpēc šogad Latviešu Fonds ir apņēmies samazināt laika sprīdi no konkursa sākuma, līdz rezultātu izziņošanai. Ja vecajā ciklā, lai uzzinātu rezultātus Lielajiem projektiem, bija jāgaida līdz rudens pilnsapulcei, tad 2014. gada konkursa cikls paredz izziņot rezultātus jau vasarā. Mazo projektu izziņošana paliks kā iepriekš - aprīļa beigās.

2014. gada Latviešu Fonda projektus varēs pieteikt no 2014. gada 1. janvāra līdz 15. februārim, sekojot noteikumiem, kas publicēti http://www.latviesufonds.info nodaļā projektu pieteicējiem. Pavasarī padome izskatīs Mazo projektu pieteikumus, kuriem nepieciešams finansējums zem divtūkstots dolāriem, un izvirzīs desmit Lielos projektus (nepieciešamais finansējums no diviem līdz desmit tūkstošiem dolāru), par kuŗiem Latviešu Fonda dalībnieki balsos no maija mēneša līdz Jāņiem. Jau otro gadu dalībniekiem būs iespējams balsot elektroniski. Uzvarētājus ceram paziņot pirms vasaras beigām, lai projektu pieteicēji varētu jau rudenī sākt “sviest zvaigznes tušā”.

Ja jums ir interese piedalīties šajā radīšanas procesā, un jūs vēl neesiet Latviešu Fonda dalībnieks, iestājieties apmeklējot http://www.latviesufonds.info. Tur piespiežot DONATE pogu, atradīsiet visu informāciju, kas vajadzīga, lai iestātos. Ja jums ir jautājumi vai nepieciešama papildus informācija variet sazināties ar Tiju Kārkli, lfkasieris@gmail.com, vai pa pastu P.O. Box 28696, Oakdale, MN 55128, USA.

Raksts izņemts no <a href="http://latviansonline.com/news/article/8645/">LatviansOnline.com</a>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>Ar Imanta Ziedoņa vārdiem izsludinu 2014. gada Latviešu Fonda konkursu:</p>
<p><i><br />
”...Vai piepildīt šo saimi, šo sētu un šo namu, šo tautu un šo zemi ar kautko piepildāmu. Kad vakars zelta zvaigznes kā mākslinieks sviež tušā, jūs arī varat paspēt kaut ko no nebijušā.”.<br /></i></p>
<p>Šīs rindas man tika atdzīvinātas oktobŗa otrajā pusē, kad Čikāgā piedzīvoju nedēļas nogali, kas vēl pastiprināja manu pārliecību, ka Latviešu Fonds palīdz piepildīt latviešu namus. Jau vairāk kā četrdesmit gadus Fonds ir palīdzējis māksliniekiem, skolotājiem, zinātniekiem un kultūras darbiniekiem radoši darboties latviešu tautas labā. </p>
<p>Nesen Čikāgas Latviešu biedrības namā notika Latvijas grupas “Trio” koncerts. Šie apvienības TILTS rīkotie vieskoncerti bija viens no četriem 2013. gada Latviešu fonda Lielo projektu konkursā atbalstītajiem pieteikumiem. Saņemot vislielāko balsu skaitu, fonda dalībnieki izteica savu vēlmi baudīt mākslinieku uzstāšanos vietējos latviešu centros. Tūlīt pēc šī koncerta, nākamajā pēcpusdienā, Ciānas baznīcas telpās Čikāgas literārās kopas rīkotajā Imanta Ziedoņa pasākumā, uzstājās 2013. gada Mazo projektu konkursā atbalstītais Čikāgas vīru koris. Ieklausoties Imanta Ziedoņa vārdos, nodomāju, ka Latviešu Fonds turpina padarīt iespējamu piepildīt latviešu kultūras telpu ar kaut ko no nebijušā. </p>
<p>Otrais lielais projekts, kas tika atbalstīts 2013. gada konkursā, ir Okupācijas muzeja ekspozīcijas vizuālais papildinājums - 1941. gada deportācijas vagons, ko paredzēts rādīt publikai 2015. gadā. Tas izglītos par noziegumu pret cilvēci - Latvijas pilsoņu masveida deportāciju uz Sibīriju. Redzam, ka Latviešu Fonda dalībnieki turpina balsot par projektiem, kas atspoguļo mūsu organizācijas pamatmērķi - veicināt latviešu kultūras, mākslas un izglītības attīstību, uzsverot trimdas periodu un tajā laikā piedzīvoto. </p>
<p>Trešais, 2013. gada atbalstītais projekts jau atspoguļo jaunu pieeju latviešu kultūras stiprināšanai. Arņa Grosa pieteiktā latviešu valodas gramatikas vārdu locīšanas aplikācija piedāvā mūsdienot vārdu locīšanas apguvi. Turpmāk planšetdatoros un mobilajos tālruņos būs iespējams uzšķirt pareizo locījumu lietvārdiem un darbības vārdiem. Balsojums par šo projektu liecina, ka Latviešu Fonda dalībnieki ir gatavi atbalstīt projektus, kas izmanto jaunās tehnoloģijas un skar arvien jaunāku paaudzi. </p>
<p>Pēdējais lielais projekts, kas saņem atbalstu ir Dzintras Gekas dokumentālā filma Dieva Putniņi. Šī ir filma par trimdas bērnu likteņiem. Jau intervēti vairāk kā 60 ‘trimdas bērni’. Topošās filmas mērķauditorija ir cilvēki visā pasaulē, kas piedzīvojuši līdzīgas vēsturiskās situācijas. Šis vērienīgais projekts, ierobežoto līdzekļu dēļ, saņēma tikai nelielu procentu no pieprasītās summas, un tādējādi vēlreiz mudināja padomi pārdomāt, kā pārveidot Latviešu Fondu, lai būtu iespējams sniegt plašāku atbalstu projektiem.</p>
<p>Nesenajā Latviešu Fonda saietā Toronto, Aija Mazsīle novadīja nodarbību par to, ko Latviešu Fondam vajadzētu paturēt, ko pamest, un ko pilnvedot. LF dalībnieki pilno sarakstu varēs lasīt nākamajā LF apkārtrakstā. Viens no ieteikumiem bija izreklamēt projektus, kas nesaņēma visu no Fonda pieprasīto finansējumu un aicināt ziedot atsevišķiem projektiem. Padomes sēdē arī tika pārrunāts, kā paplašināt fonda iespējas atbalstīt vairāk<br />
vērtīgo projektu.  </p>
<p>December 17: Hilda, Teiksma</p>
<p>Sveiks!  Log in | Register<br />
Latvians Online<br />
Dual citizenship</p>
<p>Latvia\'s lawmakers amend the Citizenship Law. Visit our page of resources.</p>
<p>    Home<br />
    Quick<br />
    News<br />
    Events<br />
    Commentary<br />
    Reviews<br />
    Forum<br />
    Marketplace<br />
    Advertise<br />
    Donate<br />
    Newsletter<br />
    Izglītība</p>
<p>News</p>
<p>Home › News › Article<br />
Latviešu Fonds izsludina 2014. gada konkursu</p>
<p>Kristīna Sīmane-Laimiņa</p>
<p>Publicēts 2013.11.27</p>
<p>Ar Imanta Ziedoņa vārdiem izsludinu 2014. gada Latviešu Fonda konkursu:</p>
<p>”...Vai piepildīt šo saimi, šo sētu un šo namu, šo tautu un šo zemi ar kautko piepildāmu. Kad vakars zelta zvaigznes kā mākslinieks sviež tušā, jūs arī varat paspēt kaut ko no nebijušā.”.</p>
<p>Šīs rindas man tika atdzīvinātas oktobŗa otrajā pusē, kad Čikāgā piedzīvoju nedēļas nogali, kas vēl pastiprināja manu pārliecību, ka Latviešu Fonds palīdz piepildīt latviešu namus. Jau vairāk kā četrdesmit gadus Fonds ir palīdzējis māksliniekiem, skolotājiem, zinātniekiem un kultūras darbiniekiem radoši darboties latviešu tautas labā.</p>
<p>Nesen Čikāgas Latviešu biedrības namā notika Latvijas grupas “Trio” koncerts. Šie apvienības TILTS rīkotie vieskoncerti bija viens no četriem 2013. gada Latviešu fonda Lielo projektu konkursā atbalstītajiem pieteikumiem. Saņemot vislielāko balsu skaitu, fonda dalībnieki izteica savu vēlmi baudīt mākslinieku uzstāšanos vietējos latviešu centros. Tūlīt pēc šī koncerta, nākamajā pēcpusdienā, Ciānas baznīcas telpās Čikāgas literārās kopas rīkotajā Imanta Ziedoņa pasākumā, uzstājās 2013. gada Mazo projektu konkursā atbalstītais Čikāgas vīru koris. Ieklausoties Imanta Ziedoņa vārdos, nodomāju, ka Latviešu Fonds turpina padarīt iespējamu piepildīt latviešu kultūras telpu ar kaut ko no nebijušā. </p>
<p>Otrais lielais projekts, kas tika atbalstīts 2013. gada konkursā, ir Okupācijas muzeja ekspozīcijas vizuālais papildinājums - 1941. gada deportācijas vagons, ko paredzēts rādīt publikai 2015. gadā. Tas izglītos par noziegumu pret cilvēci - Latvijas pilsoņu masveida deportāciju uz Sibīriju. Redzam, ka Latviešu Fonda dalībnieki turpina balsot par projektiem, kas atspoguļo mūsu organizācijas pamatmērķi - veicināt latviešu kultūras, mākslas un izglītības attīstību, uzsverot trimdas periodu un tajā laikā piedzīvoto. </p>
<p>Trešais, 2013. gada atbalstītais projekts jau atspoguļo jaunu pieeju latviešu kultūras stiprināšanai. Arņa Grosa pieteiktā latviešu valodas gramatikas vārdu locīšanas aplikācija piedāvā mūsdienot vārdu locīšanas apguvi. Turpmāk planšetdatoros un mobilajos tālruņos būs iespējams uzšķirt pareizo locījumu lietvārdiem un darbības vārdiem. Balsojums par šo projektu liecina, ka Latviešu Fonda dalībnieki ir gatavi atbalstīt projektus, kas izmanto jaunās tehnoloģijas un skar arvien jaunāku paaudzi.</p>
<p>Pēdējais lielais projekts, kas saņem atbalstu ir Dzintras Gekas dokumentālā filma Dieva Putniņi. Šī ir filma par trimdas bērnu likteņiem. Jau intervēti vairāk kā 60 ‘trimdas bērni’. Topošās filmas mērķauditorija ir cilvēki visā pasaulē, kas piedzīvojuši līdzīgas vēsturiskās situācijas. Šis vērienīgais projekts, ierobežoto līdzekļu dēļ, saņēma tikai nelielu procentu no pieprasītās summas, un tādējādi vēlreiz mudināja padomi pārdomāt, kā pārveidot Latviešu Fondu, lai būtu iespējams sniegt plašāku atbalstu projektiem.</p>
<p>Nesenajā Latviešu Fonda saietā Toronto, Aija Mazsīle novadīja nodarbību par to, ko Latviešu Fondam vajadzētu paturēt, ko pamest, un ko pilnvedot. LF dalībnieki pilno sarakstu varēs lasīt nākamajā LF apkārtrakstā. Viens no ieteikumiem bija izreklamēt projektus, kas nesaņēma visu no Fonda pieprasīto finansējumu un aicināt ziedot atsevišķiem projektiem. Padomes sēdē arī tika pārrunāts, kā paplašināt fonda iespējas atbalstīt vairāk<br />
vērtīgo projektu. </p>
<p>Padome arī uzklausīja jau sen izteikto kritiku, ka projektu konkursa gaŗais cikls daudziem bremzē plānot un realizēt savas idejas. Tāpēc šogad Latviešu Fonds ir apņēmies samazināt laika sprīdi no konkursa sākuma, līdz rezultātu izziņošanai. Ja vecajā ciklā, lai uzzinātu rezultātus Lielajiem projektiem, bija jāgaida līdz rudens pilnsapulcei, tad 2014. gada konkursa cikls paredz izziņot rezultātus jau vasarā. Mazo projektu izziņošana paliks kā iepriekš - aprīļa beigās. </p>
<p>2014. gada Latviešu Fonda projektus varēs pieteikt no 2014. gada 1. janvāra līdz 15. februārim, sekojot noteikumiem, kas publicēti <a href="http://www.latviesufonds.info">http://www.latviesufonds.info</a> nodaļā projektu pieteicējiem. Pavasarī padome izskatīs Mazo projektu pieteikumus, kuriem nepieciešams finansējums zem divtūkstots dolāriem, un izvirzīs desmit Lielos projektus (nepieciešamais finansējums no diviem līdz desmit tūkstošiem dolāru), par kuŗiem Latviešu Fonda dalībnieki balsos no maija mēneša līdz Jāņiem. Jau otro gadu dalībniekiem būs iespējams balsot elektroniski. Uzvarētājus ceram paziņot pirms vasaras beigām, lai projektu pieteicēji varētu jau rudenī sākt “sviest zvaigznes tušā”. </p>
<p>December 17: Hilda, Teiksma</p>
<p>Sveiks!  Log in | Register<br />
Latvians Online<br />
Dual citizenship</p>
<p>Latvia\'s lawmakers amend the Citizenship Law. Visit our page of resources.</p>
<p>    Home<br />
    Quick<br />
    News<br />
    Events<br />
    Commentary<br />
    Reviews<br />
    Forum<br />
    Marketplace<br />
    Advertise<br />
    Donate<br />
    Newsletter<br />
    Izglītība</p>
<p>News</p>
<p>Home › News › Article<br />
Latviešu Fonds izsludina 2014. gada konkursu</p>
<p>Kristīna Sīmane-Laimiņa</p>
<p>Publicēts 2013.11.27</p>
<p>Ar Imanta Ziedoņa vārdiem izsludinu 2014. gada Latviešu Fonda konkursu:</p>
<p>”...Vai piepildīt šo saimi, šo sētu un šo namu, šo tautu un šo zemi ar kautko piepildāmu. Kad vakars zelta zvaigznes kā mākslinieks sviež tušā, jūs arī varat paspēt kaut ko no nebijušā.”.</p>
<p>Šīs rindas man tika atdzīvinātas oktobŗa otrajā pusē, kad Čikāgā piedzīvoju nedēļas nogali, kas vēl pastiprināja manu pārliecību, ka Latviešu Fonds palīdz piepildīt latviešu namus. Jau vairāk kā četrdesmit gadus Fonds ir palīdzējis māksliniekiem, skolotājiem, zinātniekiem un kultūras darbiniekiem radoši darboties latviešu tautas labā.</p>
<p>Nesen Čikāgas Latviešu biedrības namā notika Latvijas grupas “Trio” koncerts. Šie apvienības TILTS rīkotie vieskoncerti bija viens no četriem 2013. gada Latviešu fonda Lielo projektu konkursā atbalstītajiem pieteikumiem. Saņemot vislielāko balsu skaitu, fonda dalībnieki izteica savu vēlmi baudīt mākslinieku uzstāšanos vietējos latviešu centros. Tūlīt pēc šī koncerta, nākamajā pēcpusdienā, Ciānas baznīcas telpās Čikāgas literārās kopas rīkotajā Imanta Ziedoņa pasākumā, uzstājās 2013. gada Mazo projektu konkursā atbalstītais Čikāgas vīru koris. Ieklausoties Imanta Ziedoņa vārdos, nodomāju, ka Latviešu Fonds turpina padarīt iespējamu piepildīt latviešu kultūras telpu ar kaut ko no nebijušā. </p>
<p>Otrais lielais projekts, kas tika atbalstīts 2013. gada konkursā, ir Okupācijas muzeja ekspozīcijas vizuālais papildinājums - 1941. gada deportācijas vagons, ko paredzēts rādīt publikai 2015. gadā. Tas izglītos par noziegumu pret cilvēci - Latvijas pilsoņu masveida deportāciju uz Sibīriju. Redzam, ka Latviešu Fonda dalībnieki turpina balsot par projektiem, kas atspoguļo mūsu organizācijas pamatmērķi - veicināt latviešu kultūras, mākslas un izglītības attīstību, uzsverot trimdas periodu un tajā laikā piedzīvoto. </p>
<p>Trešais, 2013. gada atbalstītais projekts jau atspoguļo jaunu pieeju latviešu kultūras stiprināšanai. Arņa Grosa pieteiktā latviešu valodas gramatikas vārdu locīšanas aplikācija piedāvā mūsdienot vārdu locīšanas apguvi. Turpmāk planšetdatoros un mobilajos tālruņos būs iespējams uzšķirt pareizo locījumu lietvārdiem un darbības vārdiem. Balsojums par šo projektu liecina, ka Latviešu Fonda dalībnieki ir gatavi atbalstīt projektus, kas izmanto jaunās tehnoloģijas un skar arvien jaunāku paaudzi.</p>
<p>Pēdējais lielais projekts, kas saņem atbalstu ir Dzintras Gekas dokumentālā filma Dieva Putniņi. Šī ir filma par trimdas bērnu likteņiem. Jau intervēti vairāk kā 60 ‘trimdas bērni’. Topošās filmas mērķauditorija ir cilvēki visā pasaulē, kas piedzīvojuši līdzīgas vēsturiskās situācijas. Šis vērienīgais projekts, ierobežoto līdzekļu dēļ, saņēma tikai nelielu procentu no pieprasītās summas, un tādējādi vēlreiz mudināja padomi pārdomāt, kā pārveidot Latviešu Fondu, lai būtu iespējams sniegt plašāku atbalstu projektiem.</p>
<p>Nesenajā Latviešu Fonda saietā Toronto, Aija Mazsīle novadīja nodarbību par to, ko Latviešu Fondam vajadzētu paturēt, ko pamest, un ko pilnvedot. LF dalībnieki pilno sarakstu varēs lasīt nākamajā LF apkārtrakstā. Viens no ieteikumiem bija izreklamēt projektus, kas nesaņēma visu no Fonda pieprasīto finansējumu un aicināt ziedot atsevišķiem projektiem. Padomes sēdē arī tika pārrunāts, kā paplašināt fonda iespējas atbalstīt vairāk<br />
vērtīgo projektu. </p>
<p>Padome arī uzklausīja jau sen izteikto kritiku, ka projektu konkursa gaŗais cikls daudziem bremzē plānot un realizēt savas idejas. Tāpēc šogad Latviešu Fonds ir apņēmies samazināt laika sprīdi no konkursa sākuma, līdz rezultātu izziņošanai. Ja vecajā ciklā, lai uzzinātu rezultātus Lielajiem projektiem, bija jāgaida līdz rudens pilnsapulcei, tad 2014. gada konkursa cikls paredz izziņot rezultātus jau vasarā. Mazo projektu izziņošana paliks kā iepriekš - aprīļa beigās.</p>
<p>2014. gada Latviešu Fonda projektus varēs pieteikt no 2014. gada 1. janvāra līdz 15. februārim, sekojot noteikumiem, kas publicēti <a href="http://www.latviesufonds.info">http://www.latviesufonds.info</a> nodaļā projektu pieteicējiem. Pavasarī padome izskatīs Mazo projektu pieteikumus, kuriem nepieciešams finansējums zem divtūkstots dolāriem, un izvirzīs desmit Lielos projektus (nepieciešamais finansējums no diviem līdz desmit tūkstošiem dolāru), par kuŗiem Latviešu Fonda dalībnieki balsos no maija mēneša līdz Jāņiem. Jau otro gadu dalībniekiem būs iespējams balsot elektroniski. Uzvarētājus ceram paziņot pirms vasaras beigām, lai projektu pieteicēji varētu jau rudenī sākt “sviest zvaigznes tušā”.</p>
<p>Ja jums ir interese piedalīties šajā radīšanas procesā, un jūs vēl neesiet Latviešu Fonda dalībnieks, iestājieties apmeklējot <a href="http://www.latviesufonds.info">http://www.latviesufonds.info</a>. Tur piespiežot DONATE pogu, atradīsiet visu informāciju, kas vajadzīga, lai iestātos. Ja jums ir jautājumi vai nepieciešama papildus informācija variet sazināties ar Tiju Kārkli, <a href="mailto:lfkasieris@gmail.com">lfkasieris@gmail.com</a>, vai pa pastu P.O. Box 28696, Oakdale, MN 55128, USA.</p>
<p>Raksts izņemts no <a href="http://latviansonline.com/news/article/8645/">LatviansOnline.com</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_audio' => array(),
  'field_blog_entry_tag' => array(),
  'field_blog_img' => array(),
  'field_blog_sidebar' => array(),
  'field_category' => array(),
  'field_posts_format' => array(),
  'field_video_file' => array(),
  'field_video_id' => array(),
  'field_sidebar_positioning' => array(
    'und' => array(
      0 => array(
        'tid' => 43,
        'uuid' => '8f130afd-c0d6-4493-aabc-7c87e37fe0ac',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Post',
      1 => 'sioct:BlogPost',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-06 17:12:45 +0000',
  'alias_url' => 'content/latviešu-fonds-izsludina-2014-gada-konkursu',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Latvian Dual Citizenship',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '3284f160-9a34-4909-b199-aa485aa83e61',
  'type' => 'blog',
  'language' => 'und',
  'created' => 1386082126,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c74ab2c6-6384-4282-aa61-249ff68c0b49',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => 'The amendments to the Citizenship Law of the Republic of Latvia came into force as of 1 October 2013, which supplements the law with the provisions on dual citizenship. Now, upon occurrence of certain circumstances, the law permits dual-citizenship when applying for a Latvian passport through naturalization or on the other grounds.

Pursuant to the amended law, if a person who was a Latvian citizen on 17 June 1940, or a descendant of such person submits a certification on the fact that, from 17 June 1940 until 4 May 1990, he or she has left Latvia escaping from the U.S.S.R. or German occupation regime or has been deported, and due to the referred to reasons he or she has not returned to Latvia for permanent residence, such person and their descendants shall retain the right to register as a Latvian citizen.

It shall be noted that similar provisions were earlier in effect. However, many men and women who had the right to apply for citizenship on said grounds have long settled in other countries and, therefore, were not willing to renounce their citizenship to the favor of the Latvia’s passport (previous regulation of the law obliged the persons to renounce their existing citizenship). Now the law clearly states that dual citizenship may form for the person being admitted to Latvian citizenship on the foregoing grounds.

Said differently, the persons who were citizens on 17 June 1940 or their descendants have the right to be admitted to the citizenship of Latvia with the right to keep their previous citizenship. This opportunity is available to all descendants born by 1 October 2014.

The opportunity of dual citizenship applies to some other cases, when a person is being admitted to Latvian citizenship through naturalization. However, some specific conditions apply: upon being admitted to the citizenship of Latvia through naturalization a dual citizenship may only be formed for a person, who is a citizen of a Member State of the European Union, a Member State of the European Free Trade Association, a Member State of the North Atlantic Treaty Organisation, the Commonwealth of Australia, the Federative Republic of Brazil, New Zealand or a citizen of the country with which the Republic of Latvia has entered into agreement regarding recognition of dual citizenship.

The procedure of applying for a dual citizenship may be related to certain legal issues. Law office INLAT PLUS experts will help you to get understanding of the process and successfully finalize the required documents. INLAT PLUS specializes on the matters related to immigration and citizenship for a second decade and will be glad to assist you throughout the whole process, as well as find and retrieve documents evidencing the Latvian citizenship of your ancestors.

ARTICLE excerpt from <a href="http://www.baltic-course.com/eng/legislation/?doc=81829">Baltic Course</a>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<p>The amendments to the Citizenship Law of the Republic of Latvia came into force as of 1 October 2013, which supplements the law with the provisions on dual citizenship. Now, upon occurrence of certain circumstances, the law permits dual-citizenship when applying for a Latvian passport through naturalization or on the other grounds.</p>
<p>Pursuant to the amended law, if a person who was a Latvian citizen on 17 June 1940, or a descendant of such person submits a certification on the fact that, from 17 June 1940 until 4 May 1990, he or she has left Latvia escaping from the U.S.S.R. or German occupation regime or has been deported, and due to the referred to reasons he or she has not returned to Latvia for permanent residence, such person and their descendants shall retain the right to register as a Latvian citizen.</p>
<p>It shall be noted that similar provisions were earlier in effect. However, many men and women who had the right to apply for citizenship on said grounds have long settled in other countries and, therefore, were not willing to renounce their citizenship to the favor of the Latvia’s passport (previous regulation of the law obliged the persons to renounce their existing citizenship). Now the law clearly states that dual citizenship may form for the person being admitted to Latvian citizenship on the foregoing grounds.</p>
<p>Said differently, the persons who were citizens on 17 June 1940 or their descendants have the right to be admitted to the citizenship of Latvia with the right to keep their previous citizenship. This opportunity is available to all descendants born by 1 October 2014.</p>
<p>The opportunity of dual citizenship applies to some other cases, when a person is being admitted to Latvian citizenship through naturalization. However, some specific conditions apply: upon being admitted to the citizenship of Latvia through naturalization a dual citizenship may only be formed for a person, who is a citizen of a Member State of the European Union, a Member State of the European Free Trade Association, a Member State of the North Atlantic Treaty Organisation, the Commonwealth of Australia, the Federative Republic of Brazil, New Zealand or a citizen of the country with which the Republic of Latvia has entered into agreement regarding recognition of dual citizenship.</p>
<p>The procedure of applying for a dual citizenship may be related to certain legal issues. Law office INLAT PLUS experts will help you to get understanding of the process and successfully finalize the required documents. INLAT PLUS specializes on the matters related to immigration and citizenship for a second decade and will be glad to assist you throughout the whole process, as well as find and retrieve documents evidencing the Latvian citizenship of your ancestors.</p>
<p>ARTICLE excerpt from <a href="http://www.baltic-course.com/eng/legislation/?doc=81829">Baltic Course</a></p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_audio' => array(),
  'field_blog_entry_tag' => array(),
  'field_blog_img' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'dual_citizenship.jpg',
        'uri' => 'public://blog/dual_citizenship.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 63447,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'f297ff71-fd43-4eb5-b293-f12e7048326d',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 880,
        'height' => 461,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/dual_citizenship.jpg',
      ),
    ),
  ),
  'field_blog_sidebar' => array(),
  'field_category' => array(),
  'field_posts_format' => array(),
  'field_video_file' => array(),
  'field_video_id' => array(),
  'field_sidebar_positioning' => array(
    'und' => array(
      0 => array(
        'tid' => 43,
        'uuid' => '8f130afd-c0d6-4493-aabc-7c87e37fe0ac',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Post',
      1 => 'sioct:BlogPost',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-03 14:48:46 +0000',
  'alias_url' => 'content/latvian-dual-citizenship',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'LOAM Avīze',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '5ffd7aa2-c512-481a-93cb-169e96037c3e',
  'type' => 'blog_posts',
  'language' => 'und',
  'created' => 1398620932,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c7f86998-61bd-4edf-a075-ef87b9f14aa8',
  'revision_uid' => 1,
  'field_blog_sidebar' => array(
    'und' => array(
      0 => array(
        'tid' => 13,
        'uuid' => 'bdfd197f-6e7f-489e-94cc-cfd7ea290a70',
      ),
    ),
  ),
  'field_description' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2014-04-27 17:48:52 +0000',
  'alias_url' => 'latviešu-organizācijas-apvienība-minesotā-avīze',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'MKGPF',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '6be73fa8-b4a5-4253-a6b2-322027ca0368',
  'type' => 'service',
  'language' => 'und',
  'created' => 1384880332,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c92e9bac-efc4-4661-bb9c-067f75c82cf9',
  'revision_uid' => 1,
  'field_service_description' => array(
    'und' => array(
      0 => array(
        'value' => 'MKGPF ir organizācija un dara šo un to. Te seko mazs ievads par MKGPF organizāciju un tās norisēm',
        'format' => NULL,
        'safe_value' => 'MKGPF ir organizācija un dara šo un to. Te seko mazs ievads par MKGPF organizāciju un tās norisēm',
      ),
    ),
  ),
  'field_service_icon' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'frame.png',
        'uri' => 'public://frame.png',
        'filemime' => 'image/png',
        'filesize' => 1790,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '9f52f603-d0b7-4cae-a01d-3033e423ebb2',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 50,
        'height' => 50,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/frame.png',
      ),
    ),
  ),
  'field_content_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => '8.jpg',
        'uri' => 'public://8_3.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 11519,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '17ff3e64-0a49-47fa-88f2-ebbe3aef562b',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 770,
        'height' => 533,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/8_3.jpg',
      ),
    ),
  ),
  'field_content_par' => array(
    'und' => array(
      0 => array(
        'value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
        'format' => NULL,
        'safe_value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
      ),
      1 => array(
        'value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.',
        'format' => NULL,
        'safe_value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.',
      ),
      2 => array(
        'value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.
',
        'format' => NULL,
        'safe_value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.
',
      ),
    ),
  ),
  'field_description' => array(
    'und' => array(
      0 => array(
        'value' => '<span class="colored">MKGPF : </span>Mazs ievads par organizāciju',
        'format' => NULL,
        'safe_value' => '&lt;span class=&quot;colored&quot;&gt;MKGPF : &lt;/span&gt;Mazs ievads par organizāciju',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-11-19 16:58:52 +0000',
  'alias_url' => 'content/mkgpf',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'KKM',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '64fa7a9c-5f6a-4ec6-897c-549145182018',
  'type' => 'service',
  'language' => 'und',
  'created' => 1386005648,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'cde9248d-961f-45f8-8c17-985bc777396c',
  'revision_uid' => 1,
  'field_service_description' => array(
    'und' => array(
      0 => array(
        'value' => 'KKM ir pilns vards seko ar mazu aprakstu par to ko KKM dara un nedara, utt.',
        'format' => NULL,
        'safe_value' => 'KKM ir pilns vards seko ar mazu aprakstu par to ko KKM dara un nedara, utt.',
      ),
    ),
  ),
  'field_service_icon' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'admin.png',
        'uri' => 'public://admin_3.png',
        'filemime' => 'image/png',
        'filesize' => 2628,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '21f5a962-0738-495f-bebb-62e42fd4c471',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 50,
        'height' => 50,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/admin_3.png',
      ),
    ),
  ),
  'field_content_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => '8.jpg',
        'uri' => 'public://8_7.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 11519,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '703c0dcf-0bbd-4869-a562-8fc6fe4ac470',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 770,
        'height' => 533,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/8_7.jpg',
      ),
    ),
  ),
  'field_content_par' => array(
    'und' => array(
      0 => array(
        'value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
        'format' => NULL,
        'safe_value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
      ),
      1 => array(
        'value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.',
        'format' => NULL,
        'safe_value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.',
      ),
      2 => array(
        'value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.
',
        'format' => NULL,
        'safe_value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.
',
      ),
    ),
  ),
  'field_description' => array(
    'und' => array(
      0 => array(
        'value' => '<span class="colored">KKM : </span>Mazs ievads par organizāciju nāk šeit',
        'format' => NULL,
        'safe_value' => '&lt;span class=&quot;colored&quot;&gt;KKM : &lt;/span&gt;Mazs ievads par organizāciju nāk šeit',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-02 17:34:08 +0000',
  'alias_url' => 'content/kkm',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'TARTS',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'cb5380d5-755a-4267-ab71-c01dd02a9937',
  'type' => 'service',
  'language' => 'und',
  'created' => 1387242749,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'cfb691f1-8d35-41d0-a4bf-bcdc9ab2dbd8',
  'revision_uid' => 1,
  'field_service_description' => array(
    'und' => array(
      0 => array(
        'value' => 'TARTS ir organizācija dara šo un to. Te seko mazs ievads par organizāciju par tās notikumiem, varbūt vēsturi un citām lietām',
        'format' => NULL,
        'safe_value' => 'TARTS ir organizācija dara šo un to. Te seko mazs ievads par organizāciju par tās notikumiem, varbūt vēsturi un citām lietām',
      ),
    ),
  ),
  'field_service_icon' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'admin.png',
        'uri' => 'public://admin_9.png',
        'filemime' => 'image/png',
        'filesize' => 2628,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '5b270ad8-97d2-4f7e-96ff-2bb1988c85f5',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 50,
        'height' => 50,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/admin_9.png',
      ),
    ),
  ),
  'field_content_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => '8.jpg',
        'uri' => 'public://8_1.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 11519,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'b6727f19-a048-43df-9691-7b1de5382480',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 770,
        'height' => 533,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/8_1.jpg',
      ),
    ),
  ),
  'field_content_par' => array(
    'und' => array(
      0 => array(
        'value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
        'format' => NULL,
        'safe_value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
      ),
      1 => array(
        'value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.',
        'format' => NULL,
        'safe_value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.',
      ),
      2 => array(
        'value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.',
        'format' => NULL,
        'safe_value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.',
      ),
    ),
  ),
  'field_description' => array(
    'und' => array(
      0 => array(
        'value' => '<span class="colored">TARTS: </span>Mazliet par organizāciju nāk šeit',
        'format' => NULL,
        'safe_value' => '&lt;span class=&quot;colored&quot;&gt;TARTS: &lt;/span&gt;Mazliet par organizāciju nāk šeit',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-17 01:12:29 +0000',
  'alias_url' => 'content/tarts',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'Akadēmiskā Kopa',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => '055b1f7c-a7dc-43fc-a7a9-dd5e95715129',
  'type' => 'service',
  'language' => 'und',
  'created' => 1386005960,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd7a60d46-908f-4b88-a6df-bffb8ad0ae01',
  'revision_uid' => 1,
  'field_service_description' => array(
    'und' => array(
      0 => array(
        'value' => 'Akadēmiskā kopa atbalsta šo un to un mazs apraksts nāk šeit',
        'format' => NULL,
        'safe_value' => 'Akadēmiskā kopa atbalsta šo un to un mazs apraksts nāk šeit',
      ),
    ),
  ),
  'field_service_icon' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'admin.png',
        'uri' => 'public://admin_2.png',
        'filemime' => 'image/png',
        'filesize' => 2628,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'e6061cd8-d529-4d8c-8af6-5c4432d04aef',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 50,
        'height' => 50,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/admin_2.png',
      ),
    ),
  ),
  'field_content_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => '8.jpg',
        'uri' => 'public://8_9.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 11519,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'b9bbffa3-de68-4a99-badf-4fc35b9ea221',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 770,
        'height' => 533,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/8_9.jpg',
      ),
    ),
  ),
  'field_content_par' => array(
    'und' => array(
      0 => array(
        'value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
        'format' => NULL,
        'safe_value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
      ),
      1 => array(
        'value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.',
        'format' => NULL,
        'safe_value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.',
      ),
      2 => array(
        'value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.',
        'format' => NULL,
        'safe_value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.',
      ),
    ),
  ),
  'field_description' => array(
    'und' => array(
      0 => array(
        'value' => '<span class="colored">Akadēmiskā Kopa : </span>mazs ievads par organizāciju nāk šeit',
        'format' => NULL,
        'safe_value' => '&lt;span class=&quot;colored&quot;&gt;Akadēmiskā Kopa : &lt;/span&gt;mazs ievads par organizāciju nāk šeit',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-02 17:39:20 +0000',
  'alias_url' => 'content/akadēmiskā-kopa',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'LOAM organizācijas:',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '1d9ed63d-7175-4c9c-8f98-3277c10b6096',
  'type' => 'list',
  'language' => 'und',
  'created' => 1384808380,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e2f4e5c2-7d06-4f9b-b068-5929f7a29d68',
  'revision_uid' => 1,
  'field_list_item' => array(
    'und' => array(
      0 => array(
        'value' => '<em class=" icon-cog"> </em> Akadēmiskā kopa',
        'format' => NULL,
        'safe_value' => '&lt;em class=&quot; icon-cog&quot;&gt; &lt;/em&gt; Akadēmiskā kopa',
      ),
      1 => array(
        'value' => ' <em class="icon-cog"> </em> 12-column grid',
        'format' => NULL,
        'safe_value' => ' &lt;em class=&quot;icon-cog&quot;&gt; &lt;/em&gt; 12-column grid',
      ),
      2 => array(
        'value' => '<em class="icon-cog"> </em> Max-width 1200px',
        'format' => NULL,
        'safe_value' => '&lt;em class=&quot;icon-cog&quot;&gt; &lt;/em&gt; Max-width 1200px',
      ),
      3 => array(
        'value' => '<em class="icon-cog"> </em> Growing library',
        'format' => NULL,
        'safe_value' => '&lt;em class=&quot;icon-cog&quot;&gt; &lt;/em&gt; Growing library',
      ),
      4 => array(
        'value' => '<em class="icon-cog"> </em> Responsive design',
        'format' => NULL,
        'safe_value' => '&lt;em class=&quot;icon-cog&quot;&gt; &lt;/em&gt; Responsive design',
      ),
      5 => array(
        'value' => '<em class="icon-eye-open"></em>Cross-everything',
        'format' => NULL,
        'safe_value' => '&lt;em class=&quot;icon-eye-open&quot;&gt;&lt;/em&gt;Cross-everything',
      ),
      6 => array(
        'value' => '<em class="icon-list-alt"></em>Styleguide docs',
        'format' => NULL,
        'safe_value' => '&lt;em class=&quot;icon-list-alt&quot;&gt;&lt;/em&gt;Styleguide docs',
      ),
      7 => array(
        'value' => '<em class="icon-cog"></em>jQuery plugins',
        'format' => NULL,
        'safe_value' => '&lt;em class=&quot;icon-cog&quot;&gt;&lt;/em&gt;jQuery plugins',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-11-18 20:59:40 +0000',
  'alias_url' => 'content/loam-organizācijas',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'MSPD Koris',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 0,
  'sticky' => 0,
  'vuuid' => 'bb6e4eda-db90-4f7f-8b27-fbaed7588453',
  'type' => 'service',
  'language' => 'und',
  'created' => 1387242411,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'eb13d2e9-fc40-483c-b6f0-88760811cf98',
  'revision_uid' => 1,
  'field_service_description' => array(
    'und' => array(
      0 => array(
        'value' => 'MSPD Koris is organizācija dara šo un to. Te seko mazs ievads par organizāciju un tām norisēm',
        'format' => NULL,
        'safe_value' => 'MSPD Koris is organizācija dara šo un to. Te seko mazs ievads par organizāciju un tām norisēm',
      ),
    ),
  ),
  'field_service_icon' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => 'admin.png',
        'uri' => 'public://admin_11.png',
        'filemime' => 'image/png',
        'filesize' => 2628,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => '6034b056-b597-4979-9c97-539b4ba977ef',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 50,
        'height' => 50,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/admin_11.png',
      ),
    ),
  ),
  'field_content_image' => array(
    'und' => array(
      0 => array(
        'fid' => NULL,
        'uid' => 1,
        'filename' => '7.jpg',
        'uri' => 'public://7_0.jpg',
        'filemime' => 'image/jpeg',
        'filesize' => 11519,
        'status' => 1,
        'timestamp' => NULL,
        'uuid' => 'e9b08829-2801-4b49-a984-fc83bb520c20',
        'rdf_mapping' => array(),
        'alt' => NULL,
        'title' => NULL,
        'width' => 770,
        'height' => 533,
        'uuid_features_file_path' => 'sites/all/modules/designssquare_com_site_loam/assets/data/7_0.jpg',
      ),
    ),
  ),
  'field_content_par' => array(
    'und' => array(
      0 => array(
        'value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
        'format' => NULL,
        'safe_value' => 'Populo accumsan mnesarchum no has, altera euismod usu ei, eum at clita disputando. Option fierent interpretaris ne pro, graeco eligendi insolens duo an. Ne ubique equidem argumentum has, viderer scribentur et vim. In vim semper putant. Mei alienum mandamus referrentur cu. Usu at decore vivendo, accusata atomorum ei has.',
      ),
      1 => array(
        'value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.',
        'format' => NULL,
        'safe_value' => 'Ipsum cetero an sea. Vis ut nihil sadipscing, ad mei iisque inermis sadipscing. Nec illum forensibus id, cum no eleifend postulant. An sanctus evertitur mediocritatem vis, mel ex solet munere appellantur, quod verear reformidans ut has. Possit adolescens his ex. Ne esse possit vulputate vis, sed liber epicurei atomorum te. Eum eros duis at.',
      ),
      2 => array(
        'value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.',
        'format' => NULL,
        'safe_value' => 'Adhuc postulant cu vim, dolores perfecto id mel. Ex vim magna nonumes percipitur. Qui ne nulla ornatus. Mutat mentitum efficiendi ex mei, vix natum etiam facete cu, in reque legere nostrud nec. At sea mazim debet appetere, te quo voluptatum adversarium disputationi. Vis ea natum utroque epicuri, ut eos eros vide illum.',
      ),
    ),
  ),
  'field_description' => array(
    'und' => array(
      0 => array(
        'value' => '<span class="colored">MSPD Koris : </span>Mazliet par organizāciju nāk šeit',
        'format' => NULL,
        'safe_value' => '&lt;span class=&quot;colored&quot;&gt;MSPD Koris : &lt;/span&gt;Mazliet par organizāciju nāk šeit',
      ),
    ),
  ),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-12-17 01:06:51 +0000',
  'alias_url' => 'content/mspd-koris',
);
  return $nodes;
}
