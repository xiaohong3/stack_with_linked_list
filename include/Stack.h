#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <Node.h>

using namespace std;

template <class T>
class Stack
{
    public:
        Stack<T>();
        ~Stack<T>();
        void push(T value);
        T pop();
        bool is_empty();
        int get_size();

    private:
        Node<T>* head;
        int size;
};

template class Stack<string>;

#endif // STACK_H
