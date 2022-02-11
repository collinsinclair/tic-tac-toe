CXX = g++
CXXFLAGS = -std=c++17 -Wall 

all: main

clean:
	rm *.o main

main: TicTacToe.o
	$(CXX) $(CXXFLAGS) main.cpp TicTacToe.o -o main

TicTacToe.o:
	$(CXX) $(CXXFLAGS) -c TicTacToe.cpp