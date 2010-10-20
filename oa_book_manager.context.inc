<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function oa_book_manager_context_default_contexts() {
  $export = array();
  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'book_manager';
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Book');

  $export['book_manager'] = $context;
  return $export;
}
