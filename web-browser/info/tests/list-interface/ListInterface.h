#ifndef ListInterface_h
#define ListInterface_h

template <typename T>
class ListInterface {
public:
    virtual bool isEmpty() const = 0;
    virtual int getLength() const = 0;
    virtual bool insert(int new_position, const T& new_entry) = 0;
    virtual bool remove(int position) = 0;
    virtual void clear() = 0;
    virtual T getEntry(int position) const = 0;
    virtual T replace(int position, const T& new_entry) = 0;
    virtual ~ListInterface() { }
    
private:

};


/*
 the purpose of an interface
 this is what lists are capabile of doing, but I wont force you to do it in any particular way
 you have a list of expected functionality
 but i never say how or why you are required to build it
 the linked list is the implementation of a list interface
 the indexing will begin with one
 if you want to access a value or add a new value, you are allowed to do any position within the list
 the reason why we only care about the front, is because you can only go in one direction from the structure of the nodes
 we start at the front and traverse through the linked list
 
 
 
 the reason as to why you do not write constructors in the interface
 - constructors are intrinsically tied to an actual implementation
 - constructors get called when you create an object of a type
 - when you create an object of a type, that object needs to have member variables initialized
 - and when we are talking about member variables we 
 */




#endif
