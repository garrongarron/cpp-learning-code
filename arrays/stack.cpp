
#include <iostream>
#include <stack>
using namespace std;
//print the stack
void printStack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();//pop the top element
    }
    cout << endl;
}

int main()
{
    //empty, size, push, pop, top, isEmpty, isFull
    stack<int> numberStack;

    numberStack.push(1);
    numberStack.push(2);
    numberStack.push(3);
    numberStack.push(4);
    numberStack.pop();//remove the last element
    numberStack.top();//return the last element

    if(numberStack.empty())
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }
    cout << "Stack size is " << numberStack.size() << endl;


    printStack(numberStack);

    return 0;
}

// clear; g++ -o run .\stack.cpp ; .\run.exe