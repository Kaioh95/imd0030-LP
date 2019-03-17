PROG = ex
CC = g++
CPPFLAGS = -Wall -std=c++11
OBJS = main.o Sapos.o Corrida.o

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o:
	$(CC) $(CPPFLAGS) -c main.cpp

Sapos.o: Sapos.h
	$(CC) $(CPPFLAGS) -c Sapos.cpp

Corrida.o: Corrida.h
	$(CC) $(CPPFLAGS) -c Corrida.cpp

clean:
	rm -f core $(PROG) $(OBJS)
