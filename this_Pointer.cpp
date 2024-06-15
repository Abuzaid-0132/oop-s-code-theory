#include <iostream>
#include <string>
using namespace std;

class teacher
{
private:
    double salary;

public:
    string name;
    string dept;
    string subject;

    // non-parametrized constructor
    teacher()
    {
        dept = "Information Technology";
    }

    // parametrized constructor
    teacher(string name, string dept, string subject, double salary)
    {

        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    void changeDept(string newDept)
    {
        dept = newDept;
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
        cout << "Dept: " << dept << endl;
    }
};

int main()
{
    teacher t1("Zain", "Computer Science", "DBMS", 75000); // constructor called...
    t1.getInfo();

    return 0;
}