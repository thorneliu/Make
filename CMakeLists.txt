# Specify the version
cmake_minimum_required(VERSION 2.6)

# Name the project
project(helloWorld)

# Use aux_source_directory to include all the source file in dir
aux_source_directory(. DIR_SRCS)

# This tells Cmake to helloWorld.cpp and name it helloWorld
add_executable(helloWorld ${DIR_SRCS})

# simply equal to : g++ -o helloWorld helloWorld.cpp foo.cpp
