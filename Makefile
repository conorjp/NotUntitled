CXX = g++

CXXFLAGS	= -std=c++11 -ggdb -Wall
CXXTESTFLAGS = --coverage

all: math_utils

clean:
	rm test test.gc* math_utils.o

test: math_utils.o test.cpp
	$(CXX) $(CXXFLAGS) test.cpp math_utils.o -o test

cov: math_utils.o test.cpp
	$(CXX) $(CXXFLAGS) $(CXXTESTFLAGS) test.cpp math_utils.o -o test

math_utils.o: math_utils.cpp
	$(CXX) $(CXXFLAGS) -c math_utils.cpp
