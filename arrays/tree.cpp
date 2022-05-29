#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *createNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

void printTree1(Node *root)
{
    if (root == nullptr)
        return;
    cout << root->data << " ";
    printTree1(root->left);
    printTree1(root->right);
}
void printTree2(Node *root)
{
    if (root == nullptr)
        return;
    printTree2(root->left);
    cout << root->data << " ";
    printTree2(root->right);
}

void printTree3(Node *root)
{
    if (root == nullptr)
        return;
    printTree3(root->left);
    printTree3(root->right);
    cout << root->data << " ";
}

int main()
{
    // Level 1
    Node *root = createNode(1);
    // Level 2
    root->left = createNode(2);
    root->right = createNode(3);
    // Level 3
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);
    // Level 4
    root->left->right->left = createNode(9);
    root->right->right->left = createNode(15);

    printTree1(root);
    cout <<  " " << endl;
    printTree2(root);
    return 0;
}
// clear; g++ -o run .\tree.cpp ; .\run.exe