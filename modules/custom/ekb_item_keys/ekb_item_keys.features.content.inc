<?php

/**
 * Implementation of hook_content_default_fields().
 */
function ekb_item_keys_content_default_fields() {
  $fields = array();

  // Exported field: field__item_key_related
  $fields['item_key-field__item_key_related'] = array(
    'field_name' => 'field__item_key_related',
    'type_name' => 'item_key',
    'display_settings' => array(
      'weight' => '-1',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'blog' => 'blog',
      'dv' => 'dv',
      'forum' => 'forum',
      'item_key' => 'item_key',
      'story' => 'story',
      'page' => 'page',
      'kb_partner_pages' => 'kb_partner_pages',
      'primary_page_content' => 'primary_page_content',
      'train_supp_issue' => 'train_supp_issue',
      'addit_content' => 0,
      'admin_content' => 0,
      'definition' => 0,
      'internal' => 0,
      'internal_documentation' => 0,
      'link_content_type' => 0,
      'multichoice' => 0,
      'pm_doc' => 0,
      'pm_news' => 0,
      'panel' => 0,
      'quiz' => 0,
      'to_be_reviewed' => 0,
      'truefalse' => 0,
      'video_embed' => 0,
      'webform' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field__item_key_related][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Related Pages',
      'weight' => '-1',
      'description' => 'If there are any pages where this information might be helpful.  ',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_item_key_pics
  $fields['item_key-field_item_key_pics'] = array(
    'field_name' => 'field_item_key_pics',
    'type_name' => 'item_key',
    'display_settings' => array(
      'weight' => 0,
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '1',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'training_dept/item_keys/screenshots',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '4M',
      'max_filesize_per_node' => '6M',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Screenshots',
      'weight' => 0,
      'description' => 'Upload any screenshots related to this item key',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_item_key_source
  $fields['item_key-field_item_key_source'] = array(
    'field_name' => 'field_item_key_source',
    'type_name' => 'item_key',
    'display_settings' => array(
      'weight' => '-2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'optional',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => 1,
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Source',
      'weight' => '-2',
      'description' => 'page where we found this information.  Could be from an email, old forum, or another place.  ',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Related Pages');
  t('Screenshots');
  t('Source');

  return $fields;
}
