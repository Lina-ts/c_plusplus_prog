#include "lab3.h"
#include <iostream>
//#include "lab3.h"

Train::Train(): move(0), doors(1) { //двери закрыты, поезд не едет		

}
Train::~Train() {

}
void Train::on() {
	if (doors) move = 1;
	else std::cout << "***невозможно запустить поезд пока двери открыты***" << std::endl;
}
void Train::off() {
	move = 0;
}
void Train::open_doors() {
	if (move == 0) doors = 0;
	else std::cout << "***невозможно открыть двери во время движения поезда***" << std::endl;
}
void Train::close_doors() {
	doors = 1;
}
void Train::show() {
	if (move) std::cout << "движется" << std::endl;
	else std::cout << "не движется" << std::endl;
	if (doors) std::cout << "двери закрыты" << std::endl;
	else std::cout << "двери открыты" << std::endl;
}

