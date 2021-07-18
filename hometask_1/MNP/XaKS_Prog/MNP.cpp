#include "HomeTask1.h"
#include <stdlib.h>

bool MNP::readCSV() {
	try {

		string filename;
		cout << "Please enter the path to the file .csv : " << endl;
		cin >> filename;

		ifstream file (filename);

		if (!file) {

			throw "invalid file name";

		}

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

	}
	catch (const char* exception) {
		cerr << "Error readCSV(): " << exception << " "  << '\n';
	}

	return true;
}

string MNP::findNumber(string number) {

	auto inputNumber = strToInt(number);

	int counter = 0;

	for (int i = 1; i < data_table.size(); i++) {
		
		auto numberFrom = strToInt(data_table[i][0]);
		auto numberTo = strToInt(data_table[i][1]);

		if ((inputNumber >= numberFrom) && (inputNumber <= numberTo)) {
			return data_table[i][2];
		}

	}

	return "No number";
}


int MNP::strToInt(string str) {

	const char* c = str.c_str();
	char* end;
	int base = 10;
	auto num = _strtoi64(c, &end, base);
	return num;

}
