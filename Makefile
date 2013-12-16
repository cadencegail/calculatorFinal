CPP = g++-4.8
CPPFLAGS = -std=c++0x -g

CXX	 = g++-4.8

DEBUG    = -g
CXXFLAGS = $(shell fltk-config --cxxflags ) -std=c++11 -I.
LDFLAGS  = $(shell fltk-config --ldflags )

OBJS = numButton.o stack.o opButton.o enterButton.o dropButton.o

.o: 		$@.cpp $@.h
	$(CPP) $(CPPFLAGS) -c $@.cpp

calc:	calc.cpp $(OBJS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) calc.cpp $(OBJS) -o calc