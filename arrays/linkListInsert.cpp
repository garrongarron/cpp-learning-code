
#include <iostream>
using namespace std;

class Node {
public:
    int Value;
    Node* Next;
};
void printList(Node* n) {
    while (n!=NULL) {
        cout << n->Value << endl;
        n = n->Next;
    }
}

void insertAtFront(Node**head, int value) {
    Node* newNode = new Node();
    newNode->Value = value;
    newNode->Next = *head;
    *head = newNode;
}

void insetAtEnd(Node**head, int value) {
    Node* newNode = new Node();
    newNode->Value = value;
    newNode->Next = NULL;
    if (*head == NULL) {
        *head = newNode;
    }
    else {
        Node* current = *head;
        while (current->Next != NULL) {
            current = current->Next;
        }
        current->Next = newNode;
    }
}

void insertAfter(Node*current, int value) {
    Node* newNode = new Node();
    newNode->Value = value;
    newNode->Next = current->Next;
    current->Next = newNode;
}

int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->Value = 1;
    head->Next = second;
    second->Value = 2;
    second->Next = third;
    third->Value = 3;
    third->Next = NULL;
    
    printList(head);
    insertAtFront(&head, 0);
    cout << "---------------" << endl;
    printList(head);
    cout << "---------------" << endl;
    insetAtEnd(&head, 4);
    printList(head);
    cout << "---------------" << endl;
    insertAfter(second, -2);
    printList(head);
    

    return 0;
}

// clear; g++ -o run .\linkListInsert.cpp ; .\run.exe