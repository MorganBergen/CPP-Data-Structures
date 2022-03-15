
//Executive.h

#include <iostream>
#include <string>
#include "BoardGame.h"

#ifndef EXECUTIVE_H
#define EXECUTIVE_H

class Executive {
	
private:
	int count;
	BoardGame *allGames;
	
public:
	Executive(std::string fileNames);
	void run();     //smenu options
	void print();   //each option
	void option1();
	void option2();
	void option3();
	void option4();
	void option5();
	
	~Executive();
};

#endif
