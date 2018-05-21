#include "Stack.h"

template <class T>
Stack<T>::Stack()
{
    head = nullptr;
    size = 0;
}

template <class T>
Stack<T>::~Stack()
{
    while(head != nullptr)
    {
        Node<T>* next = head->next;
        delete head;
        head = next;
    }
}

template <class T>
bool Stack<T>::is_empty()
{
    return head == nullptr;
}

template <class T>
int Stack<T>::get_size()
{
    return size;
}

template <class T>
void Stack<T>::push(T value)
{
    Node<T>* old_head = head;
    head = new Node<T>(value);
    head->value = value;
    head->next = old_head;
    size++;
}

template <class T>
T Stack<T>::pop()
{
    T value = head->value;
    head = head->next;
    size--;
    return value;
}
