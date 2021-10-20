#include "lab3.h"
int main()
{
        Train train;
        int command, end = 1;
        std::cout << "Текущий статус поезда: " << std::endl;
        train.show();

        while (end) {
                std::cout << " Используйте 1, чтобы закрыть двери\n Используйте 2, чтобы чтобы запустить поезд\n Используйте 3, чтобы остановить поезд\n Используйте 4, чтобы открыть двери" << std::endl;
                std::cout << "Введите команду -> ";
                std::cin >> command;
                switch (command) {
                        case 1: train.close_doors(); train.show(); break;
                        case 2: train.on(); train.show(); break;
                        case 3: train.off(); train.show(); break;
                        case 4: train.open_doors(); train.show(); break;
                        default: end = 0;

                }
        }
        return 0;

};
