#include <Merope_api.h>
#include <Godot.hpp>

#include "Test.hpp"

using namespace godot;

extern "C" void MEROPE_API godot_gdnative_init(godot_gdnative_init_options* o)
{
	Godot::gdnative_init(o);
}

extern "C" void MEROPE_API godot_gdnative_terminate(godot_gdnative_terminate_options* o)
{
	Godot::gdnative_terminate(o);
}

extern "C" void MEROPE_API godot_nativescript_init(void* handle)
{
	Godot::nativescript_init(handle);

	register_class<Test>();
}
