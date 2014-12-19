<?php
/**
 * @file
 * authorization_registration.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function authorization_registration_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_hostel_num'
  $field_instances['user-user-field_hostel_num'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Номер общежития',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_hostel_num',
    'label' => 'Номер общежития',
    'required' => 1,
    'settings' => array(
      'max' => 8,
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'user-user-field_phone'
  $field_instances['user-user-field_phone'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Телефон для связи (16 цифр)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_phone',
    'label' => 'Телефон',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'user-user-field_room_num'
  $field_instances['user-user-field_room_num'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Номер комнаты в общежитии',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => ' ',
        ),
        'type' => 'number_integer',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_room_num',
    'label' => 'Номер комнаты',
    'required' => 1,
    'settings' => array(
      'max' => 800,
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Номер комнаты');
  t('Номер комнаты в общежитии');
  t('Номер общежития');
  t('Телефон');
  t('Телефон для связи (16 цифр)');

  return $field_instances;
}
