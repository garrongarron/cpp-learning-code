#include <iostream>

using namespace std;


int getMin(int numbers[], int size)
{
    int min = numbers[0];
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
    }
    return min;
}