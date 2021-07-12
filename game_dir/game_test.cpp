#include <iostream>
#include "Mammal.h"
#include "Dog.h"
#include "Cat.h"
#include "Human.h"
using namespace std;


int main()
{
	Human human;
	human.breathe(); // для дыхания используется функционал базового класса Млекопитающее
	human.talk();
	human.walk();
	Cat cat;
	cat.breathe(); // для дыхания используется функционал базового класса Млекопитающее
	cat.talk();
	cat.walk();
	Dog dog;
	dog.breathe();
	dog.talk();
	dog.walk();
}
