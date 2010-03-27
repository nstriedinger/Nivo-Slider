<?php
/**
  * Implementation of views_plugin_style().
  */
class nivo_slider_style_plugin extends views_plugin_style {
 /**
   * Set default options
   */
  function options(&$options) {
    $options['effect'] = 'random';
    $options['slices'] = 15;
    $options['animSpeed'] = 5;
    $options['pauseTime'] = 3;
    $options['directionNav'] = true;
    $options['directionNavHide'] = true;
    $options['controlNav'] = true;
    $options['pauseOnHover'] = true;
  }
  function options_form(&$form, &$form_state) {
    $form['effect'] = array(
      '#type' => 'select',
      '#title' => t('Effect'),
      '#options' => array('sliceDown'=>'sliceDown', 'sliceDownLeft'=>'sliceDownLeft', 'sliceUp'=>'sliceUp', 'sliceUpLeft'=>'sliceUpLeft', 'sliceUpDown'=>'sliceUpDown', 'sliceUpDownLeft'=>'sliceUpDownLeft', 'fold'=>'fold', 'fade'=>'fade', 'random'=>'random'),
      '#default_value' => $this->options['effect'],
      '#description' => t('Effect'),
    );
    $form['slices'] = array(
      '#type' => 'textfield',
      '#title' => t('How many slices of image'),
      '#size' => 10,
      '#maxlength' => 60,
      '#default_value' => $this->options['slices'],
      '#description' => t('How many slices of image.'),
    );
    $form['animSpeed'] = array(
      '#type' => 'textfield',
      '#title' => t('Speed of the animation'),
      '#size' => 10,
      '#maxlength' => 60,
      '#default_value' => $this->options['animSpeed'],
      '#description' => t('Animation speed in seconds.'),
    );
    $form['pauseTime'] = array(
      '#type' => 'textfield',
      '#title' => t('Pause time'),
      '#size' => 10,
      '#maxlength' => 60,
      '#default_value' => $this->options['pauseTime'],
      '#description' => t('Pause time in seconds.'),
    );
    $form['directionNav'] = array(
      '#type' => 'select',
      '#title' => t('Enable direction navigation?'),
      '#options' => array('true'=>'true', 'false'=>'false'),
      '#default_value' => $this->options['directionNav'],
    );
    $form['directionNavHide'] = array(
      '#type' => 'select',
      '#title' => t('Hide direction navigation?'),
      '#options' => array('true'=>'true', 'false'=>'false'),
      '#default_value' => $this->options['directionNavHide'],
    );
    $form['controlNav'] = array(
      '#type' => 'select',
      '#title' => t('Enable control navigation?'),
      '#options' => array('true'=>'true', 'false'=>'false'),
      '#default_value' => $this->options['controlNav'],
    );
    $form['pauseOnHover'] = array(
      '#type' => 'select',
      '#title' => t('Pause on hover?'),
      '#options' => array('true'=>'true', 'false'=>'false'),
      '#default_value' => $this->options['pauseOnHover'],
    );
  }
}
