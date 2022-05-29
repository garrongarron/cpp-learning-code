
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
        // the unique_ptr gets destroy when the block is left
        shared_ptr<MyClass> ushPtr1 = make_shared<MyClass>();
        cout << "Shared count: " << ushPtr1.use_count() << endl;
        {
            shared_ptr<MyClass> ushPtr2 = ushPtr1;
            cout << "Shared count: " << ushPtr1.use_count() << endl;
        }
        cout << "Shared count: " << ushPtr1.use_count() << endl;
    }

    /**
     * Deallocated when there is no more owners pointing to the poninter
     *
     * */
    return 0;
}

// clear; g++ -o run .\sharedPointer.cpp ; .\run.exe