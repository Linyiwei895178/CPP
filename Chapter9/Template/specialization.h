#include <iostream>
#include "../Stack/Stack.h"
using namespace std;

template <>
class Stack<bool, 32> {
    private:
        unsigned int list;
        int top;
    public:
        Stack();
        void push(bool item);
        bool pop();
        void clear();
        bool peek() const;
        bool isEmpty() const;
        bool isFull() const;
};

void Stack<bool, 32>::push(bool item) {
    assert(!isFull());
    ++top;
    list = (list << 1) | (item ? 1 : 0);
}

bool Stack<bool, 32>::pop() {
    assert(!isEmpty());
    bool result = ((list & 1) == 1);
    list >>= 1; 
    --top;
    return result;
}

template <int SIZE>
class Stack<bool, SIZE> {
private:
    enum {
        UNIT_BITS = sizeof(unsigned int) * 8;
        ARRAR_SIZE = (SIZE - 1) / UNIT_BITS + 1;
    };
    unsigned int list[ARRAY_SIZE];
    int top;
public:
    Stack();
    void push(bool item);
    bool pop();
    void clear();
    bool peek() const;
    bool isEmpty() const;
    bool isFull() const;
};

// template <int SIZE>
// void Stack<bool, SIZE>::push(bool item) {
//     assert(!isFull());
//     int index = ++top / UNIT_BITS;
//     list[index] = (list[index] << 1) | (item ? 1 : 0);
// }

// template <int SIZE>
// bool Stack<bool, SIZE>::pop() {
//     assert(!isEmpty());
//     int index = top / UNIT_BITS;
//     bool result = ((list[index] & 1) == 1);
//     list[index] >>= 1;
//     return result;
// }