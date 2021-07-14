#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;


int main() {
//string numbers = "0,1,2,4,8,16,55,16,00";
  std::ifstream file("/home/akurbanova/hub_prog/it_school/hometask_1/num.csv");

 //stringstream sstream(file);
 /* string token;
  vector<string> result;
  
  string phoneNumber;
  std::cout << "Введите номер телефона: " << std::endl;
  std::cin >> phoneNumber;*/

  /*if(file.is_open())
  {
	  std::cout << "File is open!" << std::endl;
	  
  	while(getline(file, token, ',')){
      		result.push_back(token);
  	}	
  	for(auto i : result)
  	{
   		std::cout << i << ' ';
  	}
  }

  else
  {
	std::cout << "Fail open file" << std::endl;
  }*/


  std::string phoneNumber;
  istream_iterator<string> ret, eof=",";
  cout << "Введите номер телефона: " << "\n";
  cin >> phoneNumber;
  ret = find_if(istream_iterator<string>(file), eof, bind1st(equal_to<string>(), phoneNumber));
  cout << (ret != eof ? *++ret : "Phone not found") << endl;

  return 0;
}
