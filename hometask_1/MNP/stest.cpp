#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <string_view>

using namespace std;
class MNP
{
	private:
		vector<vector<string>> data_table;
		//int strToInt(std::string str);
	public:
		bool readCSV();
		std::string findNumber(std::string number);
};

bool MNP::readCSV() {
	try {
		std::ifstream file("/home/akurbanova/hub_prog/it_school/hometask_1/num.csv");
		
		//std::string tmp;
		std::string number;
		string str;
                int row = 0;
                int count = 0;
                string tmp;

                while (getline(file, str)) {

                        data_table.push_back(vector<string>());
                        for (int i = 0; i < str.size(); i++) {
                                if (str[i] == ',') {

                                        tmp = str.substr(count, i - count);
                                        count = i + 1;
                                        data_table[row].push_back(tmp);
                                }
                        }

                        tmp = str.substr(count, str.size());
                        data_table[row].push_back(tmp);
                        count = 0;
                        row++;
                }

		/*while (getline(file, number, ','))
                {
                        data_table.push_back(tmp);
                }*/
	}
	catch (const char* exception) {
		std::cerr << "Error readCSV(): " << exception << " "  << '\n';
        }

        return true;
}

std::string MNP::findNumber(std::string number) {
	auto inputNumber = std::stoi(number);

	for (int i = 1; i < data_table.size(); i++) {

                auto numberFrom = atoi(data_table[i][0]);
                auto numberTo = atoi(data_table[i][1]);

                if ((inputNumber >= numberFrom) && (inputNumber <= numberTo)) {
                        return data_table[i][2];
                }

        }

        return "No number";

}
int main()
{
	std::string number;
	std::cout << "Please input your number: " << std::endl;
	std::cin >> number;

	/*std::ifstream file("/home/akurbanova/hub_prog/it_school/hometask_1/number.txt");
	std::sring str;

	if (file.is_open())
        {
		std::vector<std::string> row;
		while (getline(file, number, ','))
                {
                        row.push_back(vector<std::string>());
	        }
		auto inputNumber = strToInt(number);


	}
        else
        {       std::cout << "Fail open file" << std::endl;
                return -1;
        }*/
	return 0;
}

