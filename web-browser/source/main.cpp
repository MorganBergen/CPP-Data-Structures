#include "Executive.h"
#include "Browser.h"
#include <string>
#include <stdexcept>
#include <iostream>
#include <stdexcept>

int main() {
	
	Executive object;
	
	try {
		object.fileIO("input.txt");
	} catch (std::runtime_error& e) {
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}
