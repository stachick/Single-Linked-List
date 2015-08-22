//Shane Tachick
//August 11, 2015
//Header file for sLList.cpp


#ifndef SINGLELINKEDLIST_H
#define SINGLELINKEDLIST_H

class singleLinkedList {
public:
	singleLinkedList();
	void appendNode(int addData);			//appends a node to the end of the list
	void removeNode(int data);				//deletes a node that contains data matching what you want removed
	void printList();						//prints the list to the console

private:
	struct node {
		int data;
		node* next;
	};
	
	node* head;
	node* current;
	node* temp;
};





#endif //SINGLELINKEDLIST_H