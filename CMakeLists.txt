# CMakeList.txt : CMake project for sfml_actions_test, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("sfml_actions_test")

add_subdirectory("SFML")

# Add source to this project's executable.
add_executable (sfml_actions_test "sfml_actions_test.cpp")

# find_package(SFML 2 COMPONENTS network audio graphics window system REQUIRED)
target_link_libraries(sfml_actions_test PUBLIC sfml-graphics sfml-network sfml-audio sfml-window sfml-system)

# TODO: Add tests and install targets if needed.
