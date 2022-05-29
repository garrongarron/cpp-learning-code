#include <iostream>
#include "pointer4/getMin.cpp"

using namespace std;

int getMax(int numbers[], int size)
{
    int max = numbers[0];
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
    }
    return max;
}
void getMinAndMax(int numbers[], int size, int *min, int *max)
{
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] < *min)
        {
            *min = numbers[i];
        }
        if (numbers[i] > *max)
        {
            *max = numbers[i];
        }
    }    
}
int main()
{
    int numbers[5] = {-22, 3, -5, 7, 9};

    cout << "Min is " << getMin(numbers, 5) << endl;
    cout << "Max is " << getMax(numbers, 5) << endl;
    cout << "****************" << endl;
    int min = numbers[0];
    int max = numbers[0];

    getMinAndMax(numbers, 5, &min, &max);//passing by reference
    cout << "Min is " << min << endl;
    cout << "Max is " << max << endl;

    return 0;
}

// clear; g++ -o run .\pointer4function.cpp ; .\run.exe