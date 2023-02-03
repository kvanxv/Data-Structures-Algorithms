#include "Stack.h"
//==================
template<typename T>
T Stack<T>::Top()
{
    // just return the value
    // of the m_top node
    return m_top->Value;
}
//=================
template<typename T>
bool Stack<T>::isEmpty()
{
    return m_count<=0;
}
//=================
template<typename T>
void Stack<T>::Push(T val)
{
    // create a new node
    Node<T>* node = new Node<T>(val);

    // the Next pointer of this new node
    // will point to current m_top node
    node->Next = m_top;

    // the new Node now becomes the m_top node
    m_top = node;

    m_count++;
}
//=====================
template<typename T>
void Stack<T>::Pop()
{
    // do nothing if stack is empty
    if(isEmpty())
    {return;}

    // prepare the current m_top
    // to remove
    Node<T>* node = m_top;

    // the new m_top node will be
    // the Next pointer of the current m_top node
    m_top = m_top->Next;

    // Now it's safe to remove
    // the first element
    delete node;
}