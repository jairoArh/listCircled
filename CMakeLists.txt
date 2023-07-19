cmake_minimum_required(VERSION 3.24)
project(listCircle)

set(CMAKE_CXX_STANDARD 17)

add_executable(listCircle main.cpp Node.h CircledList.cpp CircledList.h NumberOrdinal.cpp NumberOrdinal.h)
