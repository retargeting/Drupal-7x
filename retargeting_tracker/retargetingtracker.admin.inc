<?php

/**
 * @file
 * Administrative page callbacks for the Retargeting Tracker module.
 */

/**
 * Implements hook_admin_settings() for module settings configuration
 */

function retargetingtracker_admin_settings_form($form_state) {
    $form['account'] = array(
        '#type' => 'fieldset',
        '#title' => t('General Settings'),
    );
    
    $form['account']['retargetingtracker_account'] = array(
        '#title' => t('Tracking API Key'),
        '#type' => 'textfield',
        '#default_value' => variable_get('retargetingtracker_account', ''),
        '#required' => TRUE,
        '#description' => t('You can find your secure <b>Tracking API Key</b> in your <a href="https://retargeting.biz/admin/module/settings/docs-and-api" target="_blank" rel="noopener noreferrer">Retargeting.Biz</a> account.')
    );
    
    $form['account']['retargetingtracker_rest_api'] = array(
        '#title' => t('REST API Key'),
        '#type' => 'textfield',
        '#default_value' => variable_get('retargetingtracker_rest_api', ''),
        '#required' => TRUE,
        '#description' => t('You can find your secure <b>REST API Key</b> in your <a href="https://retargeting.biz/admin/module/settings/docs-and-api" target="_blank" rel="noopener noreferrer">Retargeting.Biz</a> account.')
    );
    
    $form['account']['retargetingtracker_cart_url'] = array(
        '#title' => t('Cart Page URL'),
        '#type' => 'textfield',
        '#default_value' => variable_get('retargetingtracker_cart_url', ''),
        '#required' => FALSE,
        '#description' => t('Set your Cart page URL here. (e.g. <b>https://www.example.com/cart</b>)')
    );
    
    $form['account']['retargetingtracker_checkout_page'] = array(
        '#title' => t('Checkout Page Name'),
        "#type" => 'textfield',
        '#default_value' => variable_get('retargetingtracker_checkout_page', 'cart'),
        '#required' => FALSE,
        '#description' => t('Set your Checkout page name here. The checkout page should be the page where the users can add their discount codes, if any. (e.g. https://www.example.com/<b>checkout</b>, then the Checkout Page Name is <b>checkout</b>)')
    );
    
    $form['account']['retargetingtracker_cart_selector'] = array(
        '#title' => t('Add To Cart Button Query Selector'),
        '#type' => 'textfield',
        '#default_value' => variable_get('retargetingtracker_cart_selector', '#edit-submit'),
        '#required' => FALSE,
        '#description' => t('Set your Add To Cart button query selector here. If query selector is class: <b>#example</b>. If selector is id: <b>.example</b>')
    );
    
    $form['account']['retargetingtracker_success_page'] = array(
        '#title' => t('Success/Thank You Page Name'),
        '#type' => 'textfield',
        '#default_value' => variable_get('retargetingtracker_success_page', 'complete'),
        '#required' => FALSE,
        '#description' => t('Set your Success/Thank You page name here. The success/thank you page is the page where the user is informed the order is complete. (e.g. https://www.example.com/<b>complete</b>, then the Success/Thank You page is <b>complete</b>)')
    );
    
    $form['account']['retargetingtracker_image_selector'] = array(
        '#title' => t('Product Image Query Selector'),
        '#type' => 'textfield',
        '#default_value' => variable_get('retargetingtracker_image_selector', ''),
        '#required' => FALSE,
        '#description' => t('Set your Product Image query selector here. If query selector is class: <b>#example</b>. If selector is id: <b>.example</b>')
    );
    
    return system_settings_form($form);
}



