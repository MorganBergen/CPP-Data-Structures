#include "Node.h"
#include <stdio.h>
#include <iostream>

template <typename T>
Node<T>::Node() {
}

template <typename T>
Node<T>::Node(const T& new_entry) {
	entry = new_entry;
	next_node = nullptr;
}

template <typename T>
Node<T>::Node(const T& new_entry, Node<T>* new_next_node) {
	entry = new_entry;
	next_node = new_next_node;
}

template <typename T>
void Node<T>::setEntry(const T& new_entry) {
	entry = new_entry;
}

template <typename T>
void Node<T>::setNext(Node<T>* new_next_node) {
	next_node = new_next_node;
}

template <typename T>
T Node<T>::getEntry() const {
	return(entry);
}

template <typename T>
Node<T>* Node<T>::getNext() const {
	return(next_node);
}
