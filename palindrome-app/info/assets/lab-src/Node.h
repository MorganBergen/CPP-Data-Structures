/**
 * @file        Node.h
 * @author      Morgan Bergen
 * @date        October 12/2021
 * @brief       This header file for the Node Class is the data type that will be used for the data structure Stack.  The characteristics of this class entail m_entry which are the characters contained in each node and m_next which are the pointers of type node which point to the next node object.  The operations of this class comprise of a paramterized constructor which takes in an entry and initialzies it to m_entry, getEntry which returns the character m_entry, setEntry which set m_entry equal to entry, getNext which returns the pointer to the next node, and setNext which takes in a node pointer next and sets it equal to m_next.
 */

#ifndef Node_h
#define Node_h

class Node {
    
private:
    char m_entry;
    Node* m_next;
    
public:
    
    /**
     * @pre None
     * @post Sets m_entry equal to entry, and sets the next  node to null
     * @param entry, a character
     * @throw None
     * @return None
     */
    Node(char entry);
    
    /**
     * @pre None
     * @post Returns the character m_entry
     * @param None
     * @throw None
     * @return Returns m_entry
     */
    char getEntry() const;
    
    /**
     * @pre None
     * @post m_entry is set equal to entry
     * @param entry, a character
     * @throw None
     * @return None
     */
    void setEntry(char entry);
    
    /**
     * @pre None
     * @post Returns the pointer to the next node
     * @param None
     * @throw None
     * @return Returns m_next
     */
    Node* getNext() const;
    
    /**
     * @pre None
     * @post m_next is equal to next
     * @param next, a pointer
     * @throw None
     * @return None
     */
    void setNext(Node* next);
    
};

#endif
