cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCES "src/*.cpp")

# Add source files
add_executable(${PROJECT_NAME} ${SOURCES})

# Include directories
include_directories(include)