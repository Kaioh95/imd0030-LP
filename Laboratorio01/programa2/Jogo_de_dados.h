//Autor: Kaio Henrique de Sousa
#ifndef JOGO_DE_DADOS_H
#define JOGO_DE_DADOS_H

#include <vector>
#include <iostream>
#include <random>
#include "Jogador.h"

using namespace std;

class jogo{
private:
	vector<jogador> jogadores;
	vector<jogador> list_jogadores_fora;
	int dado1;
	int dado2;
	random_device rd;
	default_random_engine gen;
	uniform_int_distribution<> dis;

public:
	jogo();

	int run(int num_de_jogadores, int num_alvo);
	
	~jogo();
};


#endif