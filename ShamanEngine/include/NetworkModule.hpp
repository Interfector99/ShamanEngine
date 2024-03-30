#ifndef NETWORKMODULE_HPP
#define NETWORKMODULE_HPP

#include <iostream>

class NetworkModule
{
private:
public:
	NetworkModule();
	~NetworkModule();
	void init();
	void handleNetwork();
	void shutdown();
};

#endif // NETWORKMODULE_HPP