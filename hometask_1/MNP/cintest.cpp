#include <iostream>
#include <string>


int main()
{	
	//Ввод и вывод номера 
	std::string phoneNumber;
	std::cout << "Введите номер телефона: " << std::endl;
	std::getline(std::cin, phoneNumber);
	std::cout << "Номер: " << phoneNumber << std::endl;
	
	return 0; 	
}	
