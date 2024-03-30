#ifndef SHAMANENGINE_HPP
#define SHAMANENGINE_HPP

#include <iostream>
#include <memory>

class GraphicsModule;
class InputModule;
class PhysicsModule;
class AudioModule;
class NetworkModule;
class ScriptingModule;

class ShamanEngine
{
private:
	std::shared_ptr<GraphicsModule> p_GraphicsModule;
	std::shared_ptr<InputModule> p_InputModule;
	std::shared_ptr<PhysicsModule> p_PhysicsModule;
	std::shared_ptr<AudioModule> p_AudioModule;
	std::shared_ptr<NetworkModule> p_NetworkModule;
	std::shared_ptr<ScriptingModule> p_ScriptingModule;
public:
	ShamanEngine();
	~ShamanEngine();

	void init();
	void run();
	void shutdown();
};

#endif // SHAMANENGINE_HPP