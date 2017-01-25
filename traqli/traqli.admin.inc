<?php
/**
 * @file
 * Administration page for Traqli module
 *
 */

function traqli_settings() {
  $form = [];

  $form['traqli_account'] = [
    '#title' => t('Traqli integration ID code'),
    '#type' => 'textfield',
    '#default_value' => variable_get('traqli_account', ''),
    '#size' => 15,
    '#maxlength' => 20,
    '#required' => TRUE,
    '#description' => t('This ID is unique to each site you want to track Traqli. To get a Traqli ID, <a href="@getaccount">register you site with Traqli service</a>, or if you alredy have registered you site, go to your Accounts to see the ID to Manage integrations site profile. <a href="@propertyid">Find integration ID on the site</a>.', ['@getaccount' => url('https://traq.li/solutions/email-personalization#section-form'), '@propertyid' => url('http://home.traq.li/#/integrations'),]),
  ];

  $form['traqli_integration_num'] = [
    '#title' => t('Manage integrations ID'),
    '#type' => 'textfield',
    '#default_value' => variable_get('traqli_integration_num', ''),
    '#size' => 15,
    '#maxlength' => 20,
    '#required' => TRUE,
    '#description' => t('Manage integrations ID'),
  ];

  return system_settings_form($form);
}