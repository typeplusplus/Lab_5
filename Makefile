CC = g++
RM = rm -f

CFLAGS = -c -Wall -std=c++11
LFLAGS = 


all: main

main: main.o money.o printmefirst.o
	$(CC) main.o money.o printmefirst.o -o main $(LFLAGS)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

class.o: money.cpp money.h
	$(CC) $(CFLAGS) money.cpp

printmefirst.o: printmefirst.cpp printmefirst.h
	$(CC) $(CFLAGS) printmefirst.cpp


clean:
	$(RM) *.o main
	
run:
	./main
