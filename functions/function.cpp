#include <iostream>
using namespace std;

//decoration of function
void function();


int main()
{
    cout << "Hello from main()" << endl;
    function();
    return 0;
}

//definition of function
void function(){
    cout << "Hello from function()" << endl;
}

//clear; g++ -o run .\function.cpp ; .\run.exe