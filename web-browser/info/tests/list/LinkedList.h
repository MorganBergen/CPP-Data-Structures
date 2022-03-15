#ifndef LinkedList_h
#define LinkedList_h

#include "Node.h"

template <typename T>
class LinkedList {
private:
	Node<T>* headptr;
	int m_length;
	Node<T>* getNodeAt(int position) const;
	
public:
	LinkedList();
	T getEntry(int position) const;
	int getLength() const;
	bool insert(int new_position, const  T& new_entry);
	bool remove(int position);
	void printList(){
		for (int i = 1; i <= m_length; i++) {
			std::cout << getEntry(i) << " ";
		}
		std::cout << std::endl;
	}
	
};

#include "LinkedList.hpp"
#endif

