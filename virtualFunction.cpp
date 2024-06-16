#include <iostream>
#include <string>
using namespace std;

class parent
{
public:
    void getInfo()
    {
        cout << "parent class\n";
    }

    virtual void hello()
    {
        cout << "Hello from parent\n";
    }
};

class child : public parent
{
public:
    void getInfo()
    {
        cout << "child class\n";
    }

    void hello()
    {
        cout << "Hello from child\n";
    }
};

int main()
{

    child c1;
    c1.hello();

    return 0;
}