#include "Sapos.h"
#include <iostream>

Sapo::Sapo(){}

float Sapo::getDistancia_total(){
	return distancia_total;
}

float Sapo::getPulo_MAX(){
	return pulo_MAX;
}

void Sapo::setidentificador(std::string id){
	identificador = id;
}
std::string Sapo::getidentificador(){
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


void Sapo::pular(){
	std::random_device rd;
	std::default_random_engine gen(rd());
	std::uniform_real_distribution<> dis(1, pulo_MAX);
	float pulo = dis(gen);
	std::cout<<"O sapo pulou "<<pulo<<" metros"<<std::endl;
	setdistancia_percorrida(pulo);
	setqtd_pulos_dados(1);
}

std::ostream& operator<<(std::ostream &o, Sapo &s){
	o<<"O sapo vencedor foi "<<s.identificador<<std::endl;
	o<<"Quantidade de pulos: "<<s.qtd_pulos_dados<<std::endl;
	o<<"Distância percorrida: "<<s.distancia_percorrida<<std::endl;
	return o;
}

Sapo::~Sapo(){}