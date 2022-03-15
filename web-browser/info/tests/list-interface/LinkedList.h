#ifndef LinkedList_h
#define LinkedList_h

#include "ListInterface.h"
#include "Node.h"
//#include "PrecondViolatedExcep.h"

template <typename T>
class LinkedList : public ListInterface<T> {
private:
    Node<T>* headptr;
    int item_count;
    Node<T>* getNodeAt(int position) const;
    
public:
    LinkedList();
    T getEntry(int position) const;

};

#include "LinkedList.hpp"
#endif

