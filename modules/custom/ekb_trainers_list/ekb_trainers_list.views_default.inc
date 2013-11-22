<?php

/**
 * Implementation of hook_views_default_views().
 */
function ekb_trainers_list_views_default_views() {
  $views = array();

  // Exported view: trainers_list
  $view = new view;
  $view->name = 'trainers_list';
  $view->description = 'List of Trainer';
  $view->tag = 'users, paul';
  $view->base_table = 'users';
  $view->core = 0;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'counter' => array(
      'label' => '#',
      'alter' => array(
        'alter_text' => 1,
        'text' => '<strong>[counter].)</strong>',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'exclude' => 0,
      'id' => 'counter',
      'table' => 'views',
      'field' => 'counter',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'name' => array(
      'label' => 'Name',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_user' => 1,
      'overwrite_anonymous' => 0,
      'anonymous_text' => '',
      'exclude' => 0,
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'relationship' => 'none',
    ),
    'mail' => array(
      'label' => 'E-mail',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_user' => 'mailto',
      'exclude' => 0,
      'id' => 'mail',
      'table' => 'users',
      'field' => 'mail',
      'relationship' => 'none',
    ),
    'picture' => array(
      'label' => 'Picture',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'exclude' => 0,
      'id' => 'picture',
      'table' => 'users',
      'field' => 'picture',
      'relationship' => 'none',
    ),
    'rid' => array(
      'label' => 'Roles',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'type' => 'separator',
      'separator' => ', ',
      'empty' => '',
      'exclude' => 1,
      'id' => 'rid',
      'table' => 'users_roles',
      'field' => 'rid',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'uid' => array(
      'label' => 'Uid',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'link_to_user' => 1,
      'exclude' => 1,
      'id' => 'uid',
      'table' => 'users',
      'field' => 'uid',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'name_1' => array(
      'label' => 'Statistic',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'exclude' => 0,
      'id' => 'name_1',
      'table' => 'user_stats_values',
      'field' => 'name',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'value' => array(
      'label' => 'Value',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 1,
        'path' => 'user/[uid]/track',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => ',',
      'format_plural' => 0,
      'format_plural_singular' => '1',
      'format_plural_plural' => '@count',
      'prefix' => '',
      'suffix' => '',
      'exclude' => 0,
      'id' => 'value',
      'table' => 'user_stats_values',
      'field' => 'value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
    'access' => array(
      'label' => 'Last access',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'strip_tags' => 0,
        'html' => 0,
      ),
      'date_format' => 'small',
      'custom_date_format' => '',
      'exclude' => 0,
      'id' => 'access',
      'table' => 'users',
      'field' => 'access',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'value' => array(
      'order' => 'DESC',
      'id' => 'value',
      'table' => 'user_stats_values',
      'field' => 'value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'mail' => array(
      'operator' => 'word',
      'value' => '',
      'group' => '0',
      'exposed' => TRUE,
      'expose' => array(
        'use_operator' => 0,
        'operator' => 'mail_op',
        'identifier' => 'mail',
        'label' => 'Search by E-mail',
        'remember' => 0,
      ),
      'case' => 1,
      'id' => 'mail',
      'table' => 'users',
      'field' => 'mail',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'rid' => array(
      'operator' => 'or',
      'value' => array(
        5 => '5',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'rid',
      'table' => 'users_roles',
      'field' => 'rid',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'role',
    'role' => array(
      3 => 3,
      17 => 17,
    ),
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'eKB Forum Participation');
  $handler->override_option('header', '<h3><a href="http://ecwknowledgebase.com/user/directory">Clear Search data</a></h3>');
  $handler->override_option('header_format', '2');
  $handler->override_option('header_empty', 0);
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('items_per_page', 50);
  $handler->override_option('use_pager', '1');
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 1,
    'sticky' => 0,
    'order' => 'desc',
    'columns' => array(
      'counter' => 'counter',
      'name' => 'name',
      'mail' => 'mail',
      'picture' => 'picture',
      'rid' => 'rid',
      'uid' => 'uid',
      'name_1' => 'name_1',
      'value' => 'value',
    ),
    'info' => array(
      'counter' => array(
        'separator' => '',
      ),
      'name' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'mail' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'picture' => array(
        'sortable' => 1,
        'separator' => '',
      ),
      'rid' => array(
        'separator' => '',
      ),
      'uid' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'name_1' => array(
        'separator' => '',
      ),
      'value' => array(
        'sortable' => 1,
        'separator' => '',
      ),
    ),
    'default' => 'value',
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'user/directory');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'primary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}
