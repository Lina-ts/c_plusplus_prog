#include <iostream>

struct Node
{
	int data;
	Node *next;
};

class List
{
private:
	Node *head;
public:
	List()
	{
		head = nullptr;
	}
	//метод, добавляющий новый узел в список
	void addNode(int d)
	{
		Node *nd = new Node; //динамически создаем новый узел
		
		nd->data = d;	//задаем узлу данные
		nd->next = NULL;//новый узел в конце, поэтому NULL

		if(head == NULL)
			head = nd;
		else
		{
			Node *current = head;
			//ищем в цикле предшествующий последнему узел
            		while(current->next != NULL)
                		current = current->next;
            			//предшествующий указывает на последний
            			current->next = nd;
		}
	}
	void printList()
	{
		Node *current = head;
        	while(current != NULL)
        	{
			std::cout << current->data << std::endl;
            		current = current->next;
        	}
	}
};

int main()
{
	List myList;
	myList.addNode(5);
	myList.addNode(10);
	myList.printList();
	return 0;
}
