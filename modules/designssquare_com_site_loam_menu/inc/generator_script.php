<?php
include_once DRUPAL_ROOT . '/includes/utility.inc';
//specify menues to export
$menus = array('main-menu');
$mainMenuArray = array();
//mlid to alias map
$alias_map = array();
$menu_items = array();

$output = "function _loam_menus_altered(){ \n";
$output .= "     return array (\n";

foreach($menus as $menu){
$links = db_select('menu_links', 'ml', array('fetch' => PDO::FETCH_ASSOC))
->fields('ml')
->condition('ml.menu_name', $menu)
->condition('ml.hidden','0')
->orderBy('weight')
->execute()
->fetchAll();

foreach ($links as &$link) {
$link['options'] = unserialize($link['options']);
}
$mainMenuArray = array_merge($mainMenuArray, $links);

$mlid_ins = db_select('menu_links', 'ml')
->fields('ml', array('mlid', 'link_path'))
->condition('ml.menu_name', $menu)
->condition('ml.hidden','0')
->execute()->fetchAllAssoc('mlid', PDO::FETCH_ASSOC);

$menu_items = $menu_items + $mlid_ins;

$menu_ins = menu_load($menu);
if($menu_ins){
$menu_item = 'array(';
$menu_item .= "   'menu_name' => '".$menu_ins['menu_name']."',";
$menu_item .= "   'title' => '".str_replace("'", "\'",$menu_ins['title'])."',";
$menu_item .= "   'description' => '".str_replace("'", "\'", $menu_ins['description'])."'";
$menu_item .= ")";

$output .=  $menu_item . ",\n";
}else{
watchdog(WATCHDOG_NOTICE, "menu: $menu not found");
}

}
$output .= "    );\n";
$output .= "}\n\n\n";

//generate the map between mlid and alias path
foreach($menu_items as $mlid => $options){
$alias_map[$mlid] = drupal_get_path_alias($options['link_path']);
}

$output .= "function _loam_menu_installed_items() {\n";
$output .= "     return array (\n";
foreach($mainMenuArray as $key => $link){
$alias_path = drupal_get_path_alias($link['link_path']);

//prepare link to pass in menu_link_save()
$link_export = $link;
$link_export['link_path'] = $alias_path;
unset($link_export['mlid']);
unset($link_export['router_path']);
unset($link_export['options']['identifier']);
$link_export['plid'] = ($link_export['plid']) ? $alias_map[$link_export['plid']] : $link_export['plid'] ;
$link_export['p1'] = ($link_export['p1']) ? $alias_map[$link_export['p1']] : $link_export['p1'] ;
$link_export['p2'] = ($link_export['p2']) ? $alias_map[$link_export['p2']] : $link_export['p2'] ;
$link_export['p3'] = ($link_export['p3']) ? $alias_map[$link_export['p3']] : $link_export['p3'] ;

$output .= "'" . $alias_path ."' => " . drupal_var_export($link_export) . ",\n";
}
$output .= ");\n";
$output .="}\n";

drupal_set_message("<textarea rows=100 style=\"width: 100%;\">" . $output . '</textarea>');