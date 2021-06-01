add_library(Merope MODULE
	source/module.cpp
	source/Test.cpp
	source/Test.hpp
)

generate_export_header(Merope
	EXPORT_FILE_NAME ${CMAKE_CURRENT_BINARY_DIR}/source/Merope_api.h
	EXPORT_MACRO_NAME MEROPE_API
)

set_target_properties(Merope
	PROPERTIES ${DEFAULT_PROJECT_OPTIONS}
)

target_include_directories(Merope
	PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/source
		${CMAKE_CURRENT_BINARY_DIR}/source
	PUBLIC
		${DEFAULT_INCLUDE_DIRECTORIES}
)

target_link_libraries(Merope
	PRIVATE
		godot-cpp
	PUBLIC
		${DEFAULT_LIBRARIES}
)

target_compile_definitions(Merope
	PRIVATE
	PUBLIC
		${DEFAULT_COMPILE_DEFINITIONS}
)

target_compile_options(Merope
	PRIVATE
	PUBLIC
		${DEFAULT_COMPILE_OPTIONS}
)

target_link_libraries(Merope
	PRIVATE
	PUBLIC
		${DEFAULT_LINKER_OPTIONS}
)
