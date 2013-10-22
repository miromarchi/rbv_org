<?php
/**
 * @file
 * rbv_org.features.og_features_permission.inc
 */

/**
 * Implements hook_og_features_default_permissions().
 */
function rbv_org_og_features_default_permissions() {
  $permissions = array();

  // Exported og permission: 'node:org:add user'
  $permissions['node:org:add user'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:org:administer group'
  $permissions['node:org:administer group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:org:approve and deny subscription'
  $permissions['node:org:approve and deny subscription'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:org:create project content'
  $permissions['node:org:create project content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:create relation content'
  $permissions['node:org:create relation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:org:delete any project content'
  $permissions['node:org:delete any project content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:org:delete any relation content'
  $permissions['node:org:delete any relation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:org:delete own project content'
  $permissions['node:org:delete own project content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:org:delete own relation content'
  $permissions['node:org:delete own relation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:org:manage members'
  $permissions['node:org:manage members'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:org:manage permissions'
  $permissions['node:org:manage permissions'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:org:manage roles'
  $permissions['node:org:manage roles'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:org:subscribe'
  $permissions['node:org:subscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:org:subscribe without approval'
  $permissions['node:org:subscribe without approval'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:org:unsubscribe'
  $permissions['node:org:unsubscribe'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:org:update any project content'
  $permissions['node:org:update any project content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:update any relation content'
  $permissions['node:org:update any relation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:org:update field_com_categories field'
  $permissions['node:org:update field_com_categories field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:update field_com_description field'
  $permissions['node:org:update field_com_description field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:update field_com_email field'
  $permissions['node:org:update field_com_email field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:update field_com_foundingdate field'
  $permissions['node:org:update field_com_foundingdate field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:update field_com_history field'
  $permissions['node:org:update field_com_history field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:update field_com_location field'
  $permissions['node:org:update field_com_location field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:update field_com_logo field'
  $permissions['node:org:update field_com_logo field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:update field_com_mission field'
  $permissions['node:org:update field_com_mission field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:update field_com_more_contacts field'
  $permissions['node:org:update field_com_more_contacts field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:update field_com_tagline field'
  $permissions['node:org:update field_com_tagline field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:update field_com_tags field'
  $permissions['node:org:update field_com_tags field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:update field_com_telephone field'
  $permissions['node:org:update field_com_telephone field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:update field_org_type field'
  $permissions['node:org:update field_org_type field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:org:update field_rel_categories field'
  $permissions['node:org:update field_rel_categories field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:update field_rel_source field'
  $permissions['node:org:update field_rel_source field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:update field_rel_target field'
  $permissions['node:org:update field_rel_target field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:update group'
  $permissions['node:org:update group'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:update group_group field'
  $permissions['node:org:update group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
    ),
  );

  // Exported og permission: 'node:org:update og_group_ref field'
  $permissions['node:org:update og_group_ref field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:org:update og_user_node field'
  $permissions['node:org:update og_user_node field'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:org:update own project content'
  $permissions['node:org:update own project content'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
    ),
  );

  // Exported og permission: 'node:org:update own relation content'
  $permissions['node:org:update own relation content'] = array(
    'roles' => array(),
  );

  // Exported og permission: 'node:org:view field_com_categories field'
  $permissions['node:org:view field_com_categories field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:org:view field_com_description field'
  $permissions['node:org:view field_com_description field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:org:view field_com_email field'
  $permissions['node:org:view field_com_email field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:org:view field_com_foundingdate field'
  $permissions['node:org:view field_com_foundingdate field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:org:view field_com_history field'
  $permissions['node:org:view field_com_history field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:org:view field_com_location field'
  $permissions['node:org:view field_com_location field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:org:view field_com_logo field'
  $permissions['node:org:view field_com_logo field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:org:view field_com_mission field'
  $permissions['node:org:view field_com_mission field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:org:view field_com_more_contacts field'
  $permissions['node:org:view field_com_more_contacts field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:org:view field_com_tagline field'
  $permissions['node:org:view field_com_tagline field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:org:view field_com_tags field'
  $permissions['node:org:view field_com_tags field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:org:view field_com_telephone field'
  $permissions['node:org:view field_com_telephone field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:org:view field_org_type field'
  $permissions['node:org:view field_org_type field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:org:view field_rel_categories field'
  $permissions['node:org:view field_rel_categories field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:org:view field_rel_source field'
  $permissions['node:org:view field_rel_source field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:org:view field_rel_target field'
  $permissions['node:org:view field_rel_target field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:org:view group_group field'
  $permissions['node:org:view group_group field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:org:view og_group_ref field'
  $permissions['node:org:view og_group_ref field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  // Exported og permission: 'node:org:view og_user_node field'
  $permissions['node:org:view og_user_node field'] = array(
    'roles' => array(
      'administrator member' => 'administrator member',
      'editor member' => 'editor member',
      'member' => 'member',
      'non-member' => 'non-member',
    ),
  );

  return $permissions;
}