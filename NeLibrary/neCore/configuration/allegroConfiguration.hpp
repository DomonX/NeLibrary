#pragma once
#include <allegro5/allegro.h>
class Ne_al_configuration {
public:
	ALLEGRO_TIMER * timer;
	ALLEGRO_EVENT_QUEUE * event_queue;
	ALLEGRO_EVENT events;
	ALLEGRO_DISPLAY* window;
	ALLEGRO_KEYBOARD_STATE keyboard;
};

Ne_al_configuration * ne_al_config = new Ne_al_configuration();