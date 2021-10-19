#include <iostream>

struct node
{
	int data;
	node *next;
};

class List
{
private:
	node *head, *tail;
public:
	List()
	{
		head = NULL; //NULL потому что мы еще не добавили ни одного элемента в наш список
		tail = NULL;
	}

	void add_node(int n)
	{
		node *tmp = new node; //выделяем место, необходимое для узла с новым оператом (теперь tmp указывает на узел)
		tmp->data = n; //здесь мы дали значение 'data'
		tmp->next = NULL; //здесь мы присвоили NULL для next, и таким образом завершили узел
	
		//здесь мы уже объединяем узлы в сам связанный список
		if(head == NULL)	//мы проверяем NULL ли голова, если она NULL, значит связанного списка еще нет и наш текущий узел tmp будет head
		{
			head = tmp;	//и если head NULL, значит tmp пока будет и головой и хвостом списка
			tail = tmp;
		}
		else			//если head все таки не NULL, значит список уже есть и нам нужно просто добавить его в конец списка
		{
			tail->next = tmp;	//новый узел tmp будет идти после хвоста 
			tail = tail->next;	//а здесь мы меняем хвост на новый узел, который станет новым хвостом
		}
	}
	void display()
	{
		node *tmp;
		tmp = head;
		while(tmp != NULL)
		{
			std::cout << tmp->data << std::endl;
			tmp = tmp->next;
		}
        }

};

int main()
{	
	List a;
	a.add_node(1);
	a.add_node(2);
	a.display();
	return 0;
}
