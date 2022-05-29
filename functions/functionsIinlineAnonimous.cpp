#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    std::vector<int>
        v{2, 3, 7, 14, 23};

    std::for_each(v.begin(), v.end(), [](int x)
                  { std::cout << x << std::endl; });

    int d = 3;
    std::for_each(v.begin(), v.end(), [d](int x)
                  {
                      if (x % d == 0)
                      {
                          std::cout << x << " is divisible by " << d << std::endl;
                      }
                      else
                      {
                          std::cout << x << " is not divisible by " << d << std::endl;
                      } });

    std::for_each(v.begin(), v.end(), [&d](int x)
                  {
                      d = d + 1;
                      std::cout << "d =  " << d << std::endl; });

    std::for_each(v.begin(), v.end(), [&](int x)
                  {
                      d = d + 1;
                      std::cout << "d =  " << d << std::endl; });

    std::for_each(v.begin(), v.end(), [=](int x)
                  { std::cout << "d =  " << d << std::endl; });

    return 0;
}

// clear; g++ -o run .\functionsIinlineAnonimous.cpp ; .\run.exe