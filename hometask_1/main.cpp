#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <string_view>
#include <algorithm>

bool containsNut(std::string_view str)
{

  // std::string_view::find возвращает std::string_view::npos, если он не нашел подстроку.
  // В противном случае, он возвращает индекс, где происходит вхождение подстроки в строку str
  return (str.find("9218400000") != std::string_view::npos);
}


int main()
{	
	std::ifstream file("/home/akurbanova/hub_prog/it_school/hometask_1/number.txt");
	std::string num;

	if (file.is_open())
	{
		std::cout << "File open!" << std::endl;
		std::vector<std::string> values;

		while (getline(file, num, ','))
		{
			values.push_back(num);
		}	
		/*for (auto i : values)
			std::cout << i << ' ';*/
  		auto found{ std::find_if(values.begin(), values.end(), containsNut) };

  		if (found == values.end())
  		{
    			std::cout << "No nuts\n";
  		}
	
 		 else
  		{
    			std::cout << "Found " << *found << '\n';
  		}

	}
	else
	{	std::cout << "Fail open file" << std::endl;
		return -1;
	}
}
