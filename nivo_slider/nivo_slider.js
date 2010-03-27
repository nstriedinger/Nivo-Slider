Drupal.behaviors.nivo_slider = function(context) {
	//alert("hello");
	$settings = Drupal.settings.nivo_slider;
	  $('#slider').nivoSlider({
			effect:$settings.effect,
			slices:15,
			animSpeed:$settings.animSpeed,
			pauseTime:3000,
			directionNav:false, //Next & Prev
			directionNavHide:true, //Only show on hover
			controlNav:true, //1,2,3...
			pauseOnHover:true, //Stop animation while hovering
			beforeChange: function(){},
			afterChange: function(){}
		});

};