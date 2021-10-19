#include <iostream>


int main()
{
	setlocale(LC_ALL, "Russian");
	char sym = 95;
	std::cout << "Введите рост в см: " << sym;
	double sm;	
	std::cin >> sm;

	double met = sm / 100;
	std::cout << "Ваш рост в метрах: " << met;
	return 0;

}
