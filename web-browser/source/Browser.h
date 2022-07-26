#ifndef Browser_h
#define Browser_h

#include <string>
#include <stdio.h>
#include "ListInterface.h"

class Browser
{
private:
	ListInterface<std::string> *history_list;
	int current;
	std::string m_file;

public:
	Browser();
	~Browser();
	void navigateTo(std::string url);
	void print();
	void back();
	void forward();
};

#endif

/*
 oldest
 ===========
 1.
 2.
 3.
 4.
 5.		    <= current
 ===========
 newest
 */
