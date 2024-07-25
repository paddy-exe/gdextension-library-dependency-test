cmake_minimum_required(VERSION 3.10)

# important for building for both archs on Mac
# will be ignored on non-Apple platforms
set(CMAKE_OSX_ARCHITECTURES "arm64;x86_64" CACHE STRING "" FORCE)

# name the project SumLib
project(SumLib)

# set the C++ standard and if it should be required by the compiler to build
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set a variable for all source files
set(SOURCE_FILES
    sumlib.cpp
)

# set a variable for all header files
set(HEADER_FILES
    sumlib.h
)

# set where the cmake should output the compiled library
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib/)

# add
add_library(SumLib SHARED ${HEADER_FILES} ${SOURCE_FILES})