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

    ~student()
    {
        cout << "Hi, I am destructor. I delete Everything." << endl;
        delete cgpaPtr;
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
    s1.getInfo();

    return 0;
}