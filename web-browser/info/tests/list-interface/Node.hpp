#include "Node.h"
#include <stdio.h>
#include <iostream>

template <typename T>
Node<T>::Node(const T entry){
    m_entry = entry;
    m_next = nullptr;
}

template <typename T>
T Node<T>::getEntry() const {
    return (m_entry);
}

template <typename T>
void Node<T>::setEntry(const T entry) {
    m_entry = entry;
}

template <typename T>
Node<T>* Node<T>::getNext() const {
    return (m_next);
}

template <typename T>
void Node<T>::setNext(Node<T>* new_next) {
    m_next = new_next;
}
