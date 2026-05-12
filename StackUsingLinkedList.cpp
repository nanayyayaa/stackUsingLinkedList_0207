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