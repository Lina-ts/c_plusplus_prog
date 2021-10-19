#include <iostream>

struct Node{
    Node(int Data, Node* Next): Data(Data), Next(Next) {}
    int Data;
    Node *Next;
};

class List{
private:
    Node* Head;

public:
    // Первый обязательный метод, конструктор без параметров
    List(): Head(nullptr) {}

    // Второй обязательный метод, деструктор
    ~List(){
        while (Head){
            Node *tmp = Head->Next;
            delete Head;
            Head = tmp;
        }
    }
    // Метод вывода списка на экран
    void print_list() {
        Node *cur=Head;
        while (cur){
            std::cout << cur->Data << " -> ";
            cur = cur->Next;
        }
        std::cout << "NULL\n";
    }
    // Вспомогательный метод, добавление в конец списка
    void push_back(int Data){
        if (Head == nullptr){
            Head = new Node(Data, nullptr);
        }
        else{
            Node *cur = Head;
            while(cur->Next) cur = cur->Next;
            cur->Next = new Node(Data, nullptr);
        }
    }
};

int main()
{
	// Создаем пустой список, и добавляем в него пару значений
	List my_list = List();
	my_list.push_back(1);
	my_list.push_back(2);
	my_list.push_back(3);
	my_list.push_back(4);
	my_list.push_back(5);

	my_list.print_list();

	return 0;
}
