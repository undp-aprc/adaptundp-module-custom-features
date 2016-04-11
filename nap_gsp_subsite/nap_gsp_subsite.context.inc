<?php
/**
 * @file
 * nap_gsp_subsite.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function nap_gsp_subsite_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nap_gsp_page_footer';
  $context->description = 'Place a page footer on each page of the NAP GSP subsite';
  $context->tag = 'NAP GSP';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        2 => 2,
      ),
    ),
    'path' => array(
      'values' => array(
        'nap-gsp' => 'nap-gsp',
        'nap-gsp/*' => 'nap-gsp/*',
        '~nap-negotiators' => '~nap-negotiators',
        '~nap-negotiators/*' => '~nap-negotiators/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'cca_theme_blocks-nap_footer_gsp' => array(
          'module' => 'cca_theme_blocks',
          'delta' => 'nap_footer_gsp',
          'region' => 'footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('NAP GSP');
  t('Place a page footer on each page of the NAP GSP subsite');
  $export['nap_gsp_page_footer'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nap_gsp_page_slider';
  $context->description = '';
  $context->tag = 'NAP GSP';
  $context->conditions = array(
    'domain' => array(
      'values' => array(
        2 => 2,
      ),
    ),
    'path' => array(
      'values' => array(
        'nap-gsp' => 'nap-gsp',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'cca_theme_blocks-nap_slides' => array(
          'module' => 'cca_theme_blocks',
          'delta' => 'nap_slides',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('NAP GSP');
  $export['nap_gsp_page_slider'] = $context;

  return $export;
}
