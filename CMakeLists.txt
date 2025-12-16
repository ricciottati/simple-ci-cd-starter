
cmake_minimum_required(VERSION 3.16)
project(SimpleApp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(app src/main.cpp)
enable_testing()
add_test(NAME run COMMAND app)
