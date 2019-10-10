#pragma once
#include <allegro5/allegro.h>
static class Ne_al_configuration {
public:
	static ALLEGRO_TIMER* timer;
	static ALLEGRO_EVENT_QUEUE* event_queue;
	static ALLEGRO_EVENT events;
	static ALLEGRO_DISPLAY* window;
	static ALLEGRO_KEYBOARD_STATE keyboard;
};