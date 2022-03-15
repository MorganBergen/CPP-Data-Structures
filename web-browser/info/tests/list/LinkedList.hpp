#include <stdio.h>
#include <stdexcept>
#include "Node.h"

template <typename T>
LinkedList<T>::LinkedList() {
	std::cout << "\n-- LinkedList() \n-- AN EMPTY LINKED LIST HAS BEEN CREATED" << std::endl;
	headptr = nullptr;
	m_length = 0;
}

template <typename T>
T LinkedList<T>::getEntry(int position) const {
	
	std::cout << "\n-- getEntry(int position) \n-- AN ENTRY FROM A NODE AT POSITION " << position << " IN THE LIST HAS BEEN REQUESTED TO BE RETURNED" << std::endl;
	
	bool  valid_position = ((position >= 1) && (position <= m_length));
	
	if (valid_position == true) {
		
		Node<T>* jumper = getNodeAt(position);
		return(jumper -> getEntry());
		
	} else {
		
		throw (std::runtime_error("error:  the entry you requested cannot be returned because the provided position is invalid."));
	}
}

template <typename T>
Node<T>* LinkedList<T>::getNodeAt(int position) const {
	
	std::cout << "\n-- getNodeAt(int position) \n-- A NODE AT POSITION " << position << " HAS BEEN REQUESTED TO BE RETURNED" << std::endl;
	
	bool  valid_position = ((position >= 1) && (position <= m_length));
	
	if (valid_position == true) {
		Node<T>* jumper = headptr;
		for (int skip = 1; skip < position; skip++) {
			jumper = jumper -> getNext();
		}
		
		return(jumper);
		
	} else {
		throw (std::runtime_error("invalid position"));
	}
	
}

template <typename T>
int LinkedList<T>::getLength() const {
	std::cout << "\n-- getLength() \n-- THE LENGTH OF THE LIST HAS BEEN REQUESTED TO BE VIEWED" << std::endl;
	return(m_length);
}

template <typename T>
bool LinkedList<T>::insert(int new_position, const T& new_entry){
	
	std::cout << "\n-- insert(int new_position, const T& new_entry) \n-- A NEW NODE WITH THE ENTRY " << new_entry << " AT POSITION " << new_position << " WILL BE INSERTED INTO THE LIST." << std::endl;
	
	bool valid_position = (new_position >= 1) && (new_position <= m_length + 1);
	
	if (valid_position == true) {
		
		//the node we want to insert
		Node<T>* insert_nodeptr = nullptr;
		insert_nodeptr = new Node<T>(new_entry);
		
		//previous pointer
		Node<T>* previous_ptr = nullptr;
		
		//target pointer
		Node<T>* target_ptr = nullptr;
		
		if (new_position == 1) {
			
			//inserts a new node at the beginning of the chain
			insert_nodeptr -> setNext(headptr);
			headptr = insert_nodeptr;
			
		} else {
			
			previous_ptr = getNodeAt(new_position - 1);
			target_ptr = previous_ptr -> getNext();
			insert_nodeptr -> setNext(target_ptr);
			previous_ptr -> setNext(insert_nodeptr);
			
		}
		
		m_length++;
		return(valid_position);
		
	} else {
		throw (std::runtime_error("invalid position"));
	}
	
}


template <typename T>
bool LinkedList<T>::remove(int position) {
	
	std::cout << "\n-- remove(int position) \n-- A NODE AT POSITION " << position << " WILL BE REMOVED FROM THE LIST" << std::endl;

	bool valid_position = (position >= 1) && (position <= m_length);
	
	if (valid_position == true) {
		
		Node<T>* previous_ptr = nullptr;
		Node<T>* target_ptr = nullptr;
		
		if (position == 1) {
			target_ptr = headptr;
			headptr = headptr -> getNext();
		} else {
			previous_ptr = getNodeAt(position - 1);
			target_ptr = previous_ptr -> getNext();
			previous_ptr -> setNext(target_ptr -> getNext());
		}
		
		target_ptr -> setNext(nullptr);
		delete target_ptr;
		target_ptr = nullptr;
		
		m_length--;
		
	} else {
		throw (std::runtime_error("position is invalid, and thus the node requested to be removed does not exist."));
	}
	
	return(valid_position);
}
