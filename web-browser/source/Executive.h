#ifndef Executive_h
#define Executive_h

#include <stdio.h>
#include <string>
#include "ListInterface.h"
#include "Browser.h"

class Executive
{
private:
	Browser history;
	std::string m_file;

public:
	void main();
	Executive();
	~Executive();
	void run();
	void fileIO(std::string p_file);
	void modulo(int x, int mod);
};

#endif
