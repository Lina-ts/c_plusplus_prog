
// CPP Program to illustrate
// std::setbase manipulator
#include <iostream>
#include <iomanip> // std::setbase
  
int main()
{
    // set base to hexadecimal
    std::cout << std::setbase(16);
  
    // displaying 255 in hexadecimal
    std::cout << 255 << std::endl;
  
    // set base to Octal
    std::cout << std::setbase(8);
  
    // displaying 255 in Octal
    std::cout << 255 << std::endl;
    return 0;
}
