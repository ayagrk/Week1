#include "LinkedList.h"
#include <iostream>

// Initialize the head of the list to nullptr
Node* head = nullptr;

void addNode(int value) 
{
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

void deleteNode() 
{
    if (isEmpty()) 
    {
        std::cout << "List is empty, cannot remove." << std::endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}

bool isEmpty() 
{
    return head == nullptr;
}

void printList() 
{
    Node* curr = head;
    while (curr != nullptr) 
    {
        std::cout << curr->data << " ";
        curr = curr->next;
    }
    std::cout << std::endl;
}

void clearList() 
{
    while (!isEmpty()) 
    {
        deleteNode();
    }
}
