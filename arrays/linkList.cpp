#include <iostream>

using namespace std;

class Node
{
public:
    int Value;
    Node *next;
};

void printList(Node *current)
{
    while (current != NULL)
    {
        cout << current->Value << " " << endl;
        current = current->next;
    }
}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->Value = 1;
    head->next = second;
    second->Value = 2;
    second->next = third;
    third->Value = 3;
    third->next = NULL;

    printList(head);

    return 0;
}

// clear; g++ -o run .\linkList.cpp ; .\run.exe