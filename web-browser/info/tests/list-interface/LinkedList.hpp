#include <stdio.h>
#include <stdexcept>
#include "Node.h"

template <typename T>
LinkedList<T>::LinkedList() {
    std::cout << "LinkedList() constructor has been called." << std::endl;
    headptr = nullptr;
    item_count = 0;
}

template <typename T>
T LinkedList<T>::getEntry(int position) const {
    bool precondition = (position >= 1) && (position <= item_count);
    if (precondition == true) {
        Node<T>* nodeptr = getNodeAt(position);
        return (nodeptr -> getItem());
    } else {
        throw(std::runtime_error("getEntry() called with an empty list or invalid position"));
    }
}


template <typename T>
Node<T>* LinkedList<T>::getNodeAt(int position) const {
    
    bool precondition = ((position >= 1) && (position <= item_count));
    if (precondition == true) {
        Node<T>* currentptr = headptr;
        for (int skip = 0; skip < position; skip++) {
            currentptr = currentptr -> getNext();
        }
        return (currentptr);
    } else {
        throw (std::runtime_error("getNodeAt() called with an invalid position"));
    }
}


