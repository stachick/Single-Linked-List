#include <cstdlib>
#include <iostream>
using std::cout;
#include "singleLinkedList.h"


singleLinkedList::singleLinkedList() 
{
	head = NULL;
	current = NULL;
	temp = NULL;
}

//adds a node to the end of the list
void singleLinkedList::appendNode(int nodeData)
{
	node* n = new node;
	n->next = NULL;
	n->data = nodeData;

	if (head != NULL)
	{
		current = head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = n;
	}
	else
	{
		head = n;
	}
}

//removes a node if its data matches delData
void singleLinkedList::removeNode(int delData)
{
	node* delPtr = NULL;
	temp = head;
	current = head;
	
	while (current != NULL && current->data != delData)
	{
		temp = current;
		current = current->next;
	}

	if (current == NULL)
	{
		cout << delData << " was not in the list\n";
		delete delPtr;
	}
	else
	{
		delPtr = current;
		current = current->next;
		temp->next = current;
		
		if (delPtr == head)
		{
			head = head->next;
			temp = NULL;
		}

		delete delPtr;
		cout << delData << " was deleted\n";
	}
}

void singleLinkedList::printList()
{
	current = head;
	while (current != NULL)
	{
		cout << current->data << " -> ";
		current = current->next;
	}
	cout << "END\n";
}