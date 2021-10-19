#include <iostream>
#include <math.h>

void cin_array(int array, int num_coef)
{
	for(int i = 0; i < num_coef; i++) {
		std::cout << "Коэффициент " << i + 1 << ": ";
		std::cin >> array[i];
	}
}

int calculate(int x, int array, int exp)
{
        std::cout << "exp = " << exp << std::endl;
        std::cout << "x = " << x << std::endl;
        std::cout << "array[i] = " << array << std::endl;
	
	int sum=0;
        for(int i = exp; i > 0; i++)
                sum+=array[i]*pow(x,i);
	return sum;
}

int main()
{	

	setlocale(LC_ALL, "Russian");
	std::cout << "Введите степень многочлена: ";
	int exp;
	std::cin >> exp;
	std::cout << "Введите коэффициенты многочлена: ";
	int num_coef = exp + 1;
	int array[num_coef];
	cin_array(array, num_coef);
	std::cout << "Введите x: ";
	int x;
	std::cin >> x;
	calculate(x, array, exp);
		
/*	std::cout << "exp = " << exp << std::endl;
	std::cout << "x = " << x << std::endl;
	std::cout << "array[i] = " << array[i] << std::endl;
*/
/*
	int sum=0;
	for(int i = exp; i > 0; i++)
		sum+=array[i]*pow(x,i);
*/	
//	std::cout << "Значение равно: " << sum << std::endl;
//	*/
//	std::cout << array[0] << "x^" << exp << "+" << array[1] << "x + " << array[2] << std::endl;	
	return 0;
}
