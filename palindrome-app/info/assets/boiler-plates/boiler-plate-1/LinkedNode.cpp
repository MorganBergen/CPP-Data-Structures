//  LinknedNode.cpp

#include "LinkedNode.h"
#include "Node.h"
#include <iostream>
#include <string>

LinkedNode::LinkedNode() {
    std::cout << "LinkedNode object has been constructed" << std::endl;
    head_ptr = nullptr;
    item_count = 0;
}

bool LinkedNode::add(char new_entry) {
    Node* next_node_ptr = new Node(new_entry);
    next_node_ptr -> setNext(head_ptr);
    head_ptr = next_node_ptr;
    item_count++;
    
    std::cout << "there are " << item_count << " node objects [ " << next_node_ptr -> getEntry() << " | " << next_node_ptr -> getNext() << " ] " << std::endl;
    
    return(true);
}

//searching for target entry
Node* LinkedNode::getPointerTo(char target) {
    bool found = false;
    
    Node* current_ptr = head_ptr;
    while (!found && current_ptr != nullptr) {
        if (target == current_ptr -> getEntry()) {
            found = true;
            std::cout << "found " << current_ptr -> getEntry() << " it lives in address == ";
        } else {
            current_ptr = current_ptr -> getNext();
        }
    }
    return (current_ptr);
}

void LinkedNode::printChain(char target) {
    bool found = false;
    
    Node* current_ptr = head_ptr;
    while (!found && current_ptr != nullptr) {
        if (target == current_ptr -> getEntry()) {
            found = true;
            std::cout << "found " << current_ptr -> getEntry() << std::endl;
        } else {
            std::cout << "[ " << current_ptr -> getEntry() <<  " " << current_ptr -> getNext()  << " ] ";
            current_ptr = current_ptr -> getNext();
        }
    }
}
