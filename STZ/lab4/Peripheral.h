#ifndef PERIPHERAL_H
#define PERIPHERAL_H
#include <iostream>
#include <string.h>

class Peripheral
{
public:
	Peripheral();
	double getLifetime();
	virtual void show();
	void setName(char*);
	void setLifetime(double);
protected:
	char name[20];
	double lifetime;
private:
};
#endif 
