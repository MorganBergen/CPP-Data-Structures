#include "Node.h"
#include "LinkedList.h"

#include <iostream>
#include <string>
#include <stdexcept>

int main() {
	
	LinkedList<std::string>* list = nullptr;
	list = new LinkedList<std::string>();
	
	std::cout << list -> getLength() << " is the length of the linked list" << std::endl;
	
	try {
		std::cout << list -> getEntry(2);
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	
	try {
		list -> insert(1, "first");
		list -> insert(2, "second");
		list -> insert(3, "third");
	} catch (std::exception& e)  {
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << list -> getLength() << " is the length of the linked list" << std::endl;
	
	list -> printList();

	try {
		list -> remove(1);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	
	list -> printList();

	std::cout << std::endl;
	
	return(0);
}


