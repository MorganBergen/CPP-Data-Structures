#ifndef Node_h
#define Node_h

#include <stdio.h>

template <typename T>
class Node {
    
private:
    T m_entry;
    Node* m_next;
    
public:
    
    Node(const T entry);
    
    T getEntry() const;
    
    void setEntry(const T entry);
    
    Node<T>* getNext() const;
    
    void setNext(Node<T>* new_next);
    
};

#include "Node.hpp"

#endif
