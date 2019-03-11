PROG = ex
CC = g++
CPPFLAGS = -Wall -std=c++11
OBJS = Corrida_de_sapos.o Sapos.o

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

Corrida_de_sapos.o:
	$(CC) $(CPPFLAGS) -c Corrida_de_sapos.cpp

Sapos.o: Sapos.h
	$(CC) $(CPPFLAGS) -c Sapos.cpp

clean:
	rm -f core $(PROG) $(OBJS)
