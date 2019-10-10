#pragma once
#include <iostream>
#include <allegro5/allegro.h>

using namespace std;

static class Ne_configuration {
public:
	static int default_screen_width;
	static int default_screen_height;
	static int desired_screen_width;
	static int desired_screen_height;
	static int current_screen_width;
	static int current_screen_height;
	static string project_title;
	static float frames_per_second;
	static int day_time;
	static int fonts_max_size;

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