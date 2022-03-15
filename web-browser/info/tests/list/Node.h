#ifndef NODE_H
#define NODE_H

template <typename T>
class Node {
	
private:
	T        entry;         // A data item
	Node<T>* next_node;     // Pointer to next node
	
public:
	Node();
	Node(const T& new_entry);
	Node(const T& new_entry, Node<T>* new_next_node);
	void setEntry(const T& new_entry);
	void setNext(Node<T>* new_next_node);
	T getEntry() const ;
	Node<T>* getNext() const ;
	
};

#include "Node.hpp"
#endif
