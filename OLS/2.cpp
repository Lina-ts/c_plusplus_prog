#include <iostream>
#include <random>
#include <ctime>

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

    // Второй обязательный метод, деструктор
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

    // Третий обязательный метод, добавление
    void push (int Data){
        if (Head){
            // 1->2->3->5
            Node *prev = nullptr, *next=Head;

            while (next && Data>=next->Data){
                prev = next;
                next = next->Next;
            }

            if (next == nullptr){
                prev->Next = new Node(Data, nullptr);
            }
            else{
                if (next == Head){
                    prev = new Node(Data, Head);
                    Head = prev;
                }
                else{
                    prev->Next=new Node(Data, next);
                }
            }

        }
        else{
            Head = new Node(Data, nullptr);
        }
    }


private:
    Node* Head;
};

int main() {
    // Проверка списка, просто заполняем 10, случайными числами от 0 до 10
    List my_list = List();
    std::mt19937 rndm;
    rndm.seed(time(0));
    for (int i=0; i<10; ++i){
        my_list.push(rndm()%11);
    }
    my_list.print_list();

    return 0;
}
