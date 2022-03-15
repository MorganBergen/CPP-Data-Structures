//  Node.h

#ifndef Node_h
#define Node_h

#include <stdio.h>

class Node {
private:
    char m_entry; //a data item
    Node* m_next; //pointer to next node
    
public:
    Node(char entry); //constructor
    char getEntry() const; //accessor method for m_entry
    void setEntry(char entry); //mutator method for m_entry
    Node* getNext() const; //accessor methd for m_next
    void setNext(Node* next); //mutator method for m_next
    
    
};

#endif /* Node_h */
