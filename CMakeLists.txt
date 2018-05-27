# Specify the version
cmake_minimum_required(VERSION 2.6)

# Name the project
project(helloWorld)

# Use aux_source_directory to include all the source file in dir
aux_source_directory(. DIR_SRCS)

# Add subdirectory bar
add_subdirectory(bar)

# This tells Cmake to helloWorld.cpp and name it helloWorld
add_executable(helloWorld ${DIR_SRCS})

# Add link libs
target_link_libraries(helloWorld barLib)

# simply equals to 
# in bar/
# g++ -c bar.cpp
# ar cqs libbarLib.a bar.o
# in Make/
# g++ -o helloWorld helloWorld.cpp foo.cpp -L./bar -lbarLib
