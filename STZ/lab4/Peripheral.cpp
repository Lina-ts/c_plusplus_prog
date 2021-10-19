#include "Peripheral.h"

Peripheral::Peripheral():lifetime(0) {
	strcpy(name, "Noname");
}
double Peripheral::getLifetime() {
	return lifetime;
}
void Peripheral::show() {
	std::cout << "Name: " << name << " lifetime: " << lifetime << std::endl;
}
void Peripheral::setName(char* n) {
	strcpy(name, n);
}
void Peripheral::setLifetime(double time) {
	lifetime = time;
}
