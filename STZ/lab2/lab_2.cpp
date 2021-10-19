//24 вариант
#include <iostream>

class Students
{
private:
    std::string group;
    std::string faculty;
    int students;
    int s_students;

public:
    Students(){};
    Students(std::string group, std::string faculty, int students, int s_students)
    {
        this->group = group;
        this->faculty = faculty;
        this->students = students;
        this->s_students = s_students;
    }
    ~Students(){};
    void setGroup(std::string group)
    {
        this->group = group;
    }
    void setFaculty(std::string faculty)
    {
        this->faculty = faculty;
    }
    void setStudents(int students)
    {
        this->students = students;
    }
    void setS_students(int s_students)
    {
        this->s_students = s_students;
    }
    std::string getGroup()
    {
        return group;
    }
    std::string getFaculty()
    {
        return faculty;
    }
    int getStudents()
    {
        return students;
    }
    int getS_students()
    {
        return s_students;
    }
    double percent(double sum_stud, double sum_s_stud)
    {
        return sum_s_stud/sum_stud*100;
    }
};

int main()
{
    int n = 4;
    Students *g1 = new Students[n];
    double sum_stud = 0, sum_s_stud = 0;
    std::string group, faculty;
    int students, s_students;
    for (int i=0; i<n; i++) {
        std::cout << "Enter group: ";
        std::cin >> group;
        g1[i].setGroup(group);
        std::cout << "Enter faculty: ";
        std::cin >> faculty;
        g1[i].setFaculty(faculty);
        std::cout << "Enter number of students: ";
        std::cin >> students;
        g1[i].setStudents(students);
        std::cout << "Enter number of successful students: ";
        std::cin >> s_students;
        g1[i].setS_students(s_students);
        sum_stud += students;
        sum_s_stud += s_students;
    }
    double per = g1->percent(sum_stud,sum_s_stud);   
   
    std::cout << "Percentage of successful students: " <<  per << std::endl;

    return 0;
}