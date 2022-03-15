//  LinkedNode.h

#ifndef LinkedNode_h
#define LinkedNode_h

#include "Node.h"
#include <stdio.h>
#include <string>

class LinkedNode {
    
private:
    Node* head_ptr;  //pointer to first node object
    int item_count;  //current count of
    
    

public:
    LinkedNode();
    bool add(char new_entry);
    bool remove(char old_entry);
    Node* getPointerTo(char target);
    void printChain(char target);
    
    
    
};

#endif /* LinkedBag_hpp */
