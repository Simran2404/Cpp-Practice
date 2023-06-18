#include <iostream>

struct Node
{
	int value;
	Node* next;
};

void push(Node* head, int newvalue)
{
    Node* new_node = new Node;
    new_node->value = newvalue;
}


