#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;
int main(int argc, char** argv)
{	
	std::ifstream file("num.csv");
	std::string line;
	int rowCount=0;
   	int rowIdx=0;

        while(getline(file,line)){
          rowCount++;
        }

	vector<string> data[rowCount];

	file.clear();
	file.seekg(file.beg);

	while(getline(file,line))
	{
		stringstream ss(line);
		string value;
		while(getline(ss,value,',')){
			data[rowIdx].push_back(value);
		}
		rowIdx++;
	}
	file.close();

	int colNum=3;
	/*for(int row=0; row<rowCount; row++)
		{
      cout << data[row][2] << "\t";  //print every value in column 47 only
   }*/
	string colName = "OwnerId";
	vector<string>::iterator it = find(data[0].begin(), data[0].end(),colName);
	colNum = std::distance(data[0].begin(), it);

	for(int row=0; row<rowCount; row++)
   {
      cout << data[2][colNum] << "\t";  //print every value in column 47 only
   }

   	cout << endl;

}
