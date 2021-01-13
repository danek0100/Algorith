//Существуют сигменты памяти: CODE, DATA, STACK, HEAP
//Никогда нельзя возвращать адрес переменной созданой в функции, так как стек самоочищаеться, 
//а стек поинтер меняет своё положение, и может возникнуть ситуация в которой по адресу будет лежать мусор

//Стек имеет мало памяти, поэтому может быть переполнен.

//Указатели на указатели
// int x = 5;
// int* px = &x; - адрес x
// int** ppx = &px; - адрес адреса x
// int*** pppx = &ppx - указатель на указатель на указатель х
// cout << x << *px << **ppx << ***pppx << '\n';

//Связаный список
//int x = 5;
//void* p = &x;

//Структура - пользовательский тип
//struct - сишный тип
//class - для c++ 
//они имеют различия
#include <iostream>

struct node_t {
    int data;
    node_t* next;
};

void go_throught(node_t* p) {
    while (p != nullptr) {
        std::cout << p->data << '\n';
        p = p->next;
    }
}

//int main()
//{
//    node_t A[5];
//    for (int i = 0; i < 5; i++) {
//        A[i].data = i + 1;
//        A[i].next = A + i + 1;
//    }
//    A[4].next = nullptr;
//
//    node_t* p_begin = A;
//    go_throught(p_begin);
//    return 0;
//}

//Продолжают существовать malloc и calloc, free, но лучше не надо
//Нужно избегать утечек памяти

////Для new
//int main()
//{
//    node_t* p_begin = new node_t;
//    node_t* p = p_begin;
//    for (int i = 0; i < 5; i++) {
//        p->data = i + 1;
//        p->next = new node_t;
//        p = p->next;
//    }
//    p->data = 777;
//    p->next = nullptr;
//    go_throught(p_begin);
//    delete[] p_begin;
//    return 0;
//}