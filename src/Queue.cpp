#include "Queue.h"

template <class T>
Queue<T>::Queue()
{
    head = nullptr;
    tail = nullptr;
    size = 0;
}

template <class T>
Queue<T>::~Queue()
{
    //dtor
}

template <class T>
int Queue<T>::get_size()
{
    return size;
}

template <class T>
bool Queue<T>::is_empty()
{
    return head == nullptr;
}

template <class T>
void Queue<T>::enqueue(T value)
{
    Node<T>* node = new Node<T>(value);
    Node<T>* old_tail = tail;
    if (is_empty())
    {
        head = node;
        tail = node;
    }
    else
    {
        tail = node;
        old_tail->next = node;
    }
    size++;
}

template <class T>
T Queue<T>::dequeue()
{
    T value = head->value;
    head = head->next;
    size--;
    return value;
}
