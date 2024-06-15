#include <iostream>
#include <string>
using namespace std;

class person
{
public:
    string name;
    int age;

    person(string name, int age)
    {
        cout << "parent constructor called\n";
        this->name = name;
        this->age = age;
    }

    ~person()
    {
        cout << "parent destructure called\n";
    }
};

class student : public person
{
public:
    int rollno;

    student(string name, int age, int rollno) : person(name, age)
    {
        this->rollno = rollno;
        cout << "child constructor called.\n";
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll no: " << rollno << endl;
    }

    ~student()
    {
        cout << "child destructure called\n";
    }
};

int main()
{
    student s1("Sara Khan", 22, 50);
    s1.getInfo();

    return 0;
}