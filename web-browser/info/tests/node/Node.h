#ifndef Node_h
#define Node_h

class Node {
private:
    char m_entry;
    Node* next_node;
    
public:
    Node(char initial_entry);
    void setEntry(char new_entry);
    char getEntry();
    void setNext(Node* new_node);
    Node* getNext();
};




#endif
