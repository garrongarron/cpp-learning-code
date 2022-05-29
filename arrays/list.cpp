#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
#include <list>

using namespace std;

int main()
{
    map<string, list<string>> myDictionary;

    list<string> a{"apple", "der Apfel", "banana", "die Banane"};
    list<string> b{"banana", "die Banane"};
    
    myDictionary.insert(pair<string, list<string>>("apple", a));
    myDictionary.insert(pair<string, list<string>>("banana", b));

    for (auto pair: myDictionary)
    {
        cout << pair.first << " : ";
        for (auto s: pair.second)
        {
            cout << s << ", ";
        }
        cout << endl;
    }
    

    return 0;
}

// clear; g++ -o run .\list.cpp ; .\run.exe