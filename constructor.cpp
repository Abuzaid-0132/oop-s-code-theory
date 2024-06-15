#include <iostream>
#include <string>
using namespace std;

class teacher
{
private:
    double salary;

public:
    // non-parametrized constructor
    // teacher()
    // {
    //     dept = "Information Technology";
    // }

    // parametrized constructor
    teacher(string nme, string dpt, string sub, double sal)
    {

        name = nme;
        dept = dpt;
        subject = sub;
        salary = sal;
    }

    // copy constructor.
    teacher(teacher &orgObj)
    { // pass by reference.
        cout << "I am custom copy constructor..." << endl;
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }

    string name;
    string dept;
    string subject;

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
    // t1.getInfo();

    teacher t2(t1); // custom copy constructor invoked.
    t2.getInfo();

    return 0;
}