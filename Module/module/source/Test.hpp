#pragma once

#include <Merope_api.h>
#include <Spatial.hpp>
#include <Godot.hpp>

class Test : public godot::Spatial
{
GODOT_CLASS(Test, godot::Spatial)
public:
	static void _register_methods();

	Test() = default;

	void _init();
};
