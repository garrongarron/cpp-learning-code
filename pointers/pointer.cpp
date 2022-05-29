#include <iostream>
using namespace std;


int main()
{
    // Create a new Employee object
    int n= 5;
    cout << &n << endl;
    int* ptr = &n;
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr =10;
    cout << n << endl;

    int v;
    int* ptr2 =&v;
    *ptr2 = 7;
    cout << "v=" << *ptr2 << endl;
    return 0;
}

//clear; g++ -o run .\pointer.cpp ; .\run.exe