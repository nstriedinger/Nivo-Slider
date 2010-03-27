Drupal.behaviors.nivo_slider = function(context) {
  // For each of our sliders provide the settings
  $.each(Drupal.settings.nivo_slider, function(id) {
	  $('#'+id).nivoSlider(this);
  });
};
