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

    // Второй обязательный метод, деструктор
    ~List(){
        while (Head){
            Node *tmp = Head->Next;
            delete Head;
            Head = tmp;
        }
    }
    // Вспомогательный метод, возвращающий длину списка
     int Length() const {
        int res = 0;
        Node* cur = Head;
        while (cur){
            res++;
            cur = cur->Next;
        }
        return res;
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
    // Последний обязательный метод перегрузка операции меньше, основанная на сравнении длин
    bool operator < (const List& a) const{
        return this->Length()<a.Length();
    }


private:
    Node* Head;
};

int main() {

    List first_list = List(), second_list = List();
    first_list.push_back(15);
    first_list.push_back(12);
    second_list.push_back(1);
    second_list.push_back(2);
    second_list.push_back(4);
    // Что и ожидается первый список меньше второго. Вывод: 1
    std::cout << (first_list<second_list) << '\n';
    // Тут же вывод: 0
    std::cout << (second_list<first_list) << '\n';

    return 0;
}
