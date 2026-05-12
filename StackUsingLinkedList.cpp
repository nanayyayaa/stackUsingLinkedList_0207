#include <iostream>

using namespace std:

//node class representating a single node in the linked list
class node
{
public:
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

//Stack class
class Stack
{
private:
    Node *top; //pointer to the top node of the stack

public:
    stack() 
    {
        top = NULL;
    }
    int push(int value)
    {
        Node *newnode  = new Node();
        newNode->data = value;
        newNode->next = top;
        top = newNode;
        cout << "Push value: " << value << endl;
        return value;
    }

    //pop operation: Remove the topmost element from the stack
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty." << endl;
        }

        Node *temp = top;
        top = top->next;
        cout << "Popped value: " << top->data << endl;
    }

    // peel/top operation: Retrive the value of the topset element witchout removing
    void peek()