#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <Node.h>

template <class T>
class Queue
{
    public:
        Queue<T>();
        ~Queue<T>();
        int get_size();
        bool is_empty();
        void enqueue(T value);
        T dequeue();

    private:
        Node<T>* head;
        Node<T>* tail;
        int size;
};

#endif // QUEUE_H
