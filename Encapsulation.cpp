#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    double balance; // data hiding.
    string password;

public:
    string accountId;
    string username;
};