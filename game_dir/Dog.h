#pragma once
#include <iostream>
#include "Mammal.h"
using namespace std;

class Dog : public Mammal // : двоеточие используется для наследования
{
public:
Dog()
{
cout << "Собака родилась!" << endl;
} ~
Dog()
{
cout << "Собака ушла в мир иной" << endl;
}
virtual void talk() //override
{
        cout << "Гав!" << endl; // собаки говорят только гав!
}
// осуществление ходьбы для собаки
virtual void walk() override
{
        cout << "Левая передняя лапа и задняя правая лапа, правая передняя лапа и левая задняя лапа... со скоростью" << speed << endl;
}
};
