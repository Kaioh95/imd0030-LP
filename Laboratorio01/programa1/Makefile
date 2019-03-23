#C++ APPLICATION FOR "ex"
PROG = ex
CC = g++
CPPFLAGS = -Wall -std=c++11
OBJS = main.o Controle.o Empresa.o Funcionario.o date.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o:
	$(CC) $(CPPFLAGS) -c main.cpp

Controle.o: Controle.h
	$(CC) $(CPPFLAGS) -c Controle.cpp

Empresa.o: Empresa.h
	$(CC) $(CPPFLAGS) -c Empresa.cpp

Funcionario.o: Funcionario.h
	$(CC) $(CPPFLAGS) -c Funcionario.cpp

date.o : date.h
	$(CC) $(CPPFLAGS) -c date.cpp

clean:
	rm -f core $(PROG) $(OBJS)