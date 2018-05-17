cmake_minimum_required(VERSION 2.6)
project(eigen_1)

add_executable(eigen_1 main.cpp)
find_package(Eigen3 REQUIRED)
include_directories( "/usr/include/eigen3")

install(TARGETS eigen_1 RUNTIME DESTINATION bin)
