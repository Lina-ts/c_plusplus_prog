#ifndef SCANNER_H
#define SCANNER_H
#include "Peripheral.h"

class Scanner : public Peripheral
{
public:
	Scanner(const char*, double, int); //name, lifetime, id
	void setID(int);
	void show();
protected:
private:
        int id;
};
#endif
