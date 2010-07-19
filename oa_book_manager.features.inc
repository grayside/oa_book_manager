<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function oa_book_manager_context_default_contexts() {
  module_load_include('inc', 'oa_book_manager', 'oa_book_manager.defaults');
  $args = func_get_args();
  return call_user_func_array('_oa_book_manager_context_default_contexts', $args);
}

/**
 * Implementation of hook_ctools_plugin_api().
 */
function oa_book_manager_ctools_plugin_api() {
  module_load_include('inc', 'oa_book_manager', 'oa_book_manager.defaults');
  $args = func_get_args();
  return call_user_func_array('_oa_book_manager_ctools_plugin_api', $args);
}
