#include "Queue.h"
#include <iostream>


void initQueue(Queue* q, unsigned int size)
{
	q->queue = new unsigned int[size];
	q->maxLength = size;
	q->first = 0;
	q->last = -1;
	q->count = 0;
}

void enqueue(Queue* q, unsigned int newValue)
{
	if (isFull(q))
	{
		std::cout << "Queue's full. cannot complete action." << std::endl;
		return;
	}
	q->last = (q->last + 1) % q->maxLength;
	q->queue[q->last] = newValue;
	q->count++; 

}

int dequeue(Queue* q)
{
	int value = 0;
	if (isEmpty(q)) {
		std::cerr << "Queue is empty, cannot complete action." << std::endl;
		return -1;
	}

	value = q->queue[q->first];
	q->first = (q->first + 1) % q->maxLength;
	q->count--;
	return value;
}

bool isEmpty(Queue* q) 
{
	return q->count == 0;
}

bool isFull(Queue* q) 
{
	return q->count == q->maxLength;
}

void cleanQueue(Queue* q)
{
	delete[] q->queue;
	q->queue = nullptr;
	q->maxLength = 0;
	q->first = 0;
	q->last = -1;
	q->count = 0;
}