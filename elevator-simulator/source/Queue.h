/**
 * @file        Queue.h
 * @author      Morgan Bergen
 * @date        November 10 2021
 * @brief       This is the Queue header file, whereby it is the child class of the base class Queue Interface.  This header file will declare methods which will generate a Queue like data structure intended for people upon entering into a line for the elevator.
 */

#ifndef Queue_h
#define Queue_h

#include "Node.h"
#include "QueueInterface.h"
#include <stdio.h>

template <typename Q>
class Queue : public QueueInterface<Q> {
private:
    Node<Q>* front_node_ptr;
    Node<Q>* back_node_ptr;
    
public:
    
    /*
     * @pre     none
     * @post    front_node_ptr is set to nullptr
     * @param   none
     * @throws  none
     * @returns none
     */
    Queue();
    
    /*
     * @pre     a current queue must already have been constructed
     * @post    a copy of the current data structure is recreated
     * @param   Queue& original
     * @throws  none
     * @returns none
     */
    Queue(const Queue& original);
    
    /*
     * @pre     a queue must already exist, however this method will be automatically called at the end of the program.
     * @post    deallocation of front_node_ptr and back_node_ptr
     * @param   none
     * @throws  none
     * @returns none
     */
    ~Queue();
    
    /*
     * @pre     a constructor must have been previous initialized
     * @post    none
     * @param   none
     * @throws  none
     * @returns returns true if the queue is empty, false if otherwise
     */
    bool isEmpty() const;
    
    
    /*
     * @pre     a constructor must have been previous initialized
     * @post    new_back_entry will have a new initialized value - new_back_entry added to back of queue
     * @param   Q new_back_entry
     * @throws  none
     * @returns none
     */
    void enqueue(Q new_back_entry);
    
    /*
     * @pre     a queue must not be empty, however by using this method there is an implicit assumption that the queue is in fact not empty.
     * @post    the front node is removed from the queue.
     * @param   none
     * @throws  std::runtime_error if attempted on an empty queue.
     * @returns none
     */
    void dequeue();
    
    /*
     * @pre     a constructor must have been previous initialized and assumes that the queue is not empty.
     * @post    none
     * @param   none
     * @throws  std::runtime_error if attempted on an empty queue.
     * @returns none
     */
    Q peekFront() const;
    
};

#include "Queue.hpp"

#endif
