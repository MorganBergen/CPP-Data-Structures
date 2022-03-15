/**
 * @file        Node.h
 * @author      Morgan Bergen
 * @date        November 10 2021
 * @brief       This is the Node header file.  This class will be the most low level class that will be holding the actual data read in from the file of the specific human names that will fill the line and elevator.  These Nodes will form a linked based data structure and will be organized based on the Stacks or Queues utilization of such ADT.
 */

#ifndef Node_h
#define Node_h

#include <stdio.h>

template <typename T>
class Node {
    
private:
    T m_entry;
    Node* m_next;
    
public:
    /*
     * @pre     none
     * @post    the m_entry will be initialized by the argument parameter entry.
     * @param   T entry
     * @throws  none
     * @returns none
     */
    Node(const T entry);
    
    /*
     * @pre     none
     * @post    nones, because of const
     * @param   none
     * @throws  none
     * @returns T m_entry
     */
    T getEntry() const;
    
    /*
     * @pre     none
     * @post    m_entry = entry
     * @param   T entry
     * @throws  none
     * @returns none
     */
    void setEntry(const T entry);
    
    /*
     * @pre     none
     * @post    none
     * @param   none
     * @throws  none
     * @returns m_next
     */
    Node<T>* getNext() const;
    
    /*
     * @pre     none
     * @post    m_next = new_next
     * @param   new_next
     * @throws  none
     * @returns none
     */
    void setNext(Node<T>* new_next);
    
};

#include "Node.hpp"

#endif
