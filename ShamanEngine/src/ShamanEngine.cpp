#include "ShamanEngine.hpp"

#include "GraphicsModule.hpp"
#include "InputModule.hpp"
#include "PhysicsModule.hpp"
#include "AudioModule.hpp"
#include "ScriptingModule.hpp"
#include "NetworkModule.hpp"

ShamanEngine::ShamanEngine()
{
	std::cout << "Hello Shamans." << std::endl;
}

ShamanEngine::~ShamanEngine()
{
	std::cout << "Goodbye Shamans." << std::endl;
}

void ShamanEngine::init()
{
	// Initialize modules
	p_GraphicsModule = std::make_shared<GraphicsModule>();
	p_InputModule = std::make_shared<InputModule>();
	p_PhysicsModule = std::make_shared<PhysicsModule>();
	p_AudioModule = std::make_shared<AudioModule>();
	p_ScriptingModule = std::make_shared<ScriptingModule>();
	p_NetworkModule = std::make_shared<NetworkModule>();
}

void ShamanEngine::run()
{
	std::cout << "Running." << std::endl;
}

void ShamanEngine::shutdown()
{
	
}