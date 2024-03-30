#ifndef GRAPHICSMODULE_HPP
#define GRAPHICSMODULE_HPP

#include <iostream>

class GraphicsModule
{
private:
public:
	GraphicsModule();
	~GraphicsModule();
	void init();
	void draw();
	void shutdown();
};

#endif // GRAPHICSMODULE_HPP