#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>



using namespace std;

std::ifstream inFile("provaders.csv");
std::vector<std::string> vocabulory;

string lineStr;
while (getline(inFile, lineStr))
    {
        vocabulory.push_back(line);
        //std::cout << vocabulory.back() << std::endl;
}
std::cout << vocabulory.back() << std::endl;

