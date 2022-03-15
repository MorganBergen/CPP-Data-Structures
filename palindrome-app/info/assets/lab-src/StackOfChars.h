/**
 * @file        StackOfChars.h
 * @author      Morgan Bergen
 * @date        October 12/2021
 * @brief       This header file StackOfChars will implement the StackInterface, but of a stack specifically filled with chars.  StackOfChars is the derived class of StackInterface.
 */

#ifndef STACKOFCHARS_H
#define STACKOFCHARS_H

class StackOfChars : public StackInterface<char> {
private:
    Node* m_top;
    
public:
    
    /**
     * @pre An object of type ShackOfChars must be declared.
     * @post Initializes m_top to nullptr
     * @param None
     * @throw None
     * @return None
     */
    StackOfChars();
    
    /**
     * @pre
     * @post
     * @param
     * @throw
     * @return
     */
    StackOfChars(const StackOfChars& orig);
    
    /**
     * @pre A given stack must no longer be needed by the program.
     * @post This is the destructor of the StackOfChars object, it will destory this stack and free its assigned memory from freestore.
     * @param None
     * @throw None
     * @return None
     */
    ~StackOfChars();
    
    /**
     * @pre
     * @post
     * @param
     * @throw
     * @return
     */
    void operator=(const StackOfChars& rhs);
    
    /**
     * @pre None
     * @post An entry becomes added to top of the stack.
     * @param entry, the element to be added to the stack.
     * @throw None
     */
    void push(char entry);
    
    /**
     * @pre A StackOfChars must be non-empty.
     * @post If the operation runs successfully then the top element is removed from the stack.
     * @param None
     * @throw std::runtime_error if pop attempted on empty stack.
     * @return None
     */
    void pop();
    
    /**
     * @pre A StackOfChars must not be empty.
     * @post If the operation runs successfully then a copy of the top most char from the stack will be returned, however the stack will always remain unchanged.
     * @param None
     * @throw std::runtime_error if peek was attempted on an empty stack.
     * @return A copy of the top char in the stack.
     */
    char peek() const;
    
    /**
     * @pre A StackOfChars object must exist.
     * @post A bool will be returned regarding it's state, and the stack will remain unchanged.
     * @param None
     * @throw None
     * @return True if the StackOfChars is empty, false if non-empty.
     */
    bool isEmpty() const;
    
};

#endif
