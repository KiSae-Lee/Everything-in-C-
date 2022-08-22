cmake_minimum_required (VERSION 3.8) # Define CMake version.

project ("CppExamples") # Define project name.

# == CPP STANDARD OPTIONS
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# -- SUBDIRECTORIES
add_subdirectory("#1 CPP Overview") # Check CMakeLists.txt in this subdirectory.
add_subdirectory("#2 Compiler")
add_subdirectory("#3 Linker")
add_subdirectory("#4.1 Variables")