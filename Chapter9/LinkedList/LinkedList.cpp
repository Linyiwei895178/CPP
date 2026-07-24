#include "LinkedList.h"
#include <iostream>

using namespace std;

// ========== LinkedList 模板成员函数实现 ==========

// 构造函数
template <class T>
LinkedList<T>::LinkedList()
    : front(nullptr), rear(nullptr), prevPtr(nullptr),
      currPtr(nullptr), size(0), position(-1) {}

// 拷贝构造函数
template <class T>
LinkedList<T>::LinkedList(const LinkedList<T> &L)
    : front(nullptr), rear(nullptr), prevPtr(nullptr),
      currPtr(nullptr), size(0), position(-1) {
    copy(L);
}

// 析构函数
template <class T>
LinkedList<T>::~LinkedList() {
    clear();
}

// 赋值运算符
template <class T>
LinkedList<T> &LinkedList<T>::operator=(const LinkedList<T> &L) {
    if (this != &L) {
        clear();
        copy(L);
    }
    return *this;
}

// 获取链表大小
template <class T>
int LinkedList<T>::getSize() const {
    return size;
}

// 判断链表是否为空
template <class T>
bool LinkedList<T>::isEmpty() const {
    return size == 0;
}

// 重置遍历指针到指定位置 (默认为表头)
template <class T>
void LinkedList<T>::reset(int pos) {
    if (pos < 0) pos = 0;
    prevPtr = nullptr;
    currPtr = front;
    position = 0;
    // 前进到指定位置
    while (currPtr != nullptr && position < pos) {
        next();
    }
}

// 将遍历指针后移一个节点
template <class T>
void LinkedList<T>::next() {
    if (currPtr != nullptr) {
        prevPtr = currPtr;
        currPtr = currPtr->nextNode();
        position++;
    }
}

// 判断是否到达链表尾
template <class T>
bool LinkedList<T>::endOfList() const {
    return currPtr == nullptr;
}

// 获取当前遍历位置
template <class T>
int LinkedList<T>::currentPosition() const {
    return position;
}

// 创建新节点
template <class T>
Node<T> *LinkedList<T>::newNode(const T &item, Node<T> *ptrNext) {
    Node<T> *p = new Node<T>(item, ptrNext);
    if (p == nullptr) {
        cerr << "Memory allocation failure!" << endl;
        exit(1);
    }
    return p;
}

// 释放节点
template <class T>
void LinkedList<T>::freeNode(Node<T> *p) {
    delete p;
}

// 深拷贝链表 L
template <class T>
void LinkedList<T>::copy(const LinkedList<T> &L) {
    Node<T> *p = L.front;
    while (p != nullptr) {
        insertRear(p->data);
        p = p->nextNode();
    }
}

// 在表头插入元素
template <class T>
void LinkedList<T>::insertFront(const T &item) {
    Node<T> *p = newNode(item, front);
    front = p;
    if (rear == nullptr) {
        rear = front;
    }
    size++;
    // 保持遍历指针位置有效
    if (position >= 0) position++;
}

// 在表尾插入元素
template <class T>
void LinkedList<T>::insertRear(const T &item) {
    Node<T> *p = newNode(item);
    if (rear != nullptr) {
        rear->insertAfter(p);
    } else {
        front = p;
    }
    rear = p;
    size++;
}

// 在当前遍历位置插入元素 (插入到 currPtr 之前)
template <class T>
void LinkedList<T>::insertAt(const T &item) {
    if (prevPtr == nullptr) {
        // 在表头或空表插入
        insertFront(item);
    } else {
        Node<T> *p = newNode(item, currPtr);
        prevPtr->insertAfter(p);
        size++;
        position++;
    }
}

// 在当前遍历位置之后插入元素
template <class T>
void LinkedList<T>::insertAfter(const T &item) {
    if (currPtr != nullptr) {
        Node<T> *p = newNode(item, currPtr->nextNode());
        currPtr->insertAfter(p);
        if (currPtr == rear) {
            rear = p;
        }
        size++;
    }
}

// 删除表头元素并返回其数据
template <class T>
T LinkedList<T>::deleteFront() {
    if (front == nullptr) {
        cerr << "List is empty!" << endl;
        exit(1);
    }
    Node<T> *temp = front;
    T data = temp->data;
    front = front->nextNode();
    if (front == nullptr) {
        rear = nullptr;
    }
    freeNode(temp);
    size--;
    return data;
}

// 删除当前遍历位置的节点
template <class T>
void LinkedList<T>::deleteCurrent() {
    if (currPtr == nullptr) {
        cerr << "No current element to delete!" << endl;
        return;
    }
    if (prevPtr == nullptr) {
        // 删除的是表头节点
        Node<T> *temp = front;
        front = front->nextNode();
        currPtr = front;
        if (front == nullptr) {
            rear = nullptr;
            position = -1;
        }
        freeNode(temp);
    } else {
        // 删除的是中间或表尾节点，使用 deleteAfter 绕过当前节点
        Node<T> *temp = prevPtr->deleteAfter();
        currPtr = currPtr->nextNode();  // 或者用 prevPtr->nextNode() 也行
        if (currPtr == nullptr) {
            rear = prevPtr;
            position = size;  // 到达尾部
        }
        freeNode(temp);
    }
    size--;
}

// 获取当前遍历位置的数据 (可读写版本)
template <class T>
T &LinkedList<T>::data() {
    if (currPtr == nullptr) {
        cerr << "No current element!" << endl;
        exit(1);
    }
    return currPtr->data;
}

// 获取当前遍历位置的数据 (只读版本)
template <class T>
const T &LinkedList<T>::data() const {
    if (currPtr == nullptr) {
        cerr << "No current element!" << endl;
        exit(1);
    }
    return currPtr->data;
}

// 清空链表
template <class T>
void LinkedList<T>::clear() {
    while (front != nullptr) {
        Node<T> *temp = front;
        front = front->nextNode();
        freeNode(temp);
    }
    rear = nullptr;
    prevPtr = nullptr;
    currPtr = nullptr;
    size = 0;
    position = -1;
}

int main() {
    LinkedList<int> list;

    for (int i = 0; i < 10; i++) {
        int item;
        cin >> item;
        list.insertFront(item);
    }

    cout << "List: ";
    list.reset();

    while (!list.endOfList()) {
        cout << list.data() << " ";
        list.next();
    }
    cout << endl;

    int key;
    cout << "Please enter some integer needed to be deleted: ";
    cin >> key;
    list.reset();
    
    while(!list.endOfList()) {
        if (list.data() == key)
        {
            list.deleteCurrent();
        }
        list.next();
    }

    cout << "List: ";
    list.reset();
    while (!list.endOfList()) {
        cout << list.data() << " ";
        list.next();
    }
    cout << endl;
    return 0;
}