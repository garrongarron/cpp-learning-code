#include <iostream>

using namespace std;

/*
int getNumber(){
    return 5;
};
*/

int add(int a, int b)
{
    return a + b;
};

int main()
{
    /*
    int (*funcPtr)() = getNumber;
    cout << funcPtr();
    */

    int (*functPtr2)(int, int) = add;
    cout << add(2, 3) << endl;
    cout << functPtr2(2, 3) << endl;
    system("pause>null");
}

// clear; g++ -o run .\functionPointer.cpp ; .\run.exe