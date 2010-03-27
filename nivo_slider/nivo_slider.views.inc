<?php
/**
 * Implementation of hook_views_plugins
 */
function nivo_slider_views_plugins() {
  return array(
    'style' => array(
      'nivo_slider' => array(
        'title' => t('Nivo Slider'),
        'theme' => 'views_view_nivo_slider',
        'help' => t('Display one node at a time while rotating through them.'),
        'handler' => 'nivo_slider_style_plugin',
        'uses row plugin' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
}
