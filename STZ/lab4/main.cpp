#include "Peripheral.h"
#include "Keyboard.h"
#include "Scanner.h"

int main()
{
	Keyboard k1("Defender", 1.5, 643829);
	Keyboard k2("Razer", 4.0, 834747);
	Scanner s1("Canon", 4.5, 834733);
	Scanner s2("Avision", 2.5, 934334);
	Peripheral* pr[4];
	double average=0;
        int i;
	pr[0]=&k1;
	pr[1]=&k2;
	pr[2]=&s1;
	pr[3]=&s2;

	for(i=0; i<4; i++)
		pr[i]->show();
	
	for(i=0; i<4; i++) {
		average += (*(pr+i))->getLifetime();
	}
	average /=4;
	std::cout << "Средний срок эксплуатации: " << average << std::endl;	
	
	return 0;
}
