<?php

/**
 * @file
 * cambridge_datasets.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function cambridge_datasets_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'administration';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Administration';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Administration';
  $handler->display->display_options['css_class'] = 'campl-content-container';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'access user profiles';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Mail</h2>
<p>Set up <b>SMTP Settings</b> first, then click <b>Send test email</b> to send test email to site administrator (email entered during setup). To test your mail queue cron job, click <b>Add test email to queue</b>.</p>
<a href="#overlay=admin/config/system/smtp"><button type="button">SMTP Settings</button></a> <a href="cambridge_datasets/testemail"><button type="button">Send test email</button></a> <a href="cambridge_datasets/addtestmessagequeue"><button type="button">Add test email to queue</button></a>

<h2>Users</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="#overlay=admin/people/create"><button type="button">Add user</button></a>
';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'User';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  /* Sort criterion: User: Created date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'users';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: User: Active status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'administration';
  $export['administration'] = $view;

  $view = new view();
  $view->name = 'all_applications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'All Applications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Applications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'nid' => 'nid',
    'title' => 'title',
    'field_user_firstname' => 'field_user_firstname',
    'field_user_lastname' => 'field_user_lastname',
    'field_user_institution' => 'field_user_institution',
    'field_user_proposal' => 'field_user_proposal',
    'field_reviewers' => 'field_reviewers',
    'field_datasets' => 'field_datasets',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_firstname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_lastname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_institution' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_proposal' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reviewers' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_datasets' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="campl-content-container">All applications that you have access to are shown below</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="campl-content-container">
<h2><i>No applications</i></h2>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Reviewers (field_reviewers) */
  $handler->display->display_options['relationships']['field_reviewers_value']['id'] = 'field_reviewers_value';
  $handler->display->display_options['relationships']['field_reviewers_value']['table'] = 'field_data_field_reviewers';
  $handler->display->display_options['relationships']['field_reviewers_value']['field'] = 'field_reviewers_value';
  $handler->display->display_options['relationships']['field_reviewers_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_reviewers_value']['delta'] = '-1';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '0';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'reviewallapplications/?page=[counter]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['exclude'] = TRUE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['exclude'] = TRUE;
  /* Field: Content: Institution */
  $handler->display->display_options['fields']['field_user_institution']['id'] = 'field_user_institution';
  $handler->display->display_options['fields']['field_user_institution']['table'] = 'field_data_field_user_institution';
  $handler->display->display_options['fields']['field_user_institution']['field'] = 'field_user_institution';
  $handler->display->display_options['fields']['field_user_institution']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Applicant';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_user_firstname] [field_user_lastname]<br/>
[field_user_institution]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Proposal */
  $handler->display->display_options['fields']['field_user_proposal']['id'] = 'field_user_proposal';
  $handler->display->display_options['fields']['field_user_proposal']['table'] = 'field_data_field_user_proposal';
  $handler->display->display_options['fields']['field_user_proposal']['field'] = 'field_user_proposal';
  $handler->display->display_options['fields']['field_user_proposal']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['field_user_proposal']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '300',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'trim_options' => array(
      'text' => 0,
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Content: Reviewers */
  $handler->display->display_options['fields']['field_reviewers']['id'] = 'field_reviewers';
  $handler->display->display_options['fields']['field_reviewers']['table'] = 'field_data_field_reviewers';
  $handler->display->display_options['fields']['field_reviewers']['field'] = 'field_reviewers';
  $handler->display->display_options['fields']['field_reviewers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reviewers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reviewers']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_reviewers']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_reviewers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_reviewers']['separator'] = '';
  /* Field: Content: Datasets */
  $handler->display->display_options['fields']['field_datasets']['id'] = 'field_datasets';
  $handler->display->display_options['fields']['field_datasets']['table'] = 'field_data_field_datasets';
  $handler->display->display_options['fields']['field_datasets']['field'] = 'field_datasets';
  $handler->display->display_options['fields']['field_datasets']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_datasets']['alter']['text'] = '[field_datasets]';
  $handler->display->display_options['fields']['field_datasets']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_datasets']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_datasets']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_datasets']['separator'] = '';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Submitted';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'cambridge_events_day_only';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field collection item: Reviewer (field_reviewer) */
  $handler->display->display_options['arguments']['field_reviewer_target_id']['id'] = 'field_reviewer_target_id';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['table'] = 'field_data_field_reviewer';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['field'] = 'field_reviewer_target_id';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['relationship'] = 'field_reviewers_value';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'application' => 'application',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'applications_all';
  $export['all_applications'] = $view;

  $view = new view();
  $view->name = 'applications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Pending Applications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Pending Applications';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'nid' => 'nid',
    'title' => 'title',
    'field_user_firstname' => 'field_user_firstname',
    'field_user_lastname' => 'field_user_lastname',
    'field_user_institution' => 'field_user_institution',
    'field_user_proposal' => 'field_user_proposal',
    'field_reviewers' => 'field_reviewers',
    'field_datasets' => 'field_datasets',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_firstname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_lastname' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_institution' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_proposal' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reviewers' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_datasets' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="campl-content-container">Items will only be removed from this list once they have been processed by the final reviewer.</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="campl-content-container">
<h2><i>No pending applications</i></h2>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Reviewers (field_reviewers) */
  $handler->display->display_options['relationships']['field_reviewers_value']['id'] = 'field_reviewers_value';
  $handler->display->display_options['relationships']['field_reviewers_value']['table'] = 'field_data_field_reviewers';
  $handler->display->display_options['relationships']['field_reviewers_value']['field'] = 'field_reviewers_value';
  $handler->display->display_options['relationships']['field_reviewers_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_reviewers_value']['delta'] = '-1';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['counter']['counter_start'] = '0';
  $handler->display->display_options['fields']['counter']['reverse'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '[title]';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'reviewapplications/?page=[counter]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['exclude'] = TRUE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['exclude'] = TRUE;
  /* Field: Content: Institution */
  $handler->display->display_options['fields']['field_user_institution']['id'] = 'field_user_institution';
  $handler->display->display_options['fields']['field_user_institution']['table'] = 'field_data_field_user_institution';
  $handler->display->display_options['fields']['field_user_institution']['field'] = 'field_user_institution';
  $handler->display->display_options['fields']['field_user_institution']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Applicant';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_user_firstname] [field_user_lastname]<br/>
[field_user_institution]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Proposal */
  $handler->display->display_options['fields']['field_user_proposal']['id'] = 'field_user_proposal';
  $handler->display->display_options['fields']['field_user_proposal']['table'] = 'field_data_field_user_proposal';
  $handler->display->display_options['fields']['field_user_proposal']['field'] = 'field_user_proposal';
  $handler->display->display_options['fields']['field_user_proposal']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['field_user_proposal']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '300',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'trim_options' => array(
      'text' => 0,
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Content: Reviewers */
  $handler->display->display_options['fields']['field_reviewers']['id'] = 'field_reviewers';
  $handler->display->display_options['fields']['field_reviewers']['table'] = 'field_data_field_reviewers';
  $handler->display->display_options['fields']['field_reviewers']['field'] = 'field_reviewers';
  $handler->display->display_options['fields']['field_reviewers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reviewers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reviewers']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_reviewers']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_reviewers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_reviewers']['separator'] = '';
  /* Field: Content: Datasets */
  $handler->display->display_options['fields']['field_datasets']['id'] = 'field_datasets';
  $handler->display->display_options['fields']['field_datasets']['table'] = 'field_data_field_datasets';
  $handler->display->display_options['fields']['field_datasets']['field'] = 'field_datasets';
  $handler->display->display_options['fields']['field_datasets']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_datasets']['alter']['text'] = '[field_datasets]';
  $handler->display->display_options['fields']['field_datasets']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_datasets']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_datasets']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_datasets']['separator'] = '';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Submitted';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'cambridge_events_day_only';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field collection item: Reviewer (field_reviewer) */
  $handler->display->display_options['arguments']['field_reviewer_target_id']['id'] = 'field_reviewer_target_id';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['table'] = 'field_data_field_reviewer';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['field'] = 'field_reviewer_target_id';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['relationship'] = 'field_reviewers_value';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'application' => 'application',
  );
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Submitted' => 'Submitted',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'applications';
  $export['applications'] = $view;

  $view = new view();
  $view->name = 'applications_reviewers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Edit Applications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Edit Applications';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_collection' => 'field_collection',
    'field_user_firstname' => 'field_user_firstname',
    'field_user_lastname' => 'field_user_lastname',
    'field_user_institution' => 'field_user_institution',
    'field_user_proposal' => 'field_user_proposal',
    'field_reviewers' => 'field_reviewers',
    'field_datasets' => 'field_datasets',
    'field_status' => 'field_status',
    'created' => 'created',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_collection' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_firstname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_lastname' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_institution' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_user_proposal' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reviewers' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_datasets' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['content'] = '<div class="campl-content-container">Displaying @start - @end of @total</div>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="campl-content-container">
