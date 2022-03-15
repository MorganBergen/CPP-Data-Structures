#ifndef ListInterface_h
#define ListInterface_h

#include <string>

template <typename T>
class ListInterface {

public:
	virtual ~ListInterface() {};
	virtual void insert(int position, const T& new_entry) = 0;
	virtual void remove(int position) = 0;
	virtual T getEntry(int position) = 0;
	virtual void clear() = 0;
	virtual void setEntry(int position, const T& new_entry) = 0;
	virtual int length() const = 0;
	
};

#include "LinkedList.hpp"

#endif
