#include <iostream>

using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows >> cols;

    int **table = new int*[rows];


    for (int i = 0; i < rows; i++)
    {
        table[i] = new int[cols];
    }

    table[1][1] = 1;


    //deleting the fields
    for (int i = 0; i < rows; i++)
    {
        delete[] table[i] ;
    }

    delete[] table;
    table = NULL;

    return 0;
}

// clear; g++ -o run .\multidimensional.cpp ; .\run.exe