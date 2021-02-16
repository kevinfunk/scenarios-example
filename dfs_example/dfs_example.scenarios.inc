<?php

/**
 * @file
 * Scenarios hooks implemented by the DFS Example profile.
 */

/**
 * Implements hook_scenarios_info().
 */
function dfs_example_scenarios_info() {
  return [
    'dfs_example' => [
      'type' => 'module',
      'label' => t('DFS Example'),
      'description' => t('Demo Framework Scenario for Getting Started.'),
      'imports' => ['/data/content'],
    ],
  ];
}
