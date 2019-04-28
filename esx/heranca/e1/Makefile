mensagem = "./ex para executar"
#executável
prog = ex

cc = g++
cppflags = -Wall -std=c++11
objs = test.o Roupa.o Fruta.o Bebida.o Produto.o

$(prog):$(objs)
	$(cc) $(objs) -o $(prog)

all: $(prog)
	@echoo $(mensagem)

test.o:
	$(cc) $(cppflags) -c test.cpp

Fruta.o:Fruta.h
	$(cc) $(cppflags) -c Fruta.cpp

Bebida.o:Bebida.h
	$(cc) $(cppflags) -c Bebida.cpp

Roupa.o:Roupa.h
	$(cc) $(cppflags) -c Roupa.cpp

Produto.o:Produto.h
	$(cc) $(cppflags) -c Produto.cpp

clean:
	rm -f core $(objs) $(prog)
