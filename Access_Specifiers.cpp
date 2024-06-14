#include <iostream>
#include <string>
using namespace std;

class Teacher
{
    // properties/ attributes
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    // methods/ member functions
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // setter
    void setSalary(double newSalary)
    {
        salary = newSalary;
    }

    // getter
    double getSalary()
    {
        return salary;
    }
};

int main()
{

    Teacher obj1;
    obj1.name = "Sara";
    obj1.subject = "C++";
    obj1.dept = "Computer Science";
    obj1.setSalary(75000);

    cout << obj1.getSalary() << endl;
    cout << obj1.dept << endl;
    obj1.changeDept("Information Technology");
    cout << obj1.dept << endl;

    return 0;
}