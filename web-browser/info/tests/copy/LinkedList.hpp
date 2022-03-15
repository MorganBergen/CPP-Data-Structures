#include <stdio.h>
#include <iostream>
#include <stdexcept>
#include "Node.h"
#include "LinkedList.h"

template <typename T>
LinkedList<T>::LinkedList() {
	std::cout << "\n-- AN EMPTY LINKED LIST HAS BEEN CREATED." << std::endl;
	headptr = nullptr;
	m_length = 0;
}

template <typename T>
/// try catch block for calling this method is required
/// @param position is the specific location within the linked list to return the node object.
Node<T>* LinkedList<T>::getNodeAt(int position) {
	
//	std::cout << "\n-- NODE AT POSITION " << position << " WILL BE RETURNED." << std::endl;
	
	bool valid_position = (position >= 1) && (position <= m_length);
	
	if (valid_position) {
		
		Node<T>* jumper = nullptr;
		jumper = headptr;
		
		for (int i = 1; i < position; i++) {
			jumper = jumper -> getNext();
		}
		
		return (jumper);
		
	} else {
		throw (std::runtime_error("invalid position"));
	}
	
}

template <typename T>
bool LinkedList<T>::isEmpty() const {
	
	std::cout << "\n-- RETURNING THE IS EMPTY STATUS OF THE LIST." << std::endl;
	
	if (m_length == 0) {
		return(true);
	}
	return(false);
}

template <typename T>
int LinkedList<T>::getLength() const {
	std::cout << "\n-- RETURNING THE AMOUNT OF NODE OBJECTS IN THE LIST." << std::endl;
	return(m_length);
}

/// try catch block for calling this is required
/// @param position is the specific location within the linked list to remove the node, see valid_position variable for the position's conditions
/// @param new_entry is the entry within a node, called specifically T entry in the node class that you can enter data into
template <typename T>
bool LinkedList<T>::insert(int position, const T& new_entry) {
	
	bool valid_position = (position >= 1) && (position <= m_length + 1);
	
	if (valid_position) {
		
		Node<T>* insert_ptr = nullptr;
		Node<T>* prev_ptr = nullptr;
		Node<T>* target_ptr = nullptr;
		
		insert_ptr = new Node<T>(new_entry);
		
		if (position == 1) {
			
			//inserts a new node at the beginning of the chain
			insert_ptr -> setNext(headptr);
			headptr = insert_ptr;
			
		} else {
			
			prev_ptr = getNodeAt(position - 1);
			target_ptr = prev_ptr -> getNext();
			insert_ptr -> setNext(target_ptr);
			prev_ptr -> setNext(insert_ptr);
			
		}
		
		m_length++;
		std::cout << "\n-- THE NEW ENTRY " << new_entry << " AT POSITION ";
		std::cout << position << " HAS BEEN BE INSERTED INTO THE LIST." << std::endl;
		
	} else {
		std::cout << "\n-- THE NEW ENTRY " << new_entry << " AT POSITION ";
		std::cout << position << " FAILED TO BE INSERTED INTO THE LIST.\n" << std::endl;
		throw (std::runtime_error("invalid position\n"));
	}
	
	return (valid_position);
}

/// use the try catch block
/// @param position the specific location within the linked list to remove the node
template <typename T>
bool LinkedList<T>::remove(int position) {
	
	std::cout << "\n-- A NODE AT POSITION ";
	std::cout << position << " WILL BE REMOVED FROM THE LIST." << std::endl;
	
	bool valid_position = (position >= 1) && (position <= m_length);
	
	if (valid_position) {
		Node<T>* prev_ptr = nullptr;
		Node<T>* target_ptr = nullptr;
		
		if (position == 1) {
			target_ptr = headptr;
			headptr = headptr -> getNext();
		} else {
			prev_ptr = getNodeAt(position - 1);
			target_ptr = prev_ptr -> getNext();
			prev_ptr -> setNext(target_ptr -> getNext());
		}
		
		target_ptr -> setNext(nullptr);
		delete target_ptr;
		target_ptr = nullptr;
		
		m_length--;
		
	} else {
		throw (std::runtime_error("position is invalid, and thus the node requested to be removed does not exist."));
	}
	
	return (valid_position);
	
}

template <typename T>
void LinkedList<T>::clear() {
	std::cout << "\n-- A NODE AT POSITION 1 WILL BE REMOVED FROM THE LIST." << std::endl;
	
	while (!isEmpty()) {
		remove(1);
	}
}

template <typename T>
T LinkedList<T>::getEntry(int position) {
	
//	std::cout << "\n-- AN ENTRY FROM THE NODE AT POSITION " << position << " HAS BEEN REQUESTED TO BE RETURNED." << std::endl;
	
	bool valid_position = (position >= 1) && (position <= m_length);
	
	if (valid_position) {
		
		Node<T>* newNode = nullptr;
		newNode = new Node<T>();
		newNode = getNodeAt(position);
		
		return (newNode -> getEntry());
		
		
	} else {
		throw (std::runtime_error("invalid position."));
	}
	
	return(0);
	
}































