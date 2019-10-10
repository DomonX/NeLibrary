#include <iostream>
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
using namespace std;
int main() {
	al_init();
	al_install_keyboard();
	al_init_image_addon();
	ALLEGRO_KEYBOARD_STATE klawiatura;
	ALLEGRO_DISPLAY* okno = al_create_display(320, 240);
	al_set_window_title(okno, "Allegro5 kurs pierwsze okno");
	al_get_keyboard_state(&klawiatura);
	while (!al_key_down(&klawiatura, ALLEGRO_KEY_ESCAPE)) {
		al_get_keyboard_state(&klawiatura);
		al_clear_to_color(al_map_rgb(0, 255, 0));
		al_flip_display();
	}
	al_destroy_display(okno);

	return 0;
	cout << "Hello, World!";
	return 0;
}