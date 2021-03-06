<?php
/**
 * @file
 * drupal_challenge.features.inc
 */

/**
 * Implements hook_views_api().
 */
function drupal_challenge_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function drupal_challenge_node_info() {
  $items = array(
    'job' => array(
      'name' => t('Job'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
