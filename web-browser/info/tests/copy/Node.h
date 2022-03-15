#ifndef Node_h
#define Node_h

template <typename T>
class Node {

private:
	T entry;
	Node<T>* next_node;
	
public:
	Node();
	Node(const T& new_entry);
	Node(const T& new_entry, Node<T>* new_next_node);
	T getEntry() const;
	void setEntry(const T& new_entry);
	Node<T>* getNext() const;
	void setNext(Node<T>* new_next_node);
	
};

#include "Node.hpp"

#endif
