#include <iostream>
#include <vector>
#include <array>
#include <string>

/*
//8 Вопрос
struct Fish
{
	std::string kind;
	int weight;
	double lenght;
};

//10 Вопрос
enum Response
{
	NO,
	YES,
	MAYBE
};
*/
//2
struct Pizza
{
	std::string name;
	double diameter;
	double weight;
};
int main()
{	
	//1 Вопрос
	/*char actor[30];
	short betsie[100];
	float chuck[13];
	long double dipsea[64];
	
	//2 Вопрос
	std::array<char, 30> actor;
	std::array<short, 100> betsie;
	std::array<float, 13> chuck;
	std::array<long double, 64> dipsea;

	//3 Вопрос
	int array[5] {1, 3, 5, 7, 9};

	//4 Вопрос
	int even = array[0] + array[4];
	std::cout << "even =  " << even << std::endl;

	//5 Вопрос /*массив chuck не инициализирован, так что хз что он там должен отображать 
	float ideas = chuck[1];

	//6 Вопрос
	char str[13] = "cheeseburger";

	//7 Вопрос
	std::string strin("Waldorf Salad");*/

	//9 Вопрос
	//Fish karas = {"karasevyi", 5, 4.0};

	//11 Вопрос
	/*double ted = 10;
	double* ptr = &ted;
        std::cout << "ted = " << *ptr << std::endl;

	//12 Вопрос
	float treacle[] = {1.6, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.4};
	float* a_ptr = treacle;
	float l_ptr = *(a_ptr+9);
	std::cout << "treacle[0] = " << *a_ptr << " treacle[9] = " << l_ptr << std::endl;
	
	//13 Вопрос
	std::cout << "Enter positive number: " << std::endl;
	int num_arr;
	std::cin >> num_arr;
	//int* array = new int[num_arr];
	//delete[] array;	
	std::vector<int>array(num_arr);
	
	//14 Вопрос
	//std::cout << (int *) "Home of the jolly" << std::endl;
	
	//15 Вопрос
	Fish * ps = new Fish;
	std::cout << "Enter kind: " << std::endl;
	std::cin >> ps->kind;
	std::cout << "Kind: " << ps->kind << std::endl;*/



	//1
	/*std::cout << "What is your first name? ";
	char name[30];
	std::cin.getline(name, 30);
	std::cout << "What is your last name? ";
	char last_name[40];
	std::cin.getline(last_name, 40);
	std::cout << "What letter grade do you deserve? ";
	char grade;
	std::cin >> grade;
	std::cout << "What is your age? ";
	int age;
	std::cin >> age;
	std::cout << "Name: " << last_name << ", " << name << std::endl;
	std::cout << "Grade: " << grade << std::endl;	
	std::cout << "Age: " << age << std::endl;
	*/ 
	//2
	
	std::cout << "Enter pizza name: ";
	Pizza pizza;
	std::cin >> pizza.name;
	std::cout << "Enter pizza diameter: ";
	std::cin >> pizza.diameter;
	std::cout << "Enter pizza weight: ";
	std::cin >> pizza.weight;
	std::cout << "Name: " << pizza.name << std::endl;
	std::cout << "Diameter: " << pizza.diameter << std::endl;
	std::cout << "Weight: " << pizza.weight << std::endl;
	
	return 0;
}
