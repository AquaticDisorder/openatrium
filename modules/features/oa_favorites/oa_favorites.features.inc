<?php
/**
 * @file
 * oa_favorites.features.inc
 */

/**
 * Implements hook_flag_default_flags().
 */
function oa_favorites_flag_default_flags() {
  $flags = array();
  // Exported flag: "Favorite Group".
  $flags['favorite_group'] = array(
    'content_type' => 'node',
    'title' => 'Favorite Group',
    'global' => '0',
    'types' => array(
      0 => 'oa_group',
    ),
    'flag_short' => 'Mark as Favorite',
    'flag_long' => 'Unmark Group as Favorite',
    'flag_message' => 'Favorite Group',
    'unflag_short' => 'Unmark as Favorite',
    'unflag_long' => 'Unmark Group as Favorite',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => '2',
      ),
      'unflag' => array(
        0 => '2',
      ),
    ),
    'weight' => 0,
    'show_on_form' => 0,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => FALSE,
    'i18n' => 0,
    'module' => 'oa_favorites',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 2,
  );
  return $flags;

}