#include "Node.h"
#include <stdio.h>
#include <iostream>

template <typename T>
Node<T>::Node() {
	//	std::cout << "\n---- Node() \n---- AN EMPTY NODE HAS BEEN CREATED [Ø" << entry << " -> nullptr]" << std::endl;
}

template <typename T>
Node<T>::Node(const T& new_entry) {
	entry = new_entry;
	next_node = nullptr;
	//	std::cout << "\n---- Node(const T& new_entry \n---- A NEW NODE HAS BEEN CREATED [" << new_entry << " -> nullptr]" << std::endl;
}

template <typename T>
Node<T>::Node(const T& new_entry, Node<T>* new_next_node) {
	entry = new_entry;
	next_node = new_next_node;
	//	std::cout << "\n---- Node(const T& new_entry, Node<T>* new_next_node) \n---- A NEW NODE HAS BEEN CREATED [" << new_entry << " -> " << next_node -> getEntry << "]"<< std::endl;
}

template <typename T>
void Node<T>::setEntry(const T& new_entry) {
	//	std::cout << "\n---- setEntry(const T& new_entry \n---- A NEW ENTRY HAS BEEN SET IN THE NODE" << std::endl;
	entry = new_entry;
}

template <typename T>
void Node<T>::setNext(Node<T>* new_next_node) {
	//	std::cout << "\n---- setNext(Node<T>* new_next_node) \n---- A NEW NODE HAS BEEN SET AS THE NEXT NODE IN THE CHAIN" << std::endl;
	next_node = new_next_node;
}

template <typename T>
T Node<T>::getEntry() const {
	//	std::cout << "\n---- getEntry() \n---- A NODE'S ENTRY HAS BEEN REQUESTED TO BE RETURNED" << std::endl;
	return(entry);
}

template <typename T>
Node<T>* Node<T>::getNext() const {
	
	//	std::cout << "\n---- getNext()  \n---- THE NEXT NODE IN THE CHAIN HAS BEEN REQUESTED TO BE RETURNED" << std::endl;
	
	return(next_node);
}
