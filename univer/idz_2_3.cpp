#include <iostream>
#include <ctime>

void negNum(int *array, int length)
{
	for (int i = 0; i < length; i++) {
                if (array[i] % 2 != 0)
                        std::cout << array[i] << std::endl;
        }	
}

void positNum(int *array, int length)
{
	for (int i = length; --i;) {
                if (array[i] % 2 == 0)  
                       std::cout << array[i-1] << std::endl;	
	}
}
int main(int argc, char *argv[])
{
	/*int length_imass, *imass;
	std::cout << "Vvedite kol-vo elementov mass: " << std::endl;
	std::cin >> length_imass;
	
	imass = new int [length_imass];
	std::cout << "Vvedite " << length_imass << " celih chisel" << std::endl;
*/
	std::cout << "Vvedite kol-vo elementov mass: " << std::endl;
	int length;
	std::cin >> length;
	
	int *array = new int [length];

	for(int i=0; i < length; i++) {
		std::cout << "Elem " << i+1 << ": ";
		std::cin >> array[i]; 	
	}
	
	std::cout << "Here negNum " << std::endl;
	
	negNum(array, length);
	/*for (int i=0; i < length; i++)
		std::cout << array[i] << std::endl;
	*/
	std::cout << "Here posNum " << std::endl;
	
	positNum(array, length);
	delete[] array;



	//int *mas = new int [10] = {24, 16, 30, 36, 75, 46, 76, 81, 23, 17};
	//int mas_length = sizeof(mas) / sizeof(mas[0]);

	/*for (int i = 0; i < length; i++) {
		//std::cout << mas[i] << std::endl;
		if (array[i] % 2 != 0) 
			std::cout << array[i] << std::endl;
	}
	
	for (int i = 0; i < length; i++) {
		if (array[i] % 2 == 0) { 
			
			std::cout << array[i] << std::endl;
			}				
			//std::cout << mas[i] << std::endl;
	
	}*/
	return 0;
}
