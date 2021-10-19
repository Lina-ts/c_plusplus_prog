#include <iostream>

class Polynomial
{
public:
	int exp;
	int number_coef;
	int coef = new int[number_coef];
	int x;
public:
	Polynomial (int exp, int coef[])
	{
		std::cout << "Constructor\n";			
	}

	int calculate_value (int exp, int coef[], x)
	{
		
	}
};

void cin_array(int coef[], int number_coef)
{
	for(int i = 0; i < number_coef; i++)
		std::cin >> coef[i];

}
void menu()
{	
	Polynomial poly1;
	std::cout << "Введите степень многочлена: ";
	std::cin >> poly1.exp;
	std::cout << "Введите количество коэффициентов многочлена: ";
	std::cin >> poly1.number_coef;
	std::cout << "Введите x: ";
	std::cin >> poly1.x;
	std::cout << "Введите коэффициенты многочлена: ";
	cin_array(poly1.coef, poly1.number_coef);

}

int main()
{
	setlocale(LC_ALL, "Russian");
	menu();
	system("pause");
	return 0;
}
