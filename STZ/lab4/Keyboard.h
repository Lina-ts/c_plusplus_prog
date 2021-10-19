#ifndef KEYBOARD_H
#define KEYBOARD_H
#include "Peripheral.h"

class Keyboard : public Peripheral
{
public:
	Keyboard(const char*, double, int); //name, lifetime, id
	void setID(int);	
	void show();
protected:
private:
	int id;
};
#endif
