#include "Stack.h"
#include <iostream>

void initStack(Stack* s) 
{
    s->top = nullptr;
}

void push(Stack* s, unsigned int element) 
{
    Node* newNode = new Node;
    newNode->data = element;
    newNode->next = s->top;
    s->top = newNode; 
}

int pop(Stack* s) 
{
    if (isEmpty(s)) 
    {
        std::cout << "Stack is empty, cannot pop." << std::endl;
        return -1;
    }
    Node* temp = s->top;
    int value = temp->data;
    s->top = s->top->next;
    delete temp;
    return value;
}

bool isEmpty(Stack* s) 
{
    return s->top == nullptr; 
}

bool isFull(Stack* s) 
{
    return s->top != nullptr;
}

void cleanStack(Stack* s) 
{
    while (!isEmpty(s)) 
    {
        pop(s); 
    }
}
