#C++ application for "ex"

PROG = ex
CC = g++
CPPFLAGS = -Wall -std=c++11
OBJS = main.o Jogador.o Jogo_de_dados.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o:
	$(CC) $(CPPFLAGS) -c main.cpp

Jogador.o: Jogador.h
	$(CC) $(CPPFLAGS) -c Jogador.cpp

Jogo_de_dados.o: Jogo_de_dados.h
	$(CC) $(CPPFLAGS) -c Jogo_de_dados.cpp

clean:
	rm -f core $(PROG) $(OBJS)