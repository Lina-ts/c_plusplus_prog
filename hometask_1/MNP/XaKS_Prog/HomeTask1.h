
#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;



class MNP {

private:
	vector<vector<string>> data_table;
	int strToInt(string str);

public:
	bool readCSV();
	string findNumber(string number);
	


};
