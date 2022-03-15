/**
 * @file        Queue.hpp
 * @author      Morgan Bergen
 * @date        November 10 2021
 * @brief       This is the implementation file for the Queue class whereby the interface's methods will be directly found here for tangible definitions.  These methods include a constructor, copy constructor, destructor, isEmpty(), enqueue(Q new_back_entry), and peekFront().
 */

#include "Queue.h"
#include "Node.h"
#include <stdexcept>
#include <iostream>

template <typename Q>
Queue<Q>::Queue() {
    front_node_ptr = nullptr;
}

template <typename Q>
Queue<Q>::Queue(const Queue& original) {
    
    Node<Q>* original_node = original.front_node_ptr;
    Q first_entry = original_node -> getEntry();
    std::cout << first_entry << std::endl;
    
    if (original_node == nullptr){
        front_node_ptr = nullptr;
        back_node_ptr = nullptr;
    } else {
        
        back_node_ptr = new Node<Q>(first_entry);
        Node<Q>* new_node = back_node_ptr;
        original_node = original_node -> getNext();
        
        while (original_node != nullptr) {
            Q next_entry = original_node -> getEntry();
            Node<Q>* new_node_ptr = nullptr;
            new_node_ptr = new Node<Q>(next_entry);
            new_node -> setNext(new_node_ptr);
            original_node = original_node -> getNext();
            new_node -> setNext(nullptr);
        }
        
        original_node = nullptr;
        delete original_node;
        new_node = nullptr;
        delete new_node;
    }
}

template <typename Q>
Queue<Q>::~Queue() {
    
    Node<Q>* temp_node_ptr = front_node_ptr;
    
    while (front_node_ptr != nullptr) {
        temp_node_ptr = front_node_ptr -> getNext();
        delete front_node_ptr;
        front_node_ptr = temp_node_ptr;
    }
}

template <typename Q>
bool Queue<Q>::isEmpty() const {
    if (front_node_ptr == nullptr) {
        return (true);
    } else {
        return (false);
    }
}

template <typename Q>
void Queue<Q>::enqueue(Q new_back_entry) {
    
    Node<Q>* new_node_ptr = nullptr;
    new_node_ptr = new Node<Q>(new_back_entry);
    
    if (isEmpty() == true) {
        front_node_ptr = new_node_ptr;
    } else {
        back_node_ptr -> setNext(new_node_ptr);
    }
    
    back_node_ptr = new_node_ptr;
    new_node_ptr = nullptr;
    delete new_node_ptr;
    
}

//when in use always call with a try catch block
template <typename Q>
void Queue<Q>::dequeue() {
    
    if (isEmpty() != true) {
        Node<Q>* delete_node_ptr = front_node_ptr;
        front_node_ptr = front_node_ptr -> getNext();
        delete (delete_node_ptr);
    } else {
        throw (std::runtime_error("Dequeue cannot be attempted on an empty queue.\n"));
    }
}

//when in use always call with a try catch block
template <typename Q>
Q Queue<Q>::peekFront() const {
    
    if (front_node_ptr != nullptr) {
        return (front_node_ptr -> getEntry());
    } else {
        throw (std::runtime_error("Peekfront cannot be attemped on an empty queue."));
        return(nullptr);
    }
}
