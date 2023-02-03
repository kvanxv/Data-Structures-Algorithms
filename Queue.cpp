#include "Queue.h"
//============================
template<typename T>
bool Queue<T>::isEmpty()
{
    return m_count<=0;
}
//===============================
template<typename T>
T Queue<T>::Front()
{
    // just return the value of the top node;
    return front->Value;
}
//===============================
template<typename T>
void Queue<T>::enqueue(T val)
{
    // create a new Node
    Node<T>* node = new Node<T>(val);

    if(m_count == 0)
    {
        // if the queue is empty,
        // the new node will be the front and back
        node->next = nullptr;
        front = node;
        back = front;
    }
    else
    {
        back->Next = node;
        front = node;
    }
    m_count++;
}
//===============================
template<typename T>
void Queue<T>::dequeue()
{
    // do nothing if list is empty
    if (m_count == 0)
    {return;}

    // save the current front to a new node
    Node<T>* node = front;
    front = front->Next;

    delete node;

    m_count--;
}