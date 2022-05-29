#include <iostream>

using namespace std;

int main()
{
    // the array has continues memories
    int size;
    cout << "Size: ";
    cin >> size;
    // int myArray[size];//error

    //the keyword new ALLOCATE memory for us
    int* myArray= new int[size];

    for(int i = 0; i < size; i++){
          cout << "Number: ";
          cin >> myArray[i];
    }

    for(int i = 0; i < size; i++){
        //   cout << myArray[i] << " ";
          cout << *(myArray+i)<< " ";
    }

    delete[]myArray;
    myArray = NULL;

    return 0;
}

// clear; g++ -o run .\dinamicsArrays.cpp ; .\run.exe