#include <iostream>
using namespace std;

void introduceMe(string name)
{
    cout << "My name is " << name << endl;
}
void saySomething(string name, string city, int age = 0)
{
    if (age != 0)
    {
        cout << "My name is " << name << ", I live in " << city << " and I am " << age << " years old." << endl;
    }
    else
    {
        cout << "My name is " << name << " and I live in " << city << endl;
    }
}

int main()
{
    introduceMe("John");
    introduceMe("Anna");
    saySomething("Tomas", "New York", 25);
    saySomething("Bob", "Los Angeles");
    return 0;
}

// clear; g++ -o run .\functionParameters.cpp ; .\run.exe