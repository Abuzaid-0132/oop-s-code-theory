#include <iostream>
#include <string>
using namespace std;

class Teacher
{
public:
    // properties/ attributes
    string name;
    string dept;
    string subject;
    double salary;

    // methods/ member functions
    void changeDept(string newDept)
    {
        dept = newDept;
    }
};

int main()
{

    Teacher obj1;
    obj1.name = "Sara";
    obj1.subject = "C++";
    obj1.dept = "Computer Science";
    obj1.salary = 50000;

    cout << obj1.name << endl;

    return 0;
}