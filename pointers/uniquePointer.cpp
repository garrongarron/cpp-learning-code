
#include <iostream>
#include <memory>
using namespace std;

class MyClass
{
public:
    // constructor
    MyClass()
    {
        cout << "Constructor invoked" << endl;
    }
    // destructor
    ~MyClass()
    {
        cout << "Destructor invoked" << endl;
    }
};

int main()
{
    {
        //the unique_ptr gets destroy when the block is left
        unique_ptr<MyClass> unPtr1 = make_unique<MyClass>();
    }

    return 0;
}

// clear; g++ -o run .\uniquePointer.cpp ; .\run.exe