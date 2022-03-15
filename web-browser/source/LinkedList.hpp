#include "Node.h"
#include "LinkedList.h"
#include "ListInterface.h"
#include <stdio.h>
#include <iostream>
#include <stdexcept>

template <typename T>
LinkedList<T>::LinkedList() {
	headptr = nullptr;
	m_length = 0;
}

template <typename T>
LinkedList<T>::LinkedList(const LinkedList<T> & aList){
	
	//declarations
	Node<T>* origChainPtr = nullptr;
	Node<T>* newChainPtr = nullptr;
	
	origChainPtr = aList.headptr;
	
	if (origChainPtr == nullptr) {
		headptr = aList.headptr;
		m_length = aList.m_length;
	} else {
		
		headptr = new Node<T>();
		newChainPtr = headptr;
		headptr -> setEntry(origChainPtr -> getEntry());
		m_length++;
		origChainPtr = origChainPtr -> getNext();
		
	
		while (origChainPtr != nullptr) {
			T nextEntry = origChainPtr -> getEntry();
			Node<T>* newNodePtr = new Node<T>(nextEntry);
			newChainPtr -> setNext(newNodePtr);
			m_length++;
			newChainPtr = newChainPtr -> getNext();
			origChainPtr = origChainPtr -> getNext();
			
		}
		newChainPtr -> setNext(nullptr);
	}
}

template <typename T>
Node<T>* LinkedList<T>::getNodeAt(int position) {
	
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
LinkedList<T>::~LinkedList() {
	clear();
}

template <typename T>
bool LinkedList<T>::isEmpty() const {
	if (m_length == 0) {
		return(true);
	}
	return(false);
}

template <typename T>
int LinkedList<T>::length() const {
	return(m_length);
}

template <typename T>
void LinkedList<T>::insert(int position, const T& new_entry) {
	
	bool valid_position = (position >= 1) && (position <= m_length + 1);
	if (valid_position) {
		Node<T>* insert_ptr = nullptr;
		Node<T>* prev_ptr = nullptr;
		Node<T>* target_ptr = nullptr;
		insert_ptr = new Node<T>(new_entry);
		if (position == 1) {
			insert_ptr -> setNext(headptr);
			headptr = insert_ptr;
		} else {
			prev_ptr = getNodeAt(position - 1);
			target_ptr = prev_ptr -> getNext();
			insert_ptr -> setNext(target_ptr);
			prev_ptr -> setNext(insert_ptr);
		}
		m_length++;
	} else {
		throw (std::runtime_error("invalid position\n"));
	}
}

template <typename T>
void LinkedList<T>::remove(int position) {
	
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
}

template <typename T>
void LinkedList<T>::clear() {
	while (!isEmpty()) {
		remove(1);
	}
}

template <typename T>
T LinkedList<T>::getEntry(int position) {
	
	bool valid_position = (position >= 1) && (position <= m_length);
	if (valid_position) {
		Node<T>* newNode = nullptr;
		newNode = new Node<T>();
		newNode = getNodeAt(position);
		return (newNode -> getEntry());
	} else {
		throw (std::runtime_error("invalid position."));
	}
}

template <typename T>
void LinkedList<T>::setEntry(int position, const T& new_entry) {
	
	bool valid_position = (position >= 1) && (position <= length());
	
	if (valid_position) {
		
		remove(position);
		insert(position, new_entry);
		
	} else {
		throw (std::runtime_error("invalid position"));
	}
	
	
	
}
