//���������� �������� ������: CODE, DATA, STACK, HEAP
//������� ������ ���������� ����� ���������� �������� � �������, ��� ��� ���� ��������������, 
//� ���� ������� ������ ��� ���������, � ����� ���������� �������� � ������� �� ������ ����� ������ �����

//���� ����� ���� ������, ������� ����� ���� ����������.

//��������� �� ���������
// int x = 5;
// int* px = &x; - ����� x
// int** ppx = &px; - ����� ������ x
// int*** pppx = &ppx - ��������� �� ��������� �� ��������� �
// cout << x << *px << **ppx << ***pppx << '\n';

//�������� ������
//int x = 5;
//void* p = &x;

//��������� - ���������������� ���
//struct - ������ ���
//class - ��� c++ 
//��� ����� ��������
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

//���������� ������������ malloc � calloc, free, �� ����� �� ����
//����� �������� ������ ������

////��� new
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