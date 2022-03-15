#ifndef LinkedList_h
#define LinkedList_h

#include "ListInterface.h"
#include "Node.h"

template <typename T>
class LinkedList : public ListInterface<T> {
private:
	Node<T>* headptr;
	int m_length;
	Node<T>* getNodeAt(int position);
	
public:
	LinkedList();
	LinkedList(const LinkedList<T> & orginal);
	virtual ~LinkedList();
	virtual void insert(int position, const T& new_entry);
	virtual void remove(int position);
	virtual T getEntry(int position);
	virtual void clear();
	virtual int length() const;
	virtual bool isEmpty() const;
	virtual void setEntry(int position, const T& new_entry);
	
};


#endif
