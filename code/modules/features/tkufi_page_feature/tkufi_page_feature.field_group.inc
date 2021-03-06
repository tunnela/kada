<?php
/**
 * @file
 * tkufi_page_feature.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tkufi_page_feature_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|page|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '0',
    'children' => array(
      0 => 'body',
      1 => 'field_info_box',
      2 => 'field_related_content',
      3 => 'field_theme',
      4 => 'field_district',
      5 => 'field_keywords',
      6 => 'field_main_image',
      7 => 'field_target_audience',
      8 => 'field_info_box_bottom',
      9 => 'field_tweet_embed',
      10 => 'field_contact_information',
      11 => 'language',
      12 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Content',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-content field-group-tab',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_content|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recommended_links|node|page|form';
  $field_group->group_name = 'group_recommended_links';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Recommended links',
    'weight' => '5',
    'children' => array(
      0 => 'field_link_to_content_multiple',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-recommended-links field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_recommended_links|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_section|node|page|form';
  $field_group->group_name = 'group_section';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Section',
    'weight' => '3',
    'children' => array(
      0 => 'og_group_ref',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-section field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_section|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_subpages|node|page|form';
  $field_group->group_name = 'group_subpages';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Subpages',
    'weight' => '2',
    'children' => array(
      0 => 'field_subpage',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-subpages field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_subpages|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_topics|node|page|form';
  $field_group->group_name = 'group_topics';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Topics',
    'weight' => '1',
    'children' => array(
      0 => 'field_topic',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Topics',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-topics field-group-tab',
        'description' => 'Topics are attached to service packages and they will appear as a list with images in a grid',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_topics|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_widgets|node|page|form';
  $field_group->group_name = 'group_widgets';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Widgets',
    'weight' => '4',
    'children' => array(
      0 => 'field_feed_tabs',
      1 => 'field_theme_main_page',
      2 => 'field_widget_before_content',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-widgets field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_widgets|node|page|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content');
  t('Recommended links');
  t('Section');
  t('Subpages');
  t('Topics');
  t('Widgets');

  return $field_groups;
}
