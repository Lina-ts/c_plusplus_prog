#pragma once 
#include <iostream>
#include "Mammal.h"

using namespace std;

class Cat : public Mammal // класс Кошка наследуется от класса Млекопитающее
{
public:
Cat()
{
        cout << "Кошка родилась" << endl;
}
~Cat()
{
        cout << "Кошка ушла в мир иной" << endl;
}
virtual void talk() //override
{
        cout << "Мяу!" << endl;
}
// осуществление ходьбы для кошки... такое же как и для собаки!
virtual void walk() override
{
        cout << " Левая передняя лапа и задняя правая лапа, правая передняя лапа и левая задняя лапа... со скоростью " << speed << endl;
}
};

