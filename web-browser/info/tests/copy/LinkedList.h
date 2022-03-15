#ifndef LinkedList_h
#define LinkedList_h

#include "Node.h"

template <typename T>
class LinkedList {
private:
	Node<T>* headptr;
	int m_length;
	Node<T>* getNodeAt(int position);
	
public:
	LinkedList();
	~LinkedList();
	LinkedList(const LinkedList<std::string>& list);
	void insert(int position, const T& new_entry);
	void remove(int position);
	T getEntry(int position);
	void clear();
	int length() const;
	bool isEmpty() const;
	
	/// @pre The position is valid and must already exist
	/// @post  replaces the new entry at the given position in this list.
	/// @param position is the position of the entry to replace; 1 ≤ position ≤ length()
	/// @param new_entry is the replacement entry
	/// @return None.  The indicated entry is replaced.
	/// @throw std::runtime_error if the position is not valid.
	void setEntry(int position, const T& new_entry);
	
	
};

#include "LinkedList.hpp"

#endif


