#include <iostream>
#include <string>
using namespace std;
class Teacher
{
public:
    // properties/ attributes
    double salary;
    string name;
    string dept;
    string subject;

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

    cout << obj1.dept << endl;
    obj1.changeDept("Information Technology");
    cout << obj1.dept << endl;

    return 0;
}