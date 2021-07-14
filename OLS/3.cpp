#include <iostream>

// Структура вершинки списка
struct Node{
    Node(int Data, Node* Next): Data(Data), Next(Next) {}
    int Data;
    Node *Next;
};

class List{

public:
    // Первый обязательный метод, конструктор без параметров
    List(): Head(nullptr) {}

    // Второй обязательный метод, конструктор копирования
    List(const List & a){
        if (a.Head){
            Head = new Node(a.Head->Data, nullptr);
            Node *cur_1 = Head, *cur_2 = a.Head;
            while (cur_2->Next){
                cur_1->Next=new Node(cur_2->Next->Data, nullptr);
                cur_2 = cur_2->Next;
                cur_1 = cur_1->Next;
            }
        }
    }

    // Третий обязательный метод, деструктор
    ~List(){
        while (Head){
            Node *tmp = Head->Next;
            delete Head;
            Head = tmp;
        }
    }
    
    // Метод вывода списка на экран
    void print_list(){
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


private:
    Node* Head;
};

int main() {
    // Создаем пустой список, и добавляем в него пару значений
    List my_list = List();
    my_list.push_back(1);
    my_list.push_back(2);
    my_list.push_back(10);
    // Выведем список на экран
    my_list.print_list();
    // Создадим еще один список и воспользуемся конструктором копирования
    List other_list = List(my_list);
    // Новый список, ожидать будем точно такие же значения
    // Собственно то и получим
    other_list.print_list();

    return 0;
}
