#include "Scanner.h"

Scanner::Scanner(const char* n, double time, int d) {
	strcpy(name, n);
	id = d;
        lifetime = time;
}
void Scanner::setID(int d) {
	id = d;
}
void Scanner::show() {
	std::cout << "Name: " << name << " Lifetime: " << lifetime << " ID: " << id << std::endl;
}
	
