#include <iostream>
#include <map>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    map<string, string> myDictionary;
    myDictionary.insert(pair<string, string>("apple", "der Apfel"));
    myDictionary.insert(pair<string, string>("banana", "die Banane"));
    myDictionary.insert(pair<string, string>("#ff0000", "red"));
    myDictionary.insert(pair<string, string>("z#00ff00", "green"));

    for (auto pair : myDictionary)
    {
        cout << pair.first << " - " << pair.second << endl;
    }

    cout << myDictionary["apple"] << endl;

    myDictionary["orange"] = "-----------------";
    myDictionary.erase("apple");

    cout << "**************************" << endl;
    for (auto pair : myDictionary)
    {
        cout << pair.first << " - " << pair.second << endl;
    }
    cout << "**************************" << endl;

    unordered_map<string, string> myDictionary2;
    myDictionary2.insert(pair<string, string>("apple", "der Apfel"));
    myDictionary2.insert(pair<string, string>("banana", "die Banane"));
    myDictionary2.insert(pair<string, string>("#ff0000", "red"));
    myDictionary2.insert(pair<string, string>("z#00ff00", "green"));

    for (auto pair : myDictionary2)
    {
        cout << pair.first << " - " << pair.second << endl;
    }

    return 0;
}

// clear; g++ -o run .\map.cpp ; .\run.exe