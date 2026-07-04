#pragma once
#include "Node.h"

template <class T>
class LinkedList {
private:
    Node<T> *front, *rear;
    Node<T> *prevPtr, *currPtr;
    int size;
    int position;

    Node<T> *newNode(const T &item, Node<T> *ptrNext = nullptr);
    void freeNode(Node<T> *p);
    void copy(const LinkedList<T> &L);

public:
    LinkedList();
    LinkedList(const LinkedList<T> &L);
    ~LinkedList();
};