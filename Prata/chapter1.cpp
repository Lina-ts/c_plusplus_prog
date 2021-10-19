#include <iostream>
/* 3 задание
void mice()
{
	std::cout << "Three blind mice" << std::endl;
}

void run()
{
	std::cout << "See how they run" << std::endl;	
}*/
/* 5 упражнение
int convert(int degree)
{
	return 1.8*degree+32;
}*/
/* 6 упражнение
double convert(double light_years)
{
	return light_years * 63240;
}
*/
/* 7 упражнение
void print(int hours, int minutes)
{
	std::cout << "Enter the number of hours: " << hours << std::endl;
	std::cout << "Enter the number of minutes: " << minutes << std::endl;
	std::cout << "Time: " << hours << ":" << minutes << std::endl;
}*/
int main()
{
	setlocale(LC_ALL, "Russian");
	
	/* 7 упражнение
	int hours;
	std::cin >> hours;
	int minutes;
	std::cin >> minutes;
	print(hours, minutes);
	*/
	/*6 упражнение	
	std::cout << "Enter the number of light years: ";
	double light_years;
	std::cin >> light_years;
	double astron_units = convert(light_years);
	std::cout << light_years << " light years = " << astron_units << " astronomical units." << std::endl; 
	*/
	/*5 упражнение	
	std::cout << "Please enter a Celsius value: ";
	int degree;
	std::cin >> degree;
	int fareng = convert(degree);
	std::cout << degree << " degrees Celsius is " << fareng << " degrees Fahrenheit" << std::endl; 
	*/
	/* 4 упражнение
	std::cout << "Введите свой возраст: ";
	int age;
	std::cin >> age;
	std::cout << "Your age in months is " << age*12 << std::endl;
	*/
	/* 3 задание	
	mice();
	mice();
	run();
	run();*/

	/* 2 упражнение
	std::cout << "Введите растояние в фарлонгах: ";
	int farlon;
	std::cin >> farlon;

	int yard = farlon * 220;
	std::cout << "Расстояние в ярдах: " << yard << std::endl;	
	*/	
	/* 1 упражнение
	std::cout << "My name Alina." << std::endl;
	std::cout << "My address Ohtinskay alleya, d.4" << std::endl;*/
	return 0;
}
