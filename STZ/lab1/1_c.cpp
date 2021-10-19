//24 вариант
//кол-во строк:4, название группы, факультет, количество студентов,
//кол-во успевающих 
#include <iostream>
#include <string>
#include <fstream>
struct Unvier
{
    std::string name_group;
    std::string name_faculty;
    int students;
    int successful_stud;
};
int main()
{   
    double sum_stud = 0, sum_s_stud = 0;
    int n = 4;
    Unvier *univ = new Unvier[n];
    std::ifstream file;
    file.open("test.txt");
    if(!file)
    {
        std::cout << "No such file";
    }

    for (int i=0; i<n; i++) {
        file >> univ[i].name_faculty >> univ[i].name_faculty >> univ[i].students >> univ[i].successful_stud; 
        sum_stud += univ[i].students;
        sum_s_stud += univ[i].successful_stud;
    }
    double per = (sum_s_stud/sum_stud)*100;
   
    std::cout << "Percentage of successful students: " <<  per << std::endl;
    delete[]univ;

}