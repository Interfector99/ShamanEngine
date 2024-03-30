#ifndef PHYSICSMODULE_HPP
#define PHYSICSMODULE_HPP

#include <iostream>

class PhysicsModule
{
private:
public:
	PhysicsModule();
	~PhysicsModule();
	void init();
	void updatePhysics();
	void shutdown();
};

#endif // PHYSICSMODULE_HPP