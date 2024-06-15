#include <iostream>
#include <string>
using namespace std;

class student
{
public:
    string name;

    student()
    {
        cout << "non-parametrized constructor called." << endl;
    }

    student(string name)
    {
        this->name = name;
        cout << "Parametrized constructor called." << endl;
    }
};

int main()
{
    student s1("Stark");

    return 0;
}