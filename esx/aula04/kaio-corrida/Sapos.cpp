#include "Sapos.h"
#include <random>
#include <iostream>

Sapo::Sapo():rd(), gen(rd()), dis(1, Sapo::getPulo_MAX()){
}

float Sapo::getDistancia_total(){
	return distancia_total;
}

float Sapo::getPulo_MAX(){
	return pulo_MAX;
}

void Sapo::setidentificador(int id){
	identificador = id;
}
int Sapo::getidentificador(){
	return identificador;
}

void Sapo::setdistancia_percorrida(float dis){
	distancia_percorrida += dis;
}
float Sapo::getdistancia_percorrida(){
	return distancia_percorrida;
}

void Sapo::setqtd_pulos_dados(int qtd){
	qtd_pulos_dados += qtd;
}
int Sapo::getqtd_pulos_dados(){
	return qtd_pulos_dados;
}

//pulo e destrutor de Sapo
void Sapo::pular(){
	float pulo = std::round(dis(gen));
	std::cout<<"O sapo pulou "<<pulo<<" metros"<<std::endl;
	setdistancia_percorrida(pulo);
	setqtd_pulos_dados(1);
}

Sapo::~Sapo(){

}