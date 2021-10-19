#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>  //std::find
using namespace std;

class MNP
{
public:
   
   int NumberFrom;
   int NumberTo;
   std::string OwnerId;

   std::string readFile();

};

/*std::string MNP::readFile()
{
   ifstream file("num.csv");

   if(!file)
   {
      std::cerr <<  "Error in opening the file" << std::endl;
      //return 1;
   }
   std::vector<MNP> data;
   MNP temp;
   while (file >> temp.NumberFrom >> temp.NumberTo >> temp.OwnerId)
   {
      data.push_back(temp);
   }

   for (auto i : data)
   {
      std::cout << temp.NumberFrom << ' ' << temp.NumberTo << temp.OwnerId << std::endl;
   }
}*/
int main(int argc, char** argv)
{
   
      //MNP check;
      //check.readFile();

      ifstream file("num.csv");

   if(!file)
   {
      std::cerr <<  "Error in opening the file" << std::endl;
      //return 1;
   }
   std::vector<MNP> data;
   MNP temp;
   while (file >> temp.NumberFrom >> temp.NumberTo >> temp.OwnerId)
   {
      data.push_back(temp);
   }

   for (auto i : data)
   {
      std::cout << temp.NumberFrom << ' ' << temp.NumberTo << temp.OwnerId << std::endl;
   }




   /*ifstream fin("num.csv");
   string line;
   int rowCount=0;
   int rowIdx=0; //keep track of inserted rows

   vector<string> data[rowCount];
   //count the total nb of lines in your file
   while(getline(fin,line)){
      rowCount++;
   }

   vector<string> data[rowCount];

   fin.clear(); 
   fin.seekg(fin.beg); 

   while(getline(fin,line))
   {
      stringstream ss(line);  
      string value;
      while(getline(ss,value,',')){       
         data[rowIdx].push_back(value);
      }
      rowIdx++;   
   }
//}
   fin.close();

   int colNum;
   for(int row=0; row<rowCount; row++)
   {
      cout << data[row][2] << "\t";  
   }
   cout << endl;*/



   return 0;
}
