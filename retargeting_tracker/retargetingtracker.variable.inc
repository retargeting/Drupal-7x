<?php

/**
 * @file
 * Definition of variables for Variable API module.
 */

/**
 * Implements hook_variable_info().
 */

function retargetingtracker_variable_info($options) {
    $variables['retargetingtracker_account'] = array(
        'type' => 'string',
        'title' => t('Tracking API Key', array(), $options),
        'default' => 'API Key Here',
        'description' => t('Your Retargeting Tracking API Key here'),
        'required' => TRUE,
        'group' => 'retargetingtracker',
        'localize' => TRUE,
    );
    
    return $variables;
}

/**
 * Implements hook_variable_group_info().
 */
function retargetingtracker_variable_group_info() {
    $groups['retargetingtracker'] = array(
        'title' => t('Retargeting Tracker'),
        'description' => t('Configure Retargeting Tracker options.'),
        'access' => 'administer retargeting tracker',
        'path' => array('admin/config/system/retargetingtracker'),
    );
    
    return $groups;
}