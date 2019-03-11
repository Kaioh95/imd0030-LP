#Makefile for "ex" C++ application
#Created by Kaio Henrique

PROG = ex
CC = g++
CPPFLAGS = -Wall -std=c++11
OBJS = main.o dado.o

$(PROG):$(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o:
	$(CC) $(CPPFLAGS) -c main.cpp
dado.o:dado.h
	$(CC) $(CPPFLAGS) -c dado.cpp
clean:
	rm -f core $(PROG)$(OBJS)