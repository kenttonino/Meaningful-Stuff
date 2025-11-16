# Add compile flags.
CXX = g++
CXXFLAGS = -I/usr/local/include/opencv4 -std=c++11

# Link OpenCV libraries.
OPENCV = $(shell pkg-config --cflags --libs opencv4)

# Compile all source files.
SRC = $(wildcard ./src/*.cpp ./src/**/*.cpp)
BIN = ./bin/main

build:
	$(CXX) -o $(BIN) $(SRC) $(CXXFLAGS) $(OPENCV)

debug: build
	gdb $(BIN)

start: build
	$(BIN)
