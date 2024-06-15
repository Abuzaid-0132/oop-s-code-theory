#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    string name;
    double *cgpaPtr;

    student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    student(student &obj)
    {
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "cgpa: " << *cgpaPtr << endl;
    }
};

int main()
{
    student s1("Zain khan", 9.8);
    student s2(s1); // default copy constructor.
    s1.getInfo();

    s2.name = "Sara";
    *(s2.cgpaPtr) = 8.6;
    s2.getInfo();

    return 0;
}