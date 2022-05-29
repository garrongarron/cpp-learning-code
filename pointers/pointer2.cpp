#include <iostream>
using namespace std;

void printNumber(int *ptr)
{
    cout << *ptr << endl;
}

void printLetter(char *ptr)
{
    cout << *ptr << endl;
}
void print(void *ptr, char type)
{
    if (type == 'i')
    {
        printNumber((int *)ptr);//casting pointer to int
    }
    else if (type == 'c')
    {
        printLetter((char *)ptr);
    }
}
int main()
{
    // Create a new Employee object
    int n = 5;
    char letter = 'a';
    // printNumber(&n);
    // printLetter(&letter);
    print(&n, 'i');
    print(&letter, 'c');
    return 0;
}

// clear; g++ -o run .\pointer2.cpp ; .\run.exe