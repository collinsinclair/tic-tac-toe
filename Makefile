OBJS	= main.o tictactoe.o
SOURCE	= main.cpp tictactoe.cpp
HEADER	= tictactoe.h
OUT	= tictactoe
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 =

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

main.o: main.cpp
	$(CC) $(FLAGS) main.cpp -std=c++14

tictactoe.o: tictactoe.cpp
	$(CC) $(FLAGS) tictactoe.cpp -std=c++14


clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	./$(OUT)
