#include <algorithm>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <iterator>
#include <fstream>

int main()
{
    std::ifstream file("/home/akurbanova/hub_prog/it_school/hometask_1/num.csv");
    
   
    /*std::string str = "Is a string";*/
    std::stringstream s(file);
    std::vector <std::string> svec;
    for(std::string word;s>>word;svec.push_back(word));
    	std::copy(svec.begin(),svec.end(),std::ostream_iterator <std::string> (std::cout,"\n"));
    return 0;
}
