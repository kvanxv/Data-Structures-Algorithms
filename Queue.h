#pragma once
#ifndef QUEUE_H
#define QUEUE_H
//==================================
#include "Node.h"
//==================================

template<typename T>
class Queue
{
public:
    bool isEmpty();
    T Front();
    void enqueue(T val);
    void dequeue();

private:
    int m_count;
    Node<T>* front;
    Node<T>* back;
};

#endif