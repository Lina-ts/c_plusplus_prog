#include <iostream>

class Mammal //класс млекопетающее
{
protecred:	//protecred переменные похожи на private (доступны в этом классе, но не снаружи). Отличие в том, что protecred доступны и для происходящих подклассов (производных классов)
  int hp;
  double speed;
public:
  Mammal()	//Коструктор 
  {
	hp = 100;
	speed = 1.0;
	std::cout << "Млекопетающее создано!" << std::endl;
  }
  ~Mammal()
  {
	std::cout << "Млекопитающее скончалось" << std::endl;
  }
  void breathe()
  {
	std::cout << "Вдох...Выдох" << std::endl;
  }
  virtual void talk()
  {
	std::cout << "Млекопитающее говорит...." << std::endl;
  }
  virtual void walk() = 0;
};

class Dog : public Mammal //: двоеточие используется для наследования
{
public:
  Dog()
  {
	std::cout << "Собака родилась!" << std::endl;
  }
  ~Dog()
  {
	std::cout << "Собака ушла в мир иной" << std::endl;
  }
  virtual void talk() override
  {
	  std::cout << "Гав!" << std::endl;
  }
  virtual void walk() override
  {
	std::cout << "Левая передняя лапа и задняя правая лапа, правая передняя лапа и левая задняя лапа... со скоростью" << speed << std::endl;
  }
};

class Cat : public Mammal // класс Кошка наследуется от класса Млекопитающее
{
public:
  Cat()
  {
	std::cout << "Кошка родилась" << std::endl;
  }
  ~Cat()
  {
	std::cout << "Кошка ушла в мир иной" << std::endl;
  }
  virtual void talk() override
  {
	std::cout << "Мяу!" << std::endl;
  }
  virtual void walk() override
  {	
	  std::cout << "Левая передняя лапа и задняя правая лапа, правая передняя лапа и левая задняя лапа... со скоростью" << speed << std::endl;
  }
};

class Human : public Mammal
  bool civilized;
public:
  Human()
  {
	std::cout << "Новый человек родился" << std::endl;
  	speed = 2.0; //меняем скорость. Так как конструктор класса-потомка запускается после конструктора базового класса,
		     //устанавливаются специальные для этого класса переменные-члены
	civilized = true;
  }
  ~Human()
  {
	std::cout << "Человек ушёл в мир иной" << std::endl;
  }
  virtual void talk() override
  {
        std::cout << "Я хорошо выгляжу для... человека!" << std::endl;
  }
  virtual void walk() override
  {
          std::cout << "Левой, правой, левой, правой со скоростью" << speed << std::endl;
  }
  // Человек не будет нападать, если он цивилизован
  void attack(Human & other)
  {
	  if(civilized)
		  std::cout << "Почему один человек должен нападать на другого? Я отказываюсь" << std::endl;
	  else
		  std::cout << "Человек нападает на другого!" << std::endl;
  }
};

int main()
{
	Human human;
	human.breathe();
	human.talk();
	human.walk();

	Cat cat;
	cat.breathe();
	cat.talk();
	cat.walk();

	Dog dog;
	dog.breathe();
	dog.talk();
	dog.walk();

	return 0;
}
