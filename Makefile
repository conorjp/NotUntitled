CXX = g++
CXXFLAGS	= -std=c++11 -ggdb -Wall
CXXTESTFLAGS = --coverage

all: math_utils

clean:
	rm math_utils.o test test.gc*

test: math_utils.o test.cpp
	$(CXX) $(CXXFLAGS) test.cpp math_utils.o -o test

math_utils: math_utils.o test.cpp
	$(CXX) $(CXXFLAGS) $(CXXTESTFLAGS) test.cpp math_utils.o -o test

math_utils.o: math_utils.cpp
	$(CXX) $(CXXFLAGS) -c math_utils.cpp
