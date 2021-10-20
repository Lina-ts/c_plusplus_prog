#ifndef Train_H
#define Train_H
#include <iostream>

class Train 
{
public:
	Train();	
	~Train();	
	void on();	
	void off();
        void open_doors();
	void close_doors();
	void show();	//состояние поезда	
private:
	int move;
	int doors;
};
#endif
