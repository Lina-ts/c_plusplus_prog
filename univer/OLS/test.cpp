#include <iostream>

class Node {
public:
	int data;
	Node *next;
};

void push(Node **head_ref, int new_data) {

	Node *new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}
void printList(Node *n) {
	while (n != NULL) {
		std::cout << n->data << std::endl;
		n = n->next;
	}
}

int main()
{
	Node *head = NULL;
	/*Node *second = NULL;
	Node *third = NULL;

	head = new Node();
	second = new Node();
	third = new Node();

	head->data = 1;
	head->next = second;
	
	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;*/

	push(&head, 1)
	
	printList(head);
	return 0;
}
