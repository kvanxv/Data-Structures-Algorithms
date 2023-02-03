#pragma once
#ifndef STACK_H
#define STACK_H
//==================
#include "Node.h"
//==================
template<typename T>
class Stack
{
public:
    bool isEmpty();
    T Top();
    void Push(T val);
    void Pop();
private:
    int m_count;
    Node<T>* m_top;
};

#endif
