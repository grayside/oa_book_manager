<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _oa_book_manager_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'oa_book_manager';
  $context->description = '';
  $context->tag = 'Book';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'notebook/manage' => 'notebook/manage',
        'notebook/manage/*' => 'notebook/manage/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'oa_book_manager-books' => array(
          'module' => 'oa_book_manager',
          'delta' => 'books',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  $export['oa_book_manager'] = $context;
  return $export;
}

/**
 * Helper to implementation of hook_ctools_plugin_api().
 */
function _oa_book_manager_ctools_plugin_api() {
  $args = func_get_args();
  $module = array_shift($args);
  $api = array_shift($args);
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
}
