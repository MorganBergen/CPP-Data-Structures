/**
 * @file
 * @author      Morgan Bergen
 * @date        November 10 2021
 * @brief       This is the QueueInterface, whereby this acts at the base class for the Queue class.   The derived class Queue will define the virtual methods listed below, which are isEmpty(), enqueue(Q new_back_entry), dequeue(), and peekFront().  This file acts as a contract that any subclass must fulfill.
 */

#ifndef QueueInterface_h
#define QueueInterface_h

template <typename Q>
class QueueInterface {
public:
    virtual ~QueueInterface(){};
    virtual bool isEmpty() const = 0;
    virtual void enqueue(Q new_back_entry) = 0;
    virtual void dequeue() = 0;
    virtual Q peekFront() const = 0;
};

#endif
