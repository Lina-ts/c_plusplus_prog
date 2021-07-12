#include <iostream>
#include <map>
#include <string>

using namespace std;
int main()
{
	map<int, string> myMap;
	myMap.insert(make_pair(3, "cat"));
	myMap.insert(make_pair(2, "dog"));
	myMap.insert(make_pair(5, "chicken"));
	myMap.insert(make_pair(4, "lion"));
	myMap.insert(make_pair(1, "spider"));
 
	map<int, string>::const_iterator it; // объявляем итератор
	it = myMap.begin(); // присваиваем ему начальный элемент вектора
	while (it != myMap.end()) // пока итератор не достигнет последнего элемента
	{
		cout << it->first << "=" << it->second << " "; // выводим значение элемента, на который указывает итератор
		++it; // и переходим к следующему элементу
	}
 
	std::cout << '\n';
}
