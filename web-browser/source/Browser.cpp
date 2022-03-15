#include "Browser.h"
#include "LinkedList.h"
#include "ListInterface.h"
#include <stdexcept>
#include <iomanip>
#include <string>

Browser::Browser() {
	history_list = new LinkedList<std::string>();
	current = 0;
}

Browser::~Browser() {
	history_list -> ~ListInterface<std::string>();
}

void Browser::navigateTo(std::string url) {
	
	int insertion;
	
	if (current == history_list -> length()) {
		insertion = history_list -> length();
	} else {
		insertion = history_list -> length() - current;
	}
	
	try {
		
		if (history_list -> length() == 0) {
			history_list -> insert(insertion + 1, url);
			current = insertion + 1;
		} else if (history_list -> length() == current) {
			history_list -> insert(insertion + 1, url);
			current = insertion + 1;
		} else {
			for (int i = history_list -> length(); i > current; i--) {
				history_list -> remove(i);
			}
			current++;
			history_list -> insert(current, url);
			
		}
		
		
	} catch (std::runtime_error& e) {
		std::cerr << e.what() << std::endl;
	}
}

void Browser::print() {
	
	std::cout << "\nOldest\n===========\n";
	try {
		for (int i = 1; i <= history_list -> length(); i++) {
			if (i == current) {
				std::cout << history_list -> getEntry(i);
				
				std::cout << "\t\t" << "<== current" << std::endl;
			} else {
				std::cout << history_list -> getEntry(i) << std::endl;
			}
		}
		
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "===========\nNewest" << std::endl;
	
}

void Browser::forward() {
	
	if (current == history_list -> length()) {
		
	} else if (current > history_list -> length() || current < 0) {
		std::cerr << "error. invalid current #\n";
		std::cout << "length of list: " << history_list -> length() << std::endl;
		std::cout << "current: " << current << std::endl;
	} else {
		current++;
	}
}

void Browser::back() {
	
	if (current == 0) {
		
	} else if (current > history_list -> length() || current < 0) {
		std::cerr << "error. invalid current #\n";
		std::cout << "length of list: " << history_list -> length() << std::endl;
		std::cout << "current: " << current << std::endl;
	} else {
		current--;
	}
}
