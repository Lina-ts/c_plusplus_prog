#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>  //std::find
using namespace std;
int main(int argc, char** argv)
{
   ifstream fin("num.csv");
   string line;
   int rowCount=0;
   int rowIdx=0; //keep track of inserted rows

   //count the total nb of lines in your file
   while(getline(file,line)){
      rowCount++;
   }

   //this will be your table. A row is represented by data[row_number].
   //If you want to access the name of the column #47, you would
   //cout << data[0][46]. 0 being the first row(assuming headers)
   //and 46 is the 47 column.
   //But first you have to input the data. See below.
   vector<string> data[rowCount];

   fin.clear(); //remove failbit (ie: continue using fin.)
   fin.seekg(fin.beg); //rewind stream to start

   while(getline(fin,line)) //for every line in input file
   {
      stringstream ss(line);  //copy line to stringstream
      string value;
      while(getline(ss,value,',')){       //for every value in that stream (ie: every cell on that row)
         data[rowIdx].push_back(value);//add that value at the end of the current row in our table
      }
      rowIdx++;   //increment row number before reading in next line
   }
//}
   fin.close();


   //Now you can choose to access the data however you like.
   //If you want to printout only column 47...

/*   int colNum=3;  //set this number to the column you want to printout

   for(int row=0; row<rowCount; row++)
   {
      cout << data[row][colNum] << "\t";  //print every value in column 47 only
   }
   cout << endl;*/

   int colNum;
   string colName = "OwnerId";

   //1.Find the index of column name "computer science" on the first row, using iterator
   //note: if "it == data[0].end()", it means that that column name was not found
   vector<string>::iterator it = find(data[0].begin(), data[0].end(),colName);

   //calulate its index (ie: column number integer)
   colNum = std::distance(data[0].begin(), it);

   //2. Print the column with the header "computer science"
   for(int row=0; row<rowCount; row++)
   {
      cout << data[row][colNum] << "\t";  //print every value in column 47 only
   }
   cout << endl;



   return 0;
}
