#include "Executive.h"
#include "LinkedList.h"
#include "Browser.h"
#include <string>
#include <iostream>
#include <stdexcept>
#include <fstream>
#include <cstdlib>

Executive::Executive() {
	Browser history;
}

Executive::~Executive() {}

void Executive::run() {
	
	history.navigateTo("http://google.com");
	history.navigateTo("http://reddit.com");
	history.navigateTo("http://facebook.com");
	history.navigateTo("http://myspace.com");
	history.print();
	history.back();
	history.back();
	history.print();
	history.forward();
	history.forward();
	history.forward();
	history.forward();
	history.print();
	history.back();
	history.back();
	history.back();
	history.navigateTo("http://ku.edu");
	history.forward();
	history.print();
	history.back();
	history.print();
}

//must be used with try catch block
void Executive::fileIO(std::string p_file) {
	
	std::string commands;
	
	std::ifstream inStream;
	
	inStream.open(p_file);
	
	if (inStream.fail()) {
		throw (std::runtime_error("file failed to open."));
	} else if (inStream.is_open()) {
		
		while (inStream >> commands) {
			if (commands == "NAVIGATE") {
				inStream >> commands;
				history.navigateTo(commands);
			} else if (commands == "HISTORY") {
				history.print();
			} else if (commands == "BACK") {
				history.back();
			} else if (commands == "FORWARD") {
				history.forward();
			} else {
				throw (std::runtime_error("No relevant commands found."));
			}
		}
	}
	
	inStream.close();
	
}
















