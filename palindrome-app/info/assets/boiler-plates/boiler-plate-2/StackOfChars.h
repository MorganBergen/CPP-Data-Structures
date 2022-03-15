//  StackOfChars.h

#ifndef StackOfChars_h
#define StackOfChars_h

#include <stdio.h>
#include "Node.h"

class StackOfChars {
private:
    Node* m_top;
    
public:
    StackOfChars();
    
    StackOfChars(const StackOfChars& orig);
    ~StackOfChars();
    void operator=(const StackOfChars& rhs);
    void push(char entry);
    void pop();
    char peek() const;  //should peek throw an exception?
    bool isEmpty() const;
    
};

#endif /* StackOfChars_h */
