#include <iostream>
using namespace std;

class parent
{
public:
    void getinfo()
    {
        cout << "Parent class" << endl;
    }
};

class child : public parent
{
public:
    void getinfo()
    {
        cout << "Child class" << endl;
    }
};

int main()
{
    child c1;
    c1.getinfo();

    parent p1;
    p1.getinfo();

    return 0;
}