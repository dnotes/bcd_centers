<?php

/**
 * Implementation of hook_views_default_views().
 */
function bcd_centers_views_default_views() {
  $views = array();

  // Exported view: bahai_center
  $view = new view;
  $view->name = 'bahai_center';
  $view->description = 'a display of Baha\'i Centers in the community';
  $view->tag = 'undefined';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('arguments', array(
    'field_loc_code_value' => array(
      'default_action' => 'default',
      'style_plugin' => 'default_summary',
      'style_options' => array(),
      'wildcard' => 'all',
      'wildcard_substitution' => 'All',
      'title' => '',
      'breadcrumb' => '',
      'default_argument_type' => 'php',
      'default_argument' => '',
      'validate_type' => 'none',
      'validate_fail' => 'not found',
      'glossary' => 0,
      'limit' => '0',
      'case' => 'none',
      'path_case' => 'none',
      'transform_dash' => 0,
      'id' => 'field_loc_code_value',
      'table' => 'node_data_field_loc_code',
      'field' => 'field_loc_code_value',
      'validate_user_argument_type' => 'uid',
      'validate_user_roles' => array(
        '2' => 0,
        '3' => 0,
      ),
      'relationship' => 'none',
      'default_options_div_prefix' => '',
      'default_argument_user' => 0,
      'default_argument_fixed' => '',
      'default_argument_php' => 'if (arg(0) == \'node\' && $node = node_load(arg(1))) {
  if ($node->type == \'loc\') {
    return $node->field_loc_code[0][\'value\'];
  }
}',
      'validate_argument_node_type' => array(
        'webform' => 0,
        'center' => 0,
        'loc' => 0,
        'state' => 0,
        'quote_image' => 0,
        'page' => 0,
        'story' => 0,
      ),
      'validate_argument_node_access' => 0,
      'validate_argument_nid_type' => 'nid',
      'validate_user_restrict_roles' => 0,
      'validate_argument_php' => '',
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'center' => 'center',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('row_plugin', 'node');
  $handler->override_option('row_options', array(
    'relationship' => 'none',
    'build_mode' => 'teaser',
    'links' => 0,
    'comments' => 0,
  ));
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->override_option('block_description', 'Baha\'i Centers in Locality');
  $handler->override_option('block_caching', -1);

  $views[$view->name] = $view;

  return $views;
}
