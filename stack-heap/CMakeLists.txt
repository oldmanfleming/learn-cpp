cmake_minimum_required(VERSION 3.10)
project(stack-heap)

set(CMAKE_CXX_STANDARD 17)

# Add source files
add_executable(${PROJECT_NAME} src/main.cpp)

# Include directories
include_directories(include)