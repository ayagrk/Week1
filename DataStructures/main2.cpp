#include "Stack.h"
#include "LinkedList.h"
#include <iostream>

// Function declarations
void mainMenu();
void stackMenu();
void linkedListMenu();

int main() 
{
    int mainChoice = 0;
    int stackChoice = 0;
    int linkedListChoice = 0;
    unsigned int value;

    
    Stack stack;
    initStack(&stack);

    while (true) 
    {
        mainMenu();
        std::cin >> mainChoice;

        if (mainChoice == 1) 
        { 
            while (true) 
            {
                stackMenu();
                std::cin >> stackChoice;

                switch (stackChoice) 
                {
                case 1:
                    std::cout << "Enter a value to push: ";
                    std::cin >> value;
                    push(&stack, value);
                    break;

                case 2:
                    value = pop(&stack);
                    if (value != -1) 
                    {
                        std::cout << "Popped value: " << value << std::endl;
                    }
                    break;

                case 3:
                    if (isEmpty(&stack)) 
                    {
                        std::cout << "Stack is empty." << std::endl;
                    }
                    else 
                    {
                        std::cout << "Stack is not empty." << std::endl;
                    }
                    break;

                case 4:
                    if (isFull(&stack)) 
                    {
                        std::cout << "Stack is full." << std::endl;
                    }
                    else 
                    {
                        std::cout << "Stack is not full." << std::endl;
                    }
                    break;

                case 5:
                    cleanStack(&stack);
                    std::cout << "Stack has been cleared." << std::endl;
                    break;

                case 6:
                    break;

                default:
                    std::cout << "Invalid choice. Please try again." << std::endl;
                }

                if (linkedListChoice == 6) break; 
            }

        }
        else if (mainChoice == 2) 
        { 
            while (true) 
            {
                linkedListMenu();
                std::cin >> linkedListChoice;

                switch (linkedListChoice) 
                {
                case 1:
                    std::cout << "Enter a value to add to head: ";
                    std::cin >> value;
                    addNode(value);
                    break;

                case 2:
                    deleteNode();
                    break;

                case 3:
                    std::cout << "List contents: ";
                    printList();
                    break;

                case 4:
                    if (isEmpty(&stack)) 
                    {
                        std::cout << "List is empty." << std::endl;
                    }
                    else 
                    {
                        std::cout << "List is not empty." << std::endl;
                    }
                    break;

                case 5:
                    clearList();
                    std::cout << "List has been cleared." << std::endl;
                    break;

                case 6:
                    break;

                default:
                    std::cout << "Invalid choice. Please try again." << std::endl;
                }

                if (linkedListChoice == 6) break; 
            }

        }
        else if (mainChoice == 3) 
        { 
            cleanStack(&stack); 
            clearList(); 
            std::cout << "Exiting program." << std::endl;
            return 0;

        }
        else 
        {
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }
}

// Function definitions
void mainMenu() 
{
    std::cout << "\Main Menu:" << std::endl;
    std::cout << "[1] Stack Operations" << std::endl;
    std::cout << "[2] Linked List Operations" << std::endl;
    std::cout << "[3] Exit" << std::endl;
    std::cout << "Enter choice: ";
}

void stackMenu() 
{
    std::cout << "\nStack Operations:" << std::endl;
    std::cout << "[1] Push" << std::endl;
    std::cout << "[2] Pop" << std::endl;
    std::cout << "[3] Check if Empty" << std::endl;
    std::cout << "[4] Check if Full" << std::endl;
    std::cout << "[5] Clear Stack" << std::endl;
    std::cout << "[6] Back to Main Menu" << std::endl;
    std::cout << "Enter choice: ";
}

void linkedListMenu() 
{
    std::cout << "\nLinked List Operations:" << std::endl;
    std::cout << "[1] Add Node to Head" << std::endl;
    std::cout << "[2] Delete Node from Head" << std::endl;
    std::cout << "[3] Print List" << std::endl;
    std::cout << "[4] Check if Empty" << std::endl;
    std::cout << "[5] Clear List" << std::endl;
    std::cout << "[6] Back to Main Menu" << std::endl;
    std::cout << "Enter choice: ";
}
