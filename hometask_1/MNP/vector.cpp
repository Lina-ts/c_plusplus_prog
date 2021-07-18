#include <iostream>
#include <vector>
#include <fstream>
#include <string>

int main()
{
	std::ifstream file("/home/akurbanova/hub_prog/it_school/hometask_1/num.csv");
	
	std::vector<std::string> result;

  // extract substrings one-by-one
  while (!file.eof()) {
    std::string substring;
    file >> substring;
    result.push_back(substring);
  }

  // print all the extracted substrings
  for (const std::string& substring : result) {
    std::cout << substring << std::endl;
  }

}
