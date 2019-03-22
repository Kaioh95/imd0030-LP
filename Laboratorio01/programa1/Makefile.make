PROG = ex
CC = g++
CPPFLAGS = -Wall -std=c++11 -I/include
OBJS = main.o Corrida.o Empresa.o Funcionario.o date.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)

main.o:
	$(CC) $(CPPFLAGS) -c main.cpp

Controle.o: Controle.h
	$(CC) $(CPPFLAGS) -c Controle.cpp

Empresa.o: Empresa.h
	$(CC) $(OBJS) -c Emrpesa.cpp

Funcioanrio.o: Funcionario.h
	$(CC) $(OBJS) -c Funcionario.cpp

date.o : date.h
	$(CC) $(OBJS) -c date.cpp

clean:
	rm -f core $(PROG) $(OBJS)