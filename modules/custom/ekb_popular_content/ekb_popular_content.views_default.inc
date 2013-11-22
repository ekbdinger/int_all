<?php

/**
 * Implementation of hook_views_default_views().
 */
function ekb_popular_content_views_default_views() {
  $views = array();

  // Exported view: ekb_popular
  $view = new view;
  $view->name = 'ekb_popular';
  $view->description = 'Shows the most-viewed nodes on the site. This requires the statistics to be enabled at administer >> reports >> access log settings.';
  $view->tag = 'default, paul';
  $view->base_table = 'node';
  $view->core = 6;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'type' => array(
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'label' => 'Type',
    ),
    'title' => array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'label' => 'Title',
      'link_to_node' => TRUE,
    ),
    'name' => array(
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'label' => 'Author',
      'link_to_user' => TRUE,
    ),
    'timestamp' => array(
      'id' => 'timestamp',
      'table' => 'history_user',
      'field' => 'timestamp',
      'label' => '',
      'comments' => 1,
      'relationship' => 'none',
      'link_to_node' => 0,
      'comment' => 1,
    ),
    'totalcount' => array(
      'label' => 'Views',
      'alter' => array(
        'alter_text' => 1,
        'text' => '<strong>[totalcount]</strong>',
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
      'id' => 'totalcount',
      'table' => 'node_counter',
      'field' => 'totalcount',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'totalcount' => array(
      'id' => 'totalcount',
      'table' => 'node_counter',
      'field' => 'totalcount',
      'order' => 'DESC',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'operator' => '=',
      'value' => '1',
      'group' => 0,
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
    ),
    'totalcount' => array(
      'id' => 'totalcount',
      'table' => 'node_counter',
      'field' => 'totalcount',
      'operator' => '>',
      'value' => array(
        'value' => '0',
        'min' => '',
        'max' => '',
      ),
      'group' => 0,
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'relationship' => 'none',
    ),
    'type' => array(
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
    'role' => array(),
    'perm' => '',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('title', 'Popular content');
  $handler->override_option('items_per_page', '25');
  $handler->override_option('use_pager', TRUE);
  $handler->override_option('use_more', 1);
  $handler->override_option('style_plugin', 'table');
  $handler->override_option('style_options', array(
    'override' => 0,
    'order' => 'desc',
    'columns' => array(
      'type' => 'type',
      'title' => 'title',
      'name' => 'name',
      'timestamp' => 'title',
      'totalcount' => 'totalcount',
    ),
    'info' => array(
      'type' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'title' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'name' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'timestamp' => array(
        'separator' => '',
      ),
      'totalcount' => array(
        'sortable' => 0,
        'separator' => '',
      ),
    ),
    'default' => '-1',
  ));
  $handler = $view->new_display('page', 'Popular (page)', 'page');
  $handler->override_option('path', 'content/popular/all');
  $handler->override_option('menu', array(
    'type' => 'default tab',
    'title' => 'Popular content',
    'description' => '',
    'weight' => '-1',
    'name' => 'primary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'normal',
    'title' => 'Popular content',
    'description' => '',
    'weight' => '',
    'name' => 'navigation',
  ));
  $handler = $view->new_display('page', 'Today (page)', 'page_1');
  $handler->override_option('fields', array(
    'type' => array(
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'label' => 'Type',
    ),
    'title' => array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'label' => 'Title',
      'link_to_node' => TRUE,
    ),
    'name' => array(
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'label' => 'Author',
      'link_to_user' => TRUE,
    ),
    'timestamp' => array(
      'id' => 'timestamp',
      'table' => 'history_user',
      'field' => 'timestamp',
      'label' => '',
      'comments' => 1,
      'relationship' => 'none',
      'link_to_node' => 0,
      'comment' => 1,
    ),
    'daycount' => array(
      'id' => 'daycount',
      'table' => 'node_counter',
      'field' => 'daycount',
      'label' => 'Views today',
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => ',',
      'prefix' => '',
      'suffix' => '',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'daycount' => array(
      'id' => 'daycount',
      'table' => 'node_counter',
      'field' => 'daycount',
      'order' => 'DESC',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('path', 'content/popular/today');
  $handler->override_option('menu', array(
    'type' => 'tab',
    'title' => 'Today\'s popular content',
    'description' => '',
    'weight' => '0',
    'name' => 'primary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'normal',
    'title' => 'Popular content',
    'description' => '',
    'weight' => '0',
    'name' => 'navigation',
  ));
  $handler = $view->new_display('block', 'Popular (block)', 'block');
  $handler->override_option('fields', array(
    'title' => array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'label' => '',
      'link_to_node' => 1,
      'relationship' => 'none',
    ),
    'totalcount' => array(
      'id' => 'totalcount',
      'table' => 'node_counter',
      'field' => 'totalcount',
      'label' => '',
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => ',',
      'prefix' => ' (',
      'suffix' => ')',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('items_per_page', 5);
  $handler->override_option('style_plugin', 'list');
  $handler->override_option('style_options', array(
    'type' => 'ul',
  ));
  $handler->override_option('row_options', array(
    'inline' => array(
      'title' => 'title',
      'totalcount' => 'totalcount',
    ),
    'separator' => '',
  ));
  $handler->override_option('block_description', 'Popular content');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('block', 'Today (block)', 'block_1');
  $handler->override_option('fields', array(
    'title' => array(
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'label' => '',
      'link_to_node' => 1,
      'relationship' => 'none',
    ),
    'daycount' => array(
      'id' => 'daycount',
      'table' => 'node_counter',
      'field' => 'daycount',
      'label' => '',
      'set_precision' => FALSE,
      'precision' => 0,
      'decimal' => '.',
      'separator' => ',',
      'prefix' => ' (',
      'suffix' => ')',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('sorts', array(
    'daycount' => array(
      'id' => 'daycount',
      'table' => 'node_counter',
      'field' => 'daycount',
      'order' => 'DESC',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('title', 'Today\'s popular content');
  $handler->override_option('items_per_page', 5);
  $handler->override_option('link_display', 'page_1');
  $handler->override_option('style_plugin', 'list');
  $handler->override_option('style_options', array(
    'type' => 'ul',
  ));
  $handler->override_option('row_options', array(
    'inline' => array(
      'title' => 'title',
      'daycount' => 'daycount',
    ),
    'separator' => '',
  ));
  $handler->override_option('block_description', 'Today\'s popular content');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('page', '(Forum) Page', 'page_2');
  $handler->override_option('fields', array(
    'type' => array(
      'label' => 'Type',
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
      'link_to_node' => 0,
      'machine_name' => 0,
      'exclude' => 1,
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'title' => array(
      'label' => 'Title',
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
        'trim' => 1,
        'max_length' => '90',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'name_1' => array(
      'label' => 'Category',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => 'forum/[name_1]',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 1,
        'max_length' => '30',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_taxonomy' => 1,
      'exclude' => 0,
      'id' => 'name_1',
      'table' => 'term_data',
      'field' => 'name',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'name' => array(
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'label' => 'Author',
      'link_to_user' => TRUE,
    ),
    'timestamp' => array(
      'id' => 'timestamp',
      'table' => 'history_user',
      'field' => 'timestamp',
      'label' => '',
      'comments' => 1,
      'relationship' => 'none',
      'link_to_node' => 0,
      'comment' => 1,
    ),
    'totalcount' => array(
      'label' => 'Views',
      'alter' => array(
        'alter_text' => 1,
        'text' => '<strong>&nbsp;[totalcount]</strong>',
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
      'id' => 'totalcount',
      'table' => 'node_counter',
      'field' => 'totalcount',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'created' => array(
      'label' => 'Post date',
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
      'date_format' => 'custom',
      'custom_date_format' => 'm/d/Y',
      'exclude' => 1,
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'operator' => '=',
      'value' => '1',
      'group' => 0,
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
    ),
    'totalcount' => array(
      'id' => 'totalcount',
      'table' => 'node_counter',
      'field' => 'totalcount',
      'operator' => '>',
      'value' => array(
        'value' => '0',
        'min' => '',
        'max' => '',
      ),
      'group' => 0,
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'forum' => 'forum',
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
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'role',
    'role' => array(
      3 => 3,
      5 => 5,
    ),
  ));
  $handler->override_option('items_per_page', 50);
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 0,
    'sticky' => 0,
    'order' => 'desc',
    'summary' => '',
    'columns' => array(
      'type' => 'type',
      'title' => 'title',
      'name_1' => 'name_1',
      'name' => 'name',
      'timestamp' => 'title',
      'totalcount' => 'totalcount',
      'created' => 'created',
    ),
    'info' => array(
      'type' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'title' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'name_1' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'name' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'timestamp' => array(
        'separator' => '',
      ),
      'totalcount' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'created' => array(
        'sortable' => 1,
        'separator' => '',
      ),
    ),
    'default' => '-1',
  ));
  $handler->override_option('path', 'content/popular/forum/all');
  $handler->override_option('menu', array(
    'type' => 'tab',
    'title' => 'Popular Forum Content',
    'description' => '',
    'weight' => '+2',
    'name' => 'primary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));
  $handler = $view->new_display('page', 'Forum Popular today', 'page_3');
  $handler->override_option('fields', array(
    'type' => array(
      'label' => 'Type',
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
      'link_to_node' => 0,
      'machine_name' => 0,
      'exclude' => 1,
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'title' => array(
      'label' => 'Title',
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
        'trim' => 1,
        'max_length' => '90',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_node' => 1,
      'exclude' => 0,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'name_1' => array(
      'label' => 'Category',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => 'forum/[name_1]',
        'absolute' => 0,
        'link_class' => '',
        'alt' => '',
        'rel' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 1,
        'max_length' => '30',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'hide_alter_empty' => 1,
      'link_to_taxonomy' => 1,
      'exclude' => 0,
      'id' => 'name_1',
      'table' => 'term_data',
      'field' => 'name',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'name' => array(
      'id' => 'name',
      'table' => 'users',
      'field' => 'name',
      'label' => 'Author',
      'link_to_user' => TRUE,
    ),
    'timestamp' => array(
      'id' => 'timestamp',
      'table' => 'history_user',
      'field' => 'timestamp',
      'label' => '',
      'comments' => 1,
      'relationship' => 'none',
      'link_to_node' => 0,
      'comment' => 1,
    ),
    'created' => array(
      'label' => 'Post date',
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
      'date_format' => 'custom',
      'custom_date_format' => 'm/d/Y',
      'exclude' => 1,
      'id' => 'created',
      'table' => 'node',
      'field' => 'created',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
    'daycount' => array(
      'label' => 'Views today',
      'alter' => array(
        'alter_text' => 1,
        'text' => '<strong>&nbsp;[daycount]</strong>',
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
      'id' => 'daycount',
      'table' => 'node_counter',
      'field' => 'daycount',
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'status' => array(
      'id' => 'status',
      'table' => 'node',
      'field' => 'status',
      'operator' => '=',
      'value' => '1',
      'group' => 0,
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
    ),
    'totalcount' => array(
      'id' => 'totalcount',
      'table' => 'node_counter',
      'field' => 'totalcount',
      'operator' => '>',
      'value' => array(
        'value' => '0',
        'min' => '',
        'max' => '',
      ),
      'group' => 0,
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'relationship' => 'none',
    ),
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'forum' => 'forum',
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
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'role',
    'role' => array(
      3 => 3,
      5 => 5,
    ),
  ));
  $handler->override_option('items_per_page', 20);
  $handler->override_option('style_options', array(
    'grouping' => '',
    'override' => 0,
    'sticky' => 0,
    'order' => 'desc',
    'summary' => '',
    'columns' => array(
      'type' => 'type',
      'title' => 'title',
      'name_1' => 'name_1',
      'name' => 'name',
      'timestamp' => 'title',
      'totalcount' => 'totalcount',
      'created' => 'created',
    ),
    'info' => array(
      'type' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'title' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'name_1' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'name' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'timestamp' => array(
        'separator' => '',
      ),
      'totalcount' => array(
        'sortable' => 0,
        'separator' => '',
      ),
      'created' => array(
        'sortable' => 1,
        'separator' => '',
      ),
    ),
    'default' => '-1',
  ));
  $handler->override_option('path', 'content/popular/forum/today');
  $handler->override_option('menu', array(
    'type' => 'tab',
    'title' => 'Popular Forum Content Today',
    'description' => '',
    'weight' => '+4',
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
