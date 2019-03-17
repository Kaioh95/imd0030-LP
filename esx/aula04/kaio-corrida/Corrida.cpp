#include "Corrida.h"
#include "Sapos.h"
#include <iostream>
#include <cstdlib>

float Sapo::distancia_total = 50;
float Sapo::pulo_MAX = 10;

corrida::corrida(){}

void corrida::addSapo(){
	std::cout<<"Digite o nome do sapo: ";
	std::string nome;
	std::cin>>nome;
	sapos.resize(sapos.size()+1);
	sapos[sapos.size()-1].setidentificador(nome);
}
void corrida::run(){
	for(int i = 0; i < (int)sapos.size(); i++){
	std::cout<<"Sapo "<<sapos[i].getidentificador()<<std::endl;
	sapos[i].pular();
	std::cout<<std::endl;
	if(sapos[i].getdistancia_percorrida() >= Sapo::getDistancia_total()){
		std::cout<<sapos[i];
		break;
	}
	i == (int)sapos.size()-1 ? (i = -1) : 0;
	}
}
corrida::~corrida(){}