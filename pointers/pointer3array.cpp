#include <iostream>
using namespace std;

int main()
{
    /*
    int luckyNumber[5] = {2, 3, 5, 7, 9};
    //the first element of the array is at the address of the array
    cout << luckyNumber << endl;
    cout << &luckyNumber[0] << endl;
    cout << luckyNumber[2] << endl;
    // two more address of the first element
    cout << *(luckyNumber+2) << endl;
    */

   int luckyNumber[5];

   for(int i = 0; i < 4; i++){
         luckyNumber[i] = i;
         cout << "Number: ";
         cin >> luckyNumber[i];
   }

   for(int i = 0; i < 5; i++){
         cout <<*(luckyNumber+i)<<" ";
   }
   //if 5 instead of 4. it will print someone else value

    return 0;
}

// clear; g++ -o run .\pointer3array.cpp ; .\run.exe