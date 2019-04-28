#ifndef AGENDA_H
#define AGENDA_H
#define max_contatos 100

#include <string>
#include <iostream>
#include <cstring>
#include "Pessoa.h"

using namespace std;

class Agenda{
public:
	void insereContato(string nome_, int idade_, float altura_);
	
	void removeContato(string nome_);

	int buscaContato(string nome_);

	void listaContato(char letra);

	void imprimeContato(int i);
private:
	pessoa m_contatos[max_contatos];
	int m_total_cantatos = 0;
};



#endif