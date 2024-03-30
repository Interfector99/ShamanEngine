#ifndef INPUTMODULE_HPP
#define INPUTMODULE_HPP

#include <iostream>

class InputModule
{
private:
public:
	InputModule();
	~InputModule();
	void init();
	void processInput();
	void shutdown();
};

#endif // INPUTMODULE_HP