#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node {
    int data;
    Node* next;
};

// Function declarations
void addNode(int value);
void deleteNode();
bool isEmpty();
void printList();
void clearList();

#endif // LINKEDLIST_H