<h2><i>No applications</i></h2>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Collection */
  $handler->display->display_options['fields']['field_collection']['id'] = 'field_collection';
  $handler->display->display_options['fields']['field_collection']['table'] = 'field_data_field_collection';
  $handler->display->display_options['fields']['field_collection']['field'] = 'field_collection';
  $handler->display->display_options['fields']['field_collection']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['exclude'] = TRUE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_user_lastname']['id'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname']['exclude'] = TRUE;
  /* Field: Content: Institution */
  $handler->display->display_options['fields']['field_user_institution']['id'] = 'field_user_institution';
  $handler->display->display_options['fields']['field_user_institution']['table'] = 'field_data_field_user_institution';
  $handler->display->display_options['fields']['field_user_institution']['field'] = 'field_user_institution';
  $handler->display->display_options['fields']['field_user_institution']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Applicant';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_user_firstname] [field_user_lastname]<br/>
[field_user_institution]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Proposal */
  $handler->display->display_options['fields']['field_user_proposal']['id'] = 'field_user_proposal';
  $handler->display->display_options['fields']['field_user_proposal']['table'] = 'field_data_field_user_proposal';
  $handler->display->display_options['fields']['field_user_proposal']['field'] = 'field_user_proposal';
  $handler->display->display_options['fields']['field_user_proposal']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_user_proposal']['type'] = 'smart_trim_format';
  $handler->display->display_options['fields']['field_user_proposal']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '300',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'trim_options' => array(
      'text' => 0,
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Content: Reviewers */
  $handler->display->display_options['fields']['field_reviewers']['id'] = 'field_reviewers';
  $handler->display->display_options['fields']['field_reviewers']['table'] = 'field_data_field_reviewers';
  $handler->display->display_options['fields']['field_reviewers']['field'] = 'field_reviewers';
  $handler->display->display_options['fields']['field_reviewers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_reviewers']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_reviewers']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_reviewers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_reviewers']['separator'] = '';
  /* Field: Content: Datasets */
  $handler->display->display_options['fields']['field_datasets']['id'] = 'field_datasets';
  $handler->display->display_options['fields']['field_datasets']['table'] = 'field_data_field_datasets';
  $handler->display->display_options['fields']['field_datasets']['field'] = 'field_datasets';
  $handler->display->display_options['fields']['field_datasets']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_datasets']['alter']['text'] = '[field_datasets]';
  $handler->display->display_options['fields']['field_datasets']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_datasets']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_datasets']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_datasets']['multi_type'] = 'count';
  $handler->display->display_options['fields']['field_datasets']['separator'] = '';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Submitted';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'cambridge_events_day_only';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'application' => 'application',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: First Name (field_user_firstname) */
  $handler->display->display_options['filters']['field_user_firstname_value']['id'] = 'field_user_firstname_value';
  $handler->display->display_options['filters']['field_user_firstname_value']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['filters']['field_user_firstname_value']['field'] = 'field_user_firstname_value';
  $handler->display->display_options['filters']['field_user_firstname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_firstname_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_firstname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_firstname_value']['expose']['operator_id'] = 'field_user_firstname_value_op';
  $handler->display->display_options['filters']['field_user_firstname_value']['expose']['label'] = 'First Name';
  $handler->display->display_options['filters']['field_user_firstname_value']['expose']['operator'] = 'field_user_firstname_value_op';
  $handler->display->display_options['filters']['field_user_firstname_value']['expose']['identifier'] = 'field_user_firstname_value';
  $handler->display->display_options['filters']['field_user_firstname_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Content: Last Name (field_user_lastname) */
  $handler->display->display_options['filters']['field_user_lastname_value']['id'] = 'field_user_lastname_value';
  $handler->display->display_options['filters']['field_user_lastname_value']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['filters']['field_user_lastname_value']['field'] = 'field_user_lastname_value';
  $handler->display->display_options['filters']['field_user_lastname_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_lastname_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_lastname_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['operator_id'] = 'field_user_lastname_value_op';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['label'] = 'Last Name';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['operator'] = 'field_user_lastname_value_op';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['identifier'] = 'field_user_lastname_value';
  $handler->display->display_options['filters']['field_user_lastname_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Content: Institution (field_user_institution) */
  $handler->display->display_options['filters']['field_user_institution_value']['id'] = 'field_user_institution_value';
  $handler->display->display_options['filters']['field_user_institution_value']['table'] = 'field_data_field_user_institution';
  $handler->display->display_options['filters']['field_user_institution_value']['field'] = 'field_user_institution_value';
  $handler->display->display_options['filters']['field_user_institution_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_institution_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_institution_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_institution_value']['expose']['operator_id'] = 'field_user_institution_value_op';
  $handler->display->display_options['filters']['field_user_institution_value']['expose']['label'] = 'Institution';
  $handler->display->display_options['filters']['field_user_institution_value']['expose']['operator'] = 'field_user_institution_value_op';
  $handler->display->display_options['filters']['field_user_institution_value']['expose']['identifier'] = 'field_user_institution_value';
  $handler->display->display_options['filters']['field_user_institution_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Content: Email (field_user_email) */
  $handler->display->display_options['filters']['field_user_email_value']['id'] = 'field_user_email_value';
  $handler->display->display_options['filters']['field_user_email_value']['table'] = 'field_data_field_user_email';
  $handler->display->display_options['filters']['field_user_email_value']['field'] = 'field_user_email_value';
  $handler->display->display_options['filters']['field_user_email_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_email_value']['group'] = 1;
  $handler->display->display_options['filters']['field_user_email_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_email_value']['expose']['operator_id'] = 'field_user_email_value_op';
  $handler->display->display_options['filters']['field_user_email_value']['expose']['label'] = 'Email';
  $handler->display->display_options['filters']['field_user_email_value']['expose']['operator'] = 'field_user_email_value_op';
  $handler->display->display_options['filters']['field_user_email_value']['expose']['identifier'] = 'field_user_email_value';
  $handler->display->display_options['filters']['field_user_email_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status (field_status)';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'applications_admin';
  $export['applications_reviewers'] = $view;

  $view = new view();
  $view->name = 'collections';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Collections';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dataset Collections';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title_1' => 'title_1',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<div class="campl-content-container">
<h2><i>No dataset collections</i></h2>
</div>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Title';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

global $user;
if (is_array($user->roles) && in_array(\'administrator\', $user->roles)) 
{
print \'<a href="node/\'.$row->nid.\'"><img align="middle" src="/profiles/cambridge_datasets_application/modules/features/cambridge_datasets/images/edit.png"></a>&nbsp;&nbsp;\';
}
else
{
}

print $row->title;

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Overview';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = 'Overview';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'overview/[nid]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['label'] = 'Apply';
  $handler->display->display_options['fields']['title_2']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['text'] = 'Apply';
  $handler->display->display_options['fields']['title_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_2']['alter']['path'] = 'cambridge_datasets/apply/[nid]';
  $handler->display->display_options['fields']['title_2']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'collection' => 'collection',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'collections';
  $export['collections'] = $view;

  $view = new view();
  $view->name = 'datasets';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Datasets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Datasets';
  $handler->display->display_options['css_class'] = 'campl-content-container';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_code' => 'field_code',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = 'field_code';
  $handler->display->display_options['style_options']['info'] = array(
    'field_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_collection_target_id']['id'] = 'field_collection_target_id';
  $handler->display->display_options['relationships']['field_collection_target_id']['table'] = 'field_data_field_collection';
  $handler->display->display_options['relationships']['field_collection_target_id']['field'] = 'field_collection_target_id';
  $handler->display->display_options['relationships']['field_collection_target_id']['required'] = TRUE;
  /* Field: Content: Code */
  $handler->display->display_options['fields']['field_code']['id'] = 'field_code';
  $handler->display->display_options['fields']['field_code']['table'] = 'field_data_field_code';
  $handler->display->display_options['fields']['field_code']['field'] = 'field_code';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Sort criterion: Content: Code (field_code) */
  $handler->display->display_options['sorts']['field_code_value_1']['id'] = 'field_code_value_1';
  $handler->display->display_options['sorts']['field_code_value_1']['table'] = 'field_data_field_code';
  $handler->display->display_options['sorts']['field_code_value_1']['field'] = 'field_code_value';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_collection_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '1';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dataset' => 'dataset',
  );
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember_roles'] = array(
    2 => '2',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'datasets';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_code' => 'field_code',
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = 'field_code';
  $handler->display->display_options['style_options']['info'] = array(
    'field_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['block_description'] = 'Datasets';
  $export['datasets'] = $view;

  $view = new view();
  $view->name = 'field_collection_view_datasets';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Field collection view - Datasets';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'item_id' => 'item_id',
    'field_resume_job_title' => 'field_resume_job_title',
    'field_resume_time_period' => 'field_resume_time_period',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'item_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_resume_job_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_resume_time_period' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '[nothing_2]';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dataset_target_id']['id'] = 'field_dataset_target_id';
  $handler->display->display_options['relationships']['field_dataset_target_id']['table'] = 'field_data_field_dataset';
  $handler->display->display_options['relationships']['field_dataset_target_id']['field'] = 'field_dataset_target_id';
  $handler->display->display_options['relationships']['field_dataset_target_id']['required'] = TRUE;
  /* Field: Content: Code */
  $handler->display->display_options['fields']['field_code']['id'] = 'field_code';
  $handler->display->display_options['fields']['field_code']['table'] = 'field_data_field_code';
  $handler->display->display_options['fields']['field_code']['field'] = 'field_code';
  $handler->display->display_options['fields']['field_code']['relationship'] = 'field_dataset_target_id';
  /* Field: Content: Dataset Title */
  $handler->display->display_options['fields']['field_datasettitle']['id'] = 'field_datasettitle';
  $handler->display->display_options['fields']['field_datasettitle']['table'] = 'field_data_field_datasettitle';
  $handler->display->display_options['fields']['field_datasettitle']['field'] = 'field_datasettitle';
  $handler->display->display_options['fields']['field_datasettitle']['relationship'] = 'field_dataset_target_id';
  $handler->display->display_options['fields']['field_datasettitle']['label'] = 'Title';
  $handler->display->display_options['fields']['field_datasettitle']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Dataset */
  $handler->display->display_options['fields']['field_dataset']['id'] = 'field_dataset';
  $handler->display->display_options['fields']['field_dataset']['table'] = 'field_data_field_dataset';
  $handler->display->display_options['fields']['field_dataset']['field'] = 'field_dataset';
  $handler->display->display_options['fields']['field_dataset']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dataset']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = '';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_path]/[item_id]/edit?destination=[host_entity_path]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '[field_path]/[item_id]/delete?destination=[host_entity_path]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<button class="cambridge-dataset-add-button" type="button">Add</button>

';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '[field_path]/add/[host_entity_type]/[host_entity_id]?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Sort criterion: Field collection item: Field collection item ID */
  $handler->display->display_options['sorts']['item_id']['id'] = 'item_id';
  $handler->display->display_options['sorts']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['sorts']['item_id']['field'] = 'item_id';
  /* Contextual filter: Field collection item: Field collection item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['item_id']['break_phrase'] = TRUE;
  $export['field_collection_view_datasets'] = $view;

  $view = new view();
  $view->name = 'field_collection_view_datasets_read_only_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Field collection view - Datasets (Read only)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_code' => 'field_code',
    'field_datasettitle' => 'field_datasettitle',
    'field_dataset' => 'field_dataset',
    'item_id' => 'item_id',
    'field_path' => 'field_path',
    'host_entity_id' => 'host_entity_id',
    'host_entity_path' => 'host_entity_path',
    'host_entity_type' => 'host_entity_type',
    'nothing' => 'nothing',
    'nothing_1' => 'nothing_1',
    'nothing_2' => 'nothing_2',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_datasettitle' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dataset' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'item_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'host_entity_id' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'host_entity_path' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'host_entity_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing_2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_dataset_target_id']['id'] = 'field_dataset_target_id';
  $handler->display->display_options['relationships']['field_dataset_target_id']['table'] = 'field_data_field_dataset';
  $handler->display->display_options['relationships']['field_dataset_target_id']['field'] = 'field_dataset_target_id';
  $handler->display->display_options['relationships']['field_dataset_target_id']['required'] = TRUE;
  /* Field: Content: Code */
  $handler->display->display_options['fields']['field_code']['id'] = 'field_code';
  $handler->display->display_options['fields']['field_code']['table'] = 'field_data_field_code';
  $handler->display->display_options['fields']['field_code']['field'] = 'field_code';
  $handler->display->display_options['fields']['field_code']['relationship'] = 'field_dataset_target_id';
  $handler->display->display_options['fields']['field_code']['element_label_colon'] = FALSE;
  /* Field: Content: Dataset Title */
  $handler->display->display_options['fields']['field_datasettitle']['id'] = 'field_datasettitle';
  $handler->display->display_options['fields']['field_datasettitle']['table'] = 'field_data_field_datasettitle';
  $handler->display->display_options['fields']['field_datasettitle']['field'] = 'field_datasettitle';
  $handler->display->display_options['fields']['field_datasettitle']['relationship'] = 'field_dataset_target_id';
  $handler->display->display_options['fields']['field_datasettitle']['label'] = 'Title';
  $handler->display->display_options['fields']['field_datasettitle']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Dataset */
  $handler->display->display_options['fields']['field_dataset']['id'] = 'field_dataset';
  $handler->display->display_options['fields']['field_dataset']['table'] = 'field_data_field_dataset';
  $handler->display->display_options['fields']['field_dataset']['field'] = 'field_dataset';
  $handler->display->display_options['fields']['field_dataset']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dataset']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = '';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_path]/[item_id]/edit?destination=[host_entity_path]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '[field_path]/[item_id]/delete?destination=[host_entity_path]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = 'Add';
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '[field_path]/add/[host_entity_type]/[host_entity_id]?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Sort criterion: Field collection item: Field collection item ID */
  $handler->display->display_options['sorts']['item_id']['id'] = 'item_id';
  $handler->display->display_options['sorts']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['sorts']['item_id']['field'] = 'item_id';
  /* Contextual filter: Field collection item: Field collection item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['item_id']['break_phrase'] = TRUE;
  /* Filter criterion: Content: Code (field_code) */
  $handler->display->display_options['filters']['field_code_value']['id'] = 'field_code_value';
  $handler->display->display_options['filters']['field_code_value']['table'] = 'field_data_field_code';
  $handler->display->display_options['filters']['field_code_value']['field'] = 'field_code_value';
  $handler->display->display_options['filters']['field_code_value']['relationship'] = 'field_dataset_target_id';
  $handler->display->display_options['filters']['field_code_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_code_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_code_value']['expose']['operator_id'] = 'field_code_value_op';
  $handler->display->display_options['filters']['field_code_value']['expose']['label'] = 'Code';
  $handler->display->display_options['filters']['field_code_value']['expose']['operator'] = 'field_code_value_op';
  $handler->display->display_options['filters']['field_code_value']['expose']['identifier'] = 'field_code_value';
  $handler->display->display_options['filters']['field_code_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Content: Dataset Title (field_datasettitle) */
  $handler->display->display_options['filters']['field_datasettitle_value']['id'] = 'field_datasettitle_value';
  $handler->display->display_options['filters']['field_datasettitle_value']['table'] = 'field_data_field_datasettitle';
  $handler->display->display_options['filters']['field_datasettitle_value']['field'] = 'field_datasettitle_value';
  $handler->display->display_options['filters']['field_datasettitle_value']['relationship'] = 'field_dataset_target_id';
  $handler->display->display_options['filters']['field_datasettitle_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_datasettitle_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_datasettitle_value']['expose']['operator_id'] = 'field_datasettitle_value_op';
  $handler->display->display_options['filters']['field_datasettitle_value']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['field_datasettitle_value']['expose']['operator'] = 'field_datasettitle_value_op';
  $handler->display->display_options['filters']['field_datasettitle_value']['expose']['identifier'] = 'field_datasettitle_value';
  $handler->display->display_options['filters']['field_datasettitle_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  $export['field_collection_view_datasets_read_only_'] = $view;

  $view = new view();
  $view->name = 'field_collection_view_reviewers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Field collection view - Reviewers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'item_id' => 'item_id',
    'field_resume_job_title' => 'field_resume_job_title',
    'field_resume_time_period' => 'field_resume_time_period',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'item_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_resume_job_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_resume_time_period' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '[nothing_2]';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_reviewer_target_id']['id'] = 'field_reviewer_target_id';
  $handler->display->display_options['relationships']['field_reviewer_target_id']['table'] = 'field_data_field_reviewer';
  $handler->display->display_options['relationships']['field_reviewer_target_id']['field'] = 'field_reviewer_target_id';
  $handler->display->display_options['relationships']['field_reviewer_target_id']['required'] = TRUE;
  /* Field: Field collection item: Reviewer */
  $handler->display->display_options['fields']['field_reviewer']['id'] = 'field_reviewer';
  $handler->display->display_options['fields']['field_reviewer']['table'] = 'field_data_field_reviewer';
  $handler->display->display_options['fields']['field_reviewer']['field'] = 'field_reviewer';
  $handler->display->display_options['fields']['field_reviewer']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: User: Roles */
  $handler->display->display_options['fields']['rid']['id'] = 'rid';
  $handler->display->display_options['fields']['rid']['table'] = 'users_roles';
  $handler->display->display_options['fields']['rid']['field'] = 'rid';
  $handler->display->display_options['fields']['rid']['relationship'] = 'field_reviewer_target_id';
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = '';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_path]/[item_id]/edit?destination=[host_entity_path]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '[field_path]/[item_id]/delete?destination=[host_entity_path]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<button class="cambridge-dataset-add-button" type="button">Add</button>

';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '[field_path]/add/[host_entity_type]/[host_entity_id]?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Sort criterion: User: Name (field_user_name) */
  $handler->display->display_options['sorts']['field_user_name_value']['id'] = 'field_user_name_value';
  $handler->display->display_options['sorts']['field_user_name_value']['table'] = 'field_data_field_user_name';
  $handler->display->display_options['sorts']['field_user_name_value']['field'] = 'field_user_name_value';
  $handler->display->display_options['sorts']['field_user_name_value']['relationship'] = 'field_reviewer_target_id';
  /* Contextual filter: Field collection item: Field collection item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['item_id']['break_phrase'] = TRUE;
  $export['field_collection_view_reviewers'] = $view;

  $view = new view();
  $view->name = 'field_collection_view_reviews';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Field collection view - Reviews';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'item_id' => 'item_id',
    'field_resume_job_title' => 'field_resume_job_title',
    'field_resume_time_period' => 'field_resume_time_period',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'item_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_resume_job_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_resume_time_period' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '[nothing_2]';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Field: Field collection item: Decision */
  $handler->display->display_options['fields']['field_decision']['id'] = 'field_decision';
  $handler->display->display_options['fields']['field_decision']['table'] = 'field_data_field_decision';
  $handler->display->display_options['fields']['field_decision']['field'] = 'field_decision';
  /* Field: Field collection item: Comment */
  $handler->display->display_options['fields']['field_comment']['id'] = 'field_comment';
  $handler->display->display_options['fields']['field_comment']['table'] = 'field_data_field_comment';
  $handler->display->display_options['fields']['field_comment']['field'] = 'field_comment';
  /* Field: Field collection item: Reviewer */
  $handler->display->display_options['fields']['field_reviewer']['id'] = 'field_reviewer';
  $handler->display->display_options['fields']['field_reviewer']['table'] = 'field_data_field_reviewer';
  $handler->display->display_options['fields']['field_reviewer']['field'] = 'field_reviewer';
  $handler->display->display_options['fields']['field_reviewer']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = '';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_path]/[item_id]/edit?destination=[host_entity_path]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '[field_path]/[item_id]/delete?destination=[host_entity_path]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<button class="cambridge-dataset-add-button" type="button">Add</button>

';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '[field_path]/add/[host_entity_type]/[host_entity_id]?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Sort criterion: Field collection item: Decision (field_decision) */
  $handler->display->display_options['sorts']['field_decision_value']['id'] = 'field_decision_value';
  $handler->display->display_options['sorts']['field_decision_value']['table'] = 'field_data_field_decision';
  $handler->display->display_options['sorts']['field_decision_value']['field'] = 'field_decision_value';
  /* Sort criterion: Field collection item: Field collection item ID */
  $handler->display->display_options['sorts']['item_id']['id'] = 'item_id';
  $handler->display->display_options['sorts']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['sorts']['item_id']['field'] = 'item_id';
  /* Contextual filter: Field collection item: Field collection item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['item_id']['break_phrase'] = TRUE;
  $export['field_collection_view_reviews'] = $view;

  $view = new view();
  $view->name = 'field_collection_view_reviews_read_only_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'field_collection_item';
  $view->human_name = 'Field collection view - Reviews (Read only)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'item_id' => 'item_id',
    'field_resume_job_title' => 'field_resume_job_title',
    'field_resume_time_period' => 'field_resume_time_period',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'item_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_resume_job_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'field_resume_time_period' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '[nothing_2]';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Field: Field collection item: Decision */
  $handler->display->display_options['fields']['field_decision']['id'] = 'field_decision';
  $handler->display->display_options['fields']['field_decision']['table'] = 'field_data_field_decision';
  $handler->display->display_options['fields']['field_decision']['field'] = 'field_decision';
  /* Field: Field collection item: Comment */
  $handler->display->display_options['fields']['field_comment']['id'] = 'field_comment';
  $handler->display->display_options['fields']['field_comment']['table'] = 'field_data_field_comment';
  $handler->display->display_options['fields']['field_comment']['field'] = 'field_comment';
  /* Field: Field collection item: Reviewer */
  $handler->display->display_options['fields']['field_reviewer']['id'] = 'field_reviewer';
  $handler->display->display_options['fields']['field_reviewer']['table'] = 'field_data_field_reviewer';
  $handler->display->display_options['fields']['field_reviewer']['field'] = 'field_reviewer';
  $handler->display->display_options['fields']['field_reviewer']['settings'] = array(
    'bypass_access' => 0,
    'link' => 0,
  );
  /* Field: Field collection item: Field collection item ID */
  $handler->display->display_options['fields']['item_id']['id'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['item_id']['field'] = 'item_id';
  $handler->display->display_options['fields']['item_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['item_id']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['item_id']['separator'] = '';
  /* Field: Field collection item: Field path */
  $handler->display->display_options['fields']['field_path']['id'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['field_path']['field'] = 'field_path';
  $handler->display->display_options['fields']['field_path']['label'] = '';
  $handler->display->display_options['fields']['field_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity ID */
  $handler->display->display_options['fields']['host_entity_id']['id'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_id']['field'] = 'host_entity_id';
  $handler->display->display_options['fields']['host_entity_id']['label'] = '';
  $handler->display->display_options['fields']['host_entity_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_id']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Path */
  $handler->display->display_options['fields']['host_entity_path']['id'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_path']['field'] = 'host_entity_path';
  $handler->display->display_options['fields']['host_entity_path']['label'] = '';
  $handler->display->display_options['fields']['host_entity_path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_path']['hide_alter_empty'] = FALSE;
  /* Field: Field collection item: Host Entity Type */
  $handler->display->display_options['fields']['host_entity_type']['id'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['table'] = 'field_collection_item';
  $handler->display->display_options['fields']['host_entity_type']['field'] = 'host_entity_type';
  $handler->display->display_options['fields']['host_entity_type']['label'] = '';
  $handler->display->display_options['fields']['host_entity_type']['exclude'] = TRUE;
  $handler->display->display_options['fields']['host_entity_type']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['host_entity_type']['hide_alter_empty'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[field_path]/[item_id]/edit?destination=[host_entity_path]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = '[field_path]/[item_id]/delete?destination=[host_entity_path]';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_2']['id'] = 'nothing_2';
  $handler->display->display_options['fields']['nothing_2']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_2']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_2']['label'] = '';
  $handler->display->display_options['fields']['nothing_2']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['text'] = '<button class="cambridge-dataset-add-button" type="button">Add</button>

';
  $handler->display->display_options['fields']['nothing_2']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_2']['alter']['path'] = '[field_path]/add/[host_entity_type]/[host_entity_id]?destination=[host_entity_path]';
  $handler->display->display_options['fields']['nothing_2']['element_label_colon'] = FALSE;
  /* Sort criterion: Field collection item: Decision (field_decision) */
  $handler->display->display_options['sorts']['field_decision_value']['id'] = 'field_decision_value';
  $handler->display->display_options['sorts']['field_decision_value']['table'] = 'field_data_field_decision';
  $handler->display->display_options['sorts']['field_decision_value']['field'] = 'field_decision_value';
  /* Sort criterion: Field collection item: Field collection item ID */
  $handler->display->display_options['sorts']['item_id']['id'] = 'item_id';
  $handler->display->display_options['sorts']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['sorts']['item_id']['field'] = 'item_id';
  /* Contextual filter: Field collection item: Field collection item ID */
  $handler->display->display_options['arguments']['item_id']['id'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['table'] = 'field_collection_item';
  $handler->display->display_options['arguments']['item_id']['field'] = 'item_id';
  $handler->display->display_options['arguments']['item_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['item_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['item_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['item_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['item_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['item_id']['break_phrase'] = TRUE;
  $export['field_collection_view_reviews_read_only_'] = $view;

  $view = new view();
  $view->name = 'mail_queue';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mail Queue';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mail Queue';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_user_email' => 'field_user_email',
    'title' => 'title',
    'field_sent' => 'field_sent',
    'field_mailtype' => 'field_mailtype',
    'changed' => 'changed',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = 'changed';
  $handler->display->display_options['style_options']['info'] = array(
    'field_user_email' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_sent' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_mailtype' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Autorefresh */
  $handler->display->display_options['header']['autorefresh']['id'] = 'autorefresh';
  $handler->display->display_options['header']['autorefresh']['table'] = 'views';
  $handler->display->display_options['header']['autorefresh']['field'] = 'autorefresh';
  $handler->display->display_options['header']['autorefresh']['interval'] = '5000';
  $handler->display->display_options['header']['autorefresh']['display'] = 'page';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<div class="content campl-content-container campl-no-bottom-padding">
<a target="_new" href="/cambridge_datasets/processmessagequeue"><button type="button">Process message queue</button></a>
</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Subject';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_user_email']['id'] = 'field_user_email';
  $handler->display->display_options['fields']['field_user_email']['table'] = 'field_data_field_user_email';
  $handler->display->display_options['fields']['field_user_email']['field'] = 'field_user_email';
  /* Field: Content: Sent */
  $handler->display->display_options['fields']['field_sent']['id'] = 'field_sent';
  $handler->display->display_options['fields']['field_sent']['table'] = 'field_data_field_sent';
  $handler->display->display_options['fields']['field_sent']['field'] = 'field_sent';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_mailtype']['id'] = 'field_mailtype';
  $handler->display->display_options['fields']['field_mailtype']['table'] = 'field_data_field_mailtype';
  $handler->display->display_options['fields']['field_mailtype']['field'] = 'field_mailtype';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'cambridge_events_day_only';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'mail' => 'mail',
  );
  /* Filter criterion: Content: Email (field_user_email) */
  $handler->display->display_options['filters']['field_user_email_value']['id'] = 'field_user_email_value';
  $handler->display->display_options['filters']['field_user_email_value']['table'] = 'field_data_field_user_email';
  $handler->display->display_options['filters']['field_user_email_value']['field'] = 'field_user_email_value';
  $handler->display->display_options['filters']['field_user_email_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_user_email_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_user_email_value']['expose']['operator_id'] = 'field_user_email_value_op';
  $handler->display->display_options['filters']['field_user_email_value']['expose']['label'] = 'Email';
  $handler->display->display_options['filters']['field_user_email_value']['expose']['operator'] = 'field_user_email_value_op';
  $handler->display->display_options['filters']['field_user_email_value']['expose']['identifier'] = 'field_user_email_value';
  $handler->display->display_options['filters']['field_user_email_value']['expose']['remember_roles'] = array(
    2 => '2',
  );
  /* Filter criterion: Content: Sent (field_sent) */
  $handler->display->display_options['filters']['field_sent_value']['id'] = 'field_sent_value';
  $handler->display->display_options['filters']['field_sent_value']['table'] = 'field_data_field_sent';
  $handler->display->display_options['filters']['field_sent_value']['field'] = 'field_sent_value';
  $handler->display->display_options['filters']['field_sent_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_sent_value']['expose']['operator_id'] = 'field_sent_value_op';
  $handler->display->display_options['filters']['field_sent_value']['expose']['label'] = 'Sent';
  $handler->display->display_options['filters']['field_sent_value']['expose']['operator'] = 'field_sent_value_op';
  $handler->display->display_options['filters']['field_sent_value']['expose']['identifier'] = 'field_sent_value';
  $handler->display->display_options['filters']['field_sent_value']['expose']['remember_roles'] = array(
    2 => '2',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'mail-queue';
  $export['mail_queue'] = $view;

  $view = new view();
  $view->name = 'overview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Collection Overview';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Dataset Collection Overview';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Footer: Entity: Rendered entity */
  $handler->display->display_options['footer']['entity']['id'] = 'entity';
  $handler->display->display_options['footer']['entity']['table'] = 'entity__global';
  $handler->display->display_options['footer']['entity']['field'] = 'entity';
  $handler->display->display_options['footer']['entity']['bypass_access'] = 0;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<div class="content campl-content-container">
<a href="/cambridge_datasets/apply/[nid]"><button class="cambridge-datasets-apply-button" type="button">Apply for access to data</button></a>
</div>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['footer']['area']['tokenize'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Datasets */
  $handler->display->display_options['fields']['field_datasets']['id'] = 'field_datasets';
  $handler->display->display_options['fields']['field_datasets']['table'] = 'field_data_field_datasets';
  $handler->display->display_options['fields']['field_datasets']['field'] = 'field_datasets';
  $handler->display->display_options['fields']['field_datasets']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_datasets']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_datasets']['element_wrapper_type'] = 'div';
  $handler->display->display_options['fields']['field_datasets']['element_wrapper_class'] = 'campl-content-container';
  $handler->display->display_options['fields']['field_datasets']['type'] = 'field_collection_views_view';
  $handler->display->display_options['fields']['field_datasets']['settings'] = array(
    'name' => 'field_collection_view_datasets_read_only_',
    'display_id' => 'default',
    'add' => 'Add',
  );
  $handler->display->display_options['fields']['field_datasets']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'collection' => 'collection',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'overview';
  $export['overview'] = $view;

  $view = new view();
  $view->name = 'review_all_applications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Review All Applications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'All Applications';
  $handler->display->display_options['css_class'] = 'campl-content-container';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_user_firstname' => 'field_user_firstname',
    'field_user_lastname' => 'field_user_lastname',
    'field_user_institution' => 'field_user_institution',
    'field_user_proposal' => 'field_user_proposal',
    'field_datasets' => 'field_datasets',
  );
  $handler->display->display_options['row_options']['separator'] = '<br/>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h2><i>No pending applications</i></h2>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Reviewers (field_reviewers) */
  $handler->display->display_options['relationships']['field_reviewers_value']['id'] = 'field_reviewers_value';
  $handler->display->display_options['relationships']['field_reviewers_value']['table'] = 'field_data_field_reviewers';
  $handler->display->display_options['relationships']['field_reviewers_value']['field'] = 'field_reviewers_value';
  $handler->display->display_options['relationships']['field_reviewers_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_reviewers_value']['delta'] = '-1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Application Submitted';
  $handler->display->display_options['fields']['created_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['created_1']['element_label_class'] = 'cambridge-dataset-extrapadding-top';
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'long';
  $handler->display->display_options['fields']['created_1']['second_date_format'] = 'cambridge_events_day_only';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = '';
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php

global $user;

if (in_array(\'finalreviewer\', $user->roles) || in_array(\'administrator\', $user->roles))
{
print \'<div class="cambridge-datasets-finalreviewer-buttons"><a href="cambridge_datasets/applicationrevert?application_nid=\'.$row->nid.\'"><button class="cambridge-datasets-application-revert" type="button">Revert</button></a> <a href="cambridge_datasets/applicationreject?application_nid=\'.$row->nid.\'"><button class="cambridge-datasets-application-reject" type="button">Reject</button></a> <a href="cambridge_datasets/applicationapprove?application_nid=\'.$row->nid.\'"><button class="cambridge-datasets-application-approve" type="button">Approve</button></a> <a href="cambridge_datasets/applicationprocessed?application_nid=\'.$row->nid.\'"><button class="cambridge-datasets-application-processed" type="button">Processed</button></a></div>\';
}

?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_status']['element_label_colon'] = FALSE;
  /* Field: Content: Proposal */
  $handler->display->display_options['fields']['field_user_proposal']['id'] = 'field_user_proposal';
  $handler->display->display_options['fields']['field_user_proposal']['table'] = 'field_data_field_user_proposal';
  $handler->display->display_options['fields']['field_user_proposal']['field'] = 'field_user_proposal';
  $handler->display->display_options['fields']['field_user_proposal']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_proposal']['alter']['text'] = '<i>Submitted: [created_1]</i><br/><br/>

[field_user_proposal]';
  $handler->display->display_options['fields']['field_user_proposal']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_user_proposal']['element_label_class'] = 'cambridge-dataset-extrapadding-top';
  $handler->display->display_options['fields']['field_user_proposal']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_proposal']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '300',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'trim_options' => array(
      'text' => 0,
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['exclude'] = TRUE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_user_lastname_1']['id'] = 'field_user_lastname_1';
  $handler->display->display_options['fields']['field_user_lastname_1']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname_1']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname_1']['exclude'] = TRUE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_user_email']['id'] = 'field_user_email';
  $handler->display->display_options['fields']['field_user_email']['table'] = 'field_data_field_user_email';
  $handler->display->display_options['fields']['field_user_email']['field'] = 'field_user_email';
  $handler->display->display_options['fields']['field_user_email']['exclude'] = TRUE;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_user_position']['id'] = 'field_user_position';
  $handler->display->display_options['fields']['field_user_position']['table'] = 'field_data_field_user_position';
  $handler->display->display_options['fields']['field_user_position']['field'] = 'field_user_position';
  $handler->display->display_options['fields']['field_user_position']['exclude'] = TRUE;
  /* Field: Content: Institution */
  $handler->display->display_options['fields']['field_user_institution']['id'] = 'field_user_institution';
  $handler->display->display_options['fields']['field_user_institution']['table'] = 'field_data_field_user_institution';
  $handler->display->display_options['fields']['field_user_institution']['field'] = 'field_user_institution';
  $handler->display->display_options['fields']['field_user_institution']['exclude'] = TRUE;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_user_department']['id'] = 'field_user_department';
  $handler->display->display_options['fields']['field_user_department']['table'] = 'field_data_field_user_department';
  $handler->display->display_options['fields']['field_user_department']['field'] = 'field_user_department';
  $handler->display->display_options['fields']['field_user_department']['exclude'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'cambridge_events_day_only';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'Applicant';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<p><b>Name</b>: [field_user_firstname] [field_user_lastname_1] </p>';
  $handler->display->display_options['fields']['nothing_3']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['nothing_3']['element_label_class'] = 'cambridge-dataset-extrapadding-top';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_5']['id'] = 'nothing_5';
  $handler->display->display_options['fields']['nothing_5']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_5']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_5']['label'] = '';
  $handler->display->display_options['fields']['nothing_5']['alter']['text'] = '<p><b>Email</b>: [field_user_email]</p>';
  $handler->display->display_options['fields']['nothing_5']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '<p><b>Position/Organisation</b>: [field_user_position], [field_user_department], [field_user_institution]</p>';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_user_address']['id'] = 'field_user_address';
  $handler->display->display_options['fields']['field_user_address']['table'] = 'field_data_field_user_address';
  $handler->display->display_options['fields']['field_user_address']['field'] = 'field_user_address';
  $handler->display->display_options['fields']['field_user_address']['label'] = '';
  $handler->display->display_options['fields']['field_user_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_address']['alter']['text'] = '<b>Address</b>:<br>[field_user_address] ';
  $handler->display->display_options['fields']['field_user_address']['element_label_colon'] = FALSE;
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_user_region']['id'] = 'field_user_region';
  $handler->display->display_options['fields']['field_user_region']['table'] = 'field_data_field_user_region';
  $handler->display->display_options['fields']['field_user_region']['field'] = 'field_user_region';
  $handler->display->display_options['fields']['field_user_region']['label'] = '';
  $handler->display->display_options['fields']['field_user_region']['element_label_colon'] = FALSE;
  /* Field: Content: Postcode */
  $handler->display->display_options['fields']['field_user_postcode']['id'] = 'field_user_postcode';
  $handler->display->display_options['fields']['field_user_postcode']['table'] = 'field_data_field_user_postcode';
  $handler->display->display_options['fields']['field_user_postcode']['field'] = 'field_user_postcode';
  $handler->display->display_options['fields']['field_user_postcode']['label'] = '';
  $handler->display->display_options['fields']['field_user_postcode']['element_label_colon'] = FALSE;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_user_country']['id'] = 'field_user_country';
  $handler->display->display_options['fields']['field_user_country']['table'] = 'field_data_field_user_country';
  $handler->display->display_options['fields']['field_user_country']['field'] = 'field_user_country';
  $handler->display->display_options['fields']['field_user_country']['label'] = '';
  $handler->display->display_options['fields']['field_user_country']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php

	$node_current = node_load($row->nid);
	$datasets = field_get_items(\'node\', $node_current, \'field_datasets\');
	$extra_output = \'<h2 class="cambridge-datasets-extrapadding-top">Requested Datasets</h2>\';
	
	if (!$datasets) 
	{
		$extra_output .= \'<p><i>No datasets</i></p>\';
	}
	else
	{
		$extra_output .= \'<table class="cambridge-datasets-datasets campl-table campl-table-bordered campl-table-striped campl-vertical-stacking-table table table-bordered" width="100%"><tbody>\';
		foreach($datasets as $dataset)
		{
			$fc = field_collection_field_get_entity($dataset);
			$dataset_nid = $fc->field_dataset[LANGUAGE_NONE][0][\'target_id\'];
			$dataset_node = node_load($dataset_nid);
			$extra_output .= \'<tr><td>\'.$dataset_node->field_code[LANGUAGE_NONE][0][\'value\'].\'</td><td>\'.$dataset_node->field_datasettitle[LANGUAGE_NONE][0][\'value\'].\'</td></tr>\';
		}
		$extra_output .= \'</tbody></table>\';
	}
	print $extra_output;
	
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

global $user;
$reviewer = $finalreviewer = false;

if (in_array(\'reviewer\', $user->roles)) $reviewer = true;
if (in_array(\'finalreviewer\', $user->roles)) $finalreviewer = true;
if (in_array(\'administrator\', $user->roles)) $finalreviewer = true;

if ((!$reviewer) && (!$finalreviewer)) return \'\';

$node_current = node_load($row->nid);
$reviews = field_get_items(\'node\', $node_current, \'field_reviews\');
$extra_output = \'<h2 class="cambridge-datasets-extrapadding-top">Reviewer Decisions / Comments</h2>\';
if (!$finalreviewer) $extra_output = \'<h2 class="cambridge-datasets-extrapadding-top">Your Decision / Comment</h2>\';

if (!$reviews) 
{
	$extra_output .= \'<p><i>No comments</i></p>\';
}
else
{
	$extra_output .= \'<table class="cambridge-datasets-datasets campl-table campl-table-bordered campl-table-striped campl-vertical-stacking-table table table-bordered" width="100%"><tbody>\';
	$listnonempty = false;
	foreach($reviews as $review)
	{
		$fc = field_collection_field_get_entity($review);
		$reviewer_nid = $fc->field_reviewer[LANGUAGE_NONE][0][\'target_id\'];
		if (!$reviewer_nid) continue;
		// If not final reviewer, then only show comments created by logged-in user
		if ((!$finalreviewer) && ($reviewer_nid != $user->uid)) continue;
		$reviewer = user_load($reviewer_nid);
		$listnonempty = true;
		if ($finalreviewer)
		{
			$extra_output .= \'<tr><td>\'.$fc->field_decision[LANGUAGE_NONE][0][\'value\'].\'</td><td>\'.$fc->field_comment[LANGUAGE_NONE][0][\'value\'].\'</td><td>\'.$reviewer->realname.\'</td></tr>\';
		}
		else
		{
			$extra_output .= \'<tr><td>\'.$fc->field_decision[LANGUAGE_NONE][0][\'value\'].\'</td><td>\'.$fc->field_comment[LANGUAGE_NONE][0][\'value\'].\'</td></tr>\';
		}
	}
	$extra_output .= \'</tbody></table>\';
	if (!$listnonempty) 
	{
		$extra_output .= \'<p><i>No comments</i></p>\';
	}
}

print $extra_output;

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<form action="cambridge_datasets/updatereview" method="post" enctype="application/x-www-form-urlencoded">
<input type="hidden" name="application_nid" value="[nid]">

<h2>Add / Change Your Decision</h2>
<div class="cambridge-datasets-add-comment">
<input type="radio" id="accept" name="decision" value="Accept" checked><label for="accept">Accept</label><input type="radio" id="reject" name="decision" value="Reject"><label for="reject">Reject</label><input type="radio" id="query" name="decision" value="Query"><label for="query">Query</label>
</div>

<h3 class="cambridge-datasets-extrapadding-top">Your Comments</h3>
<div class="cambridge-datasets-add-comment">
<textarea rows="5" cols="60" name="comment"></textarea>
</div>
<div class="cambridge-datasets-add-comment">
<input type="submit">
</div>
</form>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Reviewers */
  $handler->display->display_options['fields']['field_reviewers']['id'] = 'field_reviewers';
  $handler->display->display_options['fields']['field_reviewers']['table'] = 'field_data_field_reviewers';
  $handler->display->display_options['fields']['field_reviewers']['field'] = 'field_reviewers';
  $handler->display->display_options['fields']['field_reviewers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reviewers']['settings'] = array(
    'add' => 'Add',
    'edit' => 'Edit',
    'translate' => 'Translate',
    'delete' => 'Delete',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_reviewers']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field collection item: Reviewer (field_reviewer) */
  $handler->display->display_options['arguments']['field_reviewer_target_id']['id'] = 'field_reviewer_target_id';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['table'] = 'field_data_field_reviewer';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['field'] = 'field_reviewer_target_id';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['relationship'] = 'field_reviewers_value';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'application' => 'application',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'reviewallapplications';
  $export['review_all_applications'] = $view;

  $view = new view();
  $view->name = 'review_pending_applications';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Review Pending Applications';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Pending Applications';
  $handler->display->display_options['css_class'] = 'campl-content-container';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
    3 => '3',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_user_firstname' => 'field_user_firstname',
    'field_user_lastname' => 'field_user_lastname',
    'field_user_institution' => 'field_user_institution',
    'field_user_proposal' => 'field_user_proposal',
    'field_datasets' => 'field_datasets',
  );
  $handler->display->display_options['row_options']['separator'] = '<br/>';
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '<h2><i>No pending applications</i></h2>';
  $handler->display->display_options['empty']['area']['format'] = 'full_html';
  /* Relationship: Content: Reviewers (field_reviewers) */
  $handler->display->display_options['relationships']['field_reviewers_value']['id'] = 'field_reviewers_value';
  $handler->display->display_options['relationships']['field_reviewers_value']['table'] = 'field_data_field_reviewers';
  $handler->display->display_options['relationships']['field_reviewers_value']['field'] = 'field_reviewers_value';
  $handler->display->display_options['relationships']['field_reviewers_value']['required'] = TRUE;
  $handler->display->display_options['relationships']['field_reviewers_value']['delta'] = '-1';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'node';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Application Submitted';
  $handler->display->display_options['fields']['created_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created_1']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['created_1']['element_label_class'] = 'cambridge-dataset-extrapadding-top';
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'long';
  $handler->display->display_options['fields']['created_1']['second_date_format'] = 'cambridge_events_day_only';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = '';
  $handler->display->display_options['fields']['php_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php

global $user;

if (in_array(\'finalreviewer\', $user->roles) || in_array(\'administrator\', $user->roles))
{
print \'<div class="cambridge-datasets-finalreviewer-buttons"><a href="cambridge_datasets/applicationreject?application_nid=\'.$row->nid.\'"><button class="cambridge-datasets-application-reject" type="button">Reject</button></a> <a href="cambridge_datasets/applicationapprove?application_nid=\'.$row->nid.\'"><button class="cambridge-datasets-application-approve" type="button">Approve</button></a> <a href="cambridge_datasets/applicationprocessed?application_nid=\'.$row->nid.\'"><button class="cambridge-datasets-application-processed" type="button">Processed</button></a></div>\';
}

?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Content: Proposal */
  $handler->display->display_options['fields']['field_user_proposal']['id'] = 'field_user_proposal';
  $handler->display->display_options['fields']['field_user_proposal']['table'] = 'field_data_field_user_proposal';
  $handler->display->display_options['fields']['field_user_proposal']['field'] = 'field_user_proposal';
  $handler->display->display_options['fields']['field_user_proposal']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_proposal']['alter']['text'] = '<i>Submitted: [created_1]</i><br/><br/>


[field_user_proposal]';
  $handler->display->display_options['fields']['field_user_proposal']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['field_user_proposal']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_user_proposal']['settings'] = array(
    'trim_link' => '0',
    'trim_length' => '300',
    'trim_type' => 'chars',
    'trim_suffix' => '...',
    'more_link' => '0',
    'more_text' => 'Read more',
    'trim_options' => array(
      'text' => 0,
    ),
    'trim_preserve_tags' => '',
  );
  /* Field: Content: First Name */
  $handler->display->display_options['fields']['field_user_firstname']['id'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['table'] = 'field_data_field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['field'] = 'field_user_firstname';
  $handler->display->display_options['fields']['field_user_firstname']['exclude'] = TRUE;
  /* Field: Content: Last Name */
  $handler->display->display_options['fields']['field_user_lastname_1']['id'] = 'field_user_lastname_1';
  $handler->display->display_options['fields']['field_user_lastname_1']['table'] = 'field_data_field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname_1']['field'] = 'field_user_lastname';
  $handler->display->display_options['fields']['field_user_lastname_1']['exclude'] = TRUE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_user_email']['id'] = 'field_user_email';
  $handler->display->display_options['fields']['field_user_email']['table'] = 'field_data_field_user_email';
  $handler->display->display_options['fields']['field_user_email']['field'] = 'field_user_email';
  $handler->display->display_options['fields']['field_user_email']['exclude'] = TRUE;
  /* Field: Content: Position */
  $handler->display->display_options['fields']['field_user_position']['id'] = 'field_user_position';
  $handler->display->display_options['fields']['field_user_position']['table'] = 'field_data_field_user_position';
  $handler->display->display_options['fields']['field_user_position']['field'] = 'field_user_position';
  $handler->display->display_options['fields']['field_user_position']['exclude'] = TRUE;
  /* Field: Content: Institution */
  $handler->display->display_options['fields']['field_user_institution']['id'] = 'field_user_institution';
  $handler->display->display_options['fields']['field_user_institution']['table'] = 'field_data_field_user_institution';
  $handler->display->display_options['fields']['field_user_institution']['field'] = 'field_user_institution';
  $handler->display->display_options['fields']['field_user_institution']['exclude'] = TRUE;
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_user_department']['id'] = 'field_user_department';
  $handler->display->display_options['fields']['field_user_department']['table'] = 'field_data_field_user_department';
  $handler->display->display_options['fields']['field_user_department']['field'] = 'field_user_department';
  $handler->display->display_options['fields']['field_user_department']['exclude'] = TRUE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'cambridge_events_day_only';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_3']['id'] = 'nothing_3';
  $handler->display->display_options['fields']['nothing_3']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_3']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_3']['label'] = 'Applicant';
  $handler->display->display_options['fields']['nothing_3']['alter']['text'] = '<p><b>Name</b>: [field_user_firstname] [field_user_lastname_1] </p>';
  $handler->display->display_options['fields']['nothing_3']['element_label_type'] = 'h2';
  $handler->display->display_options['fields']['nothing_3']['element_label_class'] = 'cambridge-dataset-extrapadding-top';
  $handler->display->display_options['fields']['nothing_3']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_5']['id'] = 'nothing_5';
  $handler->display->display_options['fields']['nothing_5']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_5']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_5']['label'] = '';
  $handler->display->display_options['fields']['nothing_5']['alter']['text'] = '<p><b>Email</b>: [field_user_email]</p>';
  $handler->display->display_options['fields']['nothing_5']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_4']['id'] = 'nothing_4';
  $handler->display->display_options['fields']['nothing_4']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_4']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_4']['label'] = '';
  $handler->display->display_options['fields']['nothing_4']['alter']['text'] = '<p><b>Position/Organisation</b>: [field_user_position], [field_user_department], [field_user_institution]</p>';
  $handler->display->display_options['fields']['nothing_4']['element_label_colon'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_user_address']['id'] = 'field_user_address';
  $handler->display->display_options['fields']['field_user_address']['table'] = 'field_data_field_user_address';
  $handler->display->display_options['fields']['field_user_address']['field'] = 'field_user_address';
  $handler->display->display_options['fields']['field_user_address']['label'] = '';
  $handler->display->display_options['fields']['field_user_address']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_user_address']['alter']['text'] = '<b>Address</b>:<br>[field_user_address] ';
  $handler->display->display_options['fields']['field_user_address']['element_label_colon'] = FALSE;
  /* Field: Content: Region */
  $handler->display->display_options['fields']['field_user_region']['id'] = 'field_user_region';
  $handler->display->display_options['fields']['field_user_region']['table'] = 'field_data_field_user_region';
  $handler->display->display_options['fields']['field_user_region']['field'] = 'field_user_region';
  $handler->display->display_options['fields']['field_user_region']['label'] = '';
  $handler->display->display_options['fields']['field_user_region']['element_label_colon'] = FALSE;
  /* Field: Content: Postcode */
  $handler->display->display_options['fields']['field_user_postcode']['id'] = 'field_user_postcode';
  $handler->display->display_options['fields']['field_user_postcode']['table'] = 'field_data_field_user_postcode';
  $handler->display->display_options['fields']['field_user_postcode']['field'] = 'field_user_postcode';
  $handler->display->display_options['fields']['field_user_postcode']['label'] = '';
  $handler->display->display_options['fields']['field_user_postcode']['element_label_colon'] = FALSE;
  /* Field: Content: Country */
  $handler->display->display_options['fields']['field_user_country']['id'] = 'field_user_country';
  $handler->display->display_options['fields']['field_user_country']['table'] = 'field_data_field_user_country';
  $handler->display->display_options['fields']['field_user_country']['field'] = 'field_user_country';
  $handler->display->display_options['fields']['field_user_country']['label'] = '';
  $handler->display->display_options['fields']['field_user_country']['element_label_colon'] = FALSE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = '';
  $handler->display->display_options['fields']['php_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php

	$node_current = node_load($row->nid);
	$datasets = field_get_items(\'node\', $node_current, \'field_datasets\');
	$extra_output = \'<h2 class="cambridge-datasets-extrapadding-top">Requested Datasets</h2>\';
	
	if (!$datasets) 
	{
		$extra_output .= \'<p><i>No datasets</i></p>\';
	}
	else
	{
		$extra_output .= \'<table class="cambridge-datasets-datasets campl-table campl-table-bordered campl-table-striped campl-vertical-stacking-table table table-bordered" width="100%"><tbody>\';
		foreach($datasets as $dataset)
		{
			$fc = field_collection_field_get_entity($dataset);
			$dataset_nid = $fc->field_dataset[LANGUAGE_NONE][0][\'target_id\'];
			$dataset_node = node_load($dataset_nid);
			$extra_output .= \'<tr><td>\'.$dataset_node->field_code[LANGUAGE_NONE][0][\'value\'].\'</td><td>\'.$dataset_node->field_datasettitle[LANGUAGE_NONE][0][\'value\'].\'</td></tr>\';
		}
		$extra_output .= \'</tbody></table>\';
	}
	print $extra_output;
	
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = '';
  $handler->display->display_options['fields']['php']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

global $user;
$reviewer = $finalreviewer = false;

if (in_array(\'reviewer\', $user->roles)) $reviewer = true;
if (in_array(\'finalreviewer\', $user->roles)) $finalreviewer = true;
if (in_array(\'administrator\', $user->roles)) $finalreviewer = true;

if ((!$reviewer) && (!$finalreviewer)) return \'\';

$node_current = node_load($row->nid);
$reviews = field_get_items(\'node\', $node_current, \'field_reviews\');
$extra_output = \'<h2 class="cambridge-datasets-extrapadding-top">Reviewer Decisions / Comments</h2>\';
if (!$finalreviewer) $extra_output = \'<h2 class="cambridge-datasets-extrapadding-top">Your Decision / Comment</h2>\';

if (!$reviews) 
{
	$extra_output .= \'<p><i>No comments</i></p>\';
}
else
{
	$extra_output .= \'<table class="cambridge-datasets-datasets campl-table campl-table-bordered campl-table-striped campl-vertical-stacking-table table table-bordered" width="100%"><tbody>\';
	$listnonempty = false;
	foreach($reviews as $review)
	{
		$fc = field_collection_field_get_entity($review);
		$reviewer_nid = $fc->field_reviewer[LANGUAGE_NONE][0][\'target_id\'];
		if (!$reviewer_nid) continue;
		// If not final reviewer, then only show comments created by logged-in user
		if ((!$finalreviewer) && ($reviewer_nid != $user->uid)) continue;
		$reviewer = user_load($reviewer_nid);
		$listnonempty = true;
		if ($finalreviewer)
		{
			$extra_output .= \'<tr><td>\'.$fc->field_decision[LANGUAGE_NONE][0][\'value\'].\'</td><td>\'.$fc->field_comment[LANGUAGE_NONE][0][\'value\'].\'</td><td>\'.$reviewer->realname.\'</td></tr>\';
		}
		else
		{
			$extra_output .= \'<tr><td>\'.$fc->field_decision[LANGUAGE_NONE][0][\'value\'].\'</td><td>\'.$fc->field_comment[LANGUAGE_NONE][0][\'value\'].\'</td></tr>\';
		}
	}
	$extra_output .= \'</tbody></table>\';
	if (!$listnonempty) 
	{
		$extra_output .= \'<p><i>No comments</i></p>\';
	}
}

print $extra_output;

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<form action="cambridge_datasets/updatereview" method="post" enctype="application/x-www-form-urlencoded">
<input type="hidden" name="application_nid" value="[nid]">

<h2>Add / Change Your Decision</h2>
<div class="cambridge-datasets-add-comment">
<input type="radio" id="accept" name="decision" value="Accept" checked><label for="accept">Accept</label><input type="radio" id="reject" name="decision" value="Reject"><label for="reject">Reject</label><input type="radio" id="query" name="decision" value="Query"><label for="query">Query</label>
</div>

<h3 class="cambridge-datasets-extrapadding-top">Your Comments</h3>
<div class="cambridge-datasets-add-comment">
<textarea rows="5" cols="60" name="comment"></textarea>
</div>
<div class="cambridge-datasets-add-comment">
<input type="submit">
</div>
</form>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Reviewers */
  $handler->display->display_options['fields']['field_reviewers']['id'] = 'field_reviewers';
  $handler->display->display_options['fields']['field_reviewers']['table'] = 'field_data_field_reviewers';
  $handler->display->display_options['fields']['field_reviewers']['field'] = 'field_reviewers';
  $handler->display->display_options['fields']['field_reviewers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_reviewers']['settings'] = array(
    'add' => 'Add',
    'edit' => 'Edit',
    'translate' => 'Translate',
    'delete' => 'Delete',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_reviewers']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field collection item: Reviewer (field_reviewer) */
  $handler->display->display_options['arguments']['field_reviewer_target_id']['id'] = 'field_reviewer_target_id';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['table'] = 'field_data_field_reviewer';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['field'] = 'field_reviewer_target_id';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['relationship'] = 'field_reviewers_value';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_reviewer_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'application' => 'application',
  );
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Submitted' => 'Submitted',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'reviewapplications';
  $export['review_pending_applications'] = $view;

  $view = new view();
  $view->name = 'reviews';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Reviews';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Reviews';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    5 => '5',
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Content: Content author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Field: Field collection item: Decision */
  $handler->display->display_options['fields']['field_decision']['id'] = 'field_decision';
  $handler->display->display_options['fields']['field_decision']['table'] = 'field_data_field_decision';
  $handler->display->display_options['fields']['field_decision']['field'] = 'field_decision';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Text';
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Reviewer';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'review' => 'review',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'reviews';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_decision' => 'field_decision',
    'body' => 'body',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['class'] = '';
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_decision' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['reviews'] = $view;

  return $export;
}
