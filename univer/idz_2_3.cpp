#include <iostream>

struct Time
{
	int hour;
	int minutes;
};
template <typename T>
void sortNum(T array[], int length)
{
	for (int i = 0; i < length; i++) {
		if (static_cast<int>(array[i]) % 2 != 0)
			std::cout << array[i] << std::endl;
	}
	for (int i = length; i--;) {
		if (static_cast<int>(array[i]) % 2 == 0)
			std::cout << array[i] << std::endl;
	}
}

void sortNum(Time array[], int length)
{
	for (int i = 0; i < length; i++) {
		if (static_cast<int>(array[i].hour) % 2 != 0)
			std::cout << array[i].hour << ":" << array[i].minutes << std::endl;
	}
	for (int i = length; i--;) {
		if (static_cast<int>(array[i].hour) % 2 == 0)
			std::cout << array[i].hour << ":" << array[i].minutes << std::endl;
	}
}

template <typename T>
void cin_array(T array[], int length)
{
	for (int i = 0; i < length; i++) {
		std::cout << "Число " << i + 1 << ": ";
		std::cin >> array[i];
	}
}

void cin_array(Time array[], int length)
{
	for (int i = 0; i < length; i++) {
		std::cout << "Число " << i + 1 << ": ";
		std::cin >> array[i].hour >> array[i].minutes;
		while (array[i].minutes > 59)
		{
			std::cout << "Число минут не может превышать 59. Пожалуйста, введите корректное число\nЧисло " << i + 1 << ": ";
			std::cin >> array[i].hour >> array[i].minutes;
		}
	}
}
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	std::cout << "Введите количество элементов в целочисленном массиве: " << std::endl;
	int length_int;
	std::cin >> length_int;
	int *array_int = new int[length_int];
	std::cout << "Введите " << length_int << " целых чисел: " << std::endl;
	cin_array(array_int, length_int);
	sortNum(array_int, length_int);
	delete[] array_int;

	std::cout << "Введите количество элементов в вещественном массиве: " << std::endl;
	int length_double;
	std::cin >> length_double;
	double *array_double = new double[length_double];
	std::cout << "Введите " << length_double << " вещественных чисел: " << std::endl;
	cin_array(array_double, length_double);
	sortNum(array_double, length_double);	
	delete[] array_double;

	std::cout << "Введите количество элементов в массиве структур: " << std::endl;
	int length_time;
	std::cin >> length_time;

	Time* array_time = new Time[length_time];
	std::cout << "Введите " << length_time << "пар часов и минут: " << std::endl;
	cin_array(array_time, length_time);
	sortNum(array_time, length_time);
	delete[] array_time;

	return 0;
}
