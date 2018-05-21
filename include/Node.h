#ifndef NODE_H
#define NODE_H

template <class T>
struct Node
{
    Node(T v) : value(v) { next = nullptr; }
    T value;
    Node<T>* next;
};

#endif // NODE_H
