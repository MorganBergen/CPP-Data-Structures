//  Node.h

#ifndef Node_h
#define Node_h

#include <stdio.h>

class Node {
private:
    //a data item
    char m_entry;
    
    //pointer to next node
    Node* m_next;
    
public:
    //constructor
    Node(char entry);
    
    //accessor method for m_entry
    char getEntry() const;
    
    //mutator method for m_entry
    void setEntry(char entry);
    
    //accessor methd for m_next
    Node* getNext() const;
    
    //mutator method for m_next
    void setNext(Node* next);
    
};

#endif /* Node_h */
