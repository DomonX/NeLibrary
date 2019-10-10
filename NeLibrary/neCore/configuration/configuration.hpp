#pragma once
#include <iostream>
#include <allegro5/allegro.h>

using namespace std;

class Ne_configuration {
public:
	int default_screen_width;
	int default_screen_height;
	int desired_screen_width;
	int desired_screen_height;
	int current_screen_width;
	int current_screen_height;
	string project_title;
	float frames_per_second;
	int day_time;
	int fonts_max_size;

	Ne_configuration() {
		default_screen_width = 640;
		default_screen_height = 360;
		desired_screen_width = 1920;
		desired_screen_height = 1080;
		current_screen_width = default_screen_width;
		current_screen_height = default_screen_height;
		project_title = "Project Title";
		frames_per_second = 60.0;
		day_time = 300;
		fonts_max_size = 128;
	}
};

Ne_configuration* ne_config = new Ne_configuration();