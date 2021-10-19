#include "Keyboard.h"

Keyboard::Keyboard(const char* n, double time, int d) {
	strcpy(name, n);
	id = d;
	lifetime = time;
}
void Keyboard::setID(int d) {
	id = d;
}
void Keyboard::show() {
	std::cout << "Name: " << name << " Lifetime: " << lifetime << " ID: " << id << std::endl;
}
