#include "Queue.h"
#include <iostream>


int main()
{
	unsigned int size = 0;
	Queue* q = new Queue;
	int choice = 0;
	int newValue = 0;
	int returnedValue = 0;
	std::cout << "Hello!" << std::endl;
	std::cout << "Enter size of queue: " << std::endl;
	std::cin >> size;
	initQueue(q, size);

	do
	{
		std::cout << "[0] Quit" << std::endl;
		std::cout << "[1] Enqueue" << std::endl;
		std::cout << "[2] Dequeue" << std::endl;
		std::cout << "[3] Clear queue" << std::endl;
		std::cout << "Enter Choice: " << std::endl;
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			std::cout << "Enter new value: " << std::endl;
			std::cin >> newValue;
			enqueue(q, newValue);
			break;

		case 2:
			returnedValue = dequeue(q);
			std::cout << "Returned value: " << returnedValue << std::endl;
			break;

		case 3:
			cleanQueue(q);
			std::cout << "Cleared!" << std::endl;
			break;

		default:
			std::cout << "Invalid input. only enter 0 - 3" << std::endl;
			break;

		}
	

	} while (choice != 0);

	

}
