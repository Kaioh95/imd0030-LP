#ifndef SAPOS_H
#define SAPOS_H
#include <random>
#include <iostream>

class Sapo{
private:
	int identificador;
	float distancia_percorrida = 0;
	int qtd_pulos_dados = 0;
	std::random_device rd;
	std::default_random_engine gen;
	std::uniform_real_distribution<> dis;
public:
	Sapo();

	static float distancia_total;
	static float getDistancia_total();

	static float pulo_MAX;
	static float getPulo_MAX();

	void setidentificador(int id);
	int getidentificador();

	void setdistancia_percorrida(float dis);
	float getdistancia_percorrida();

	void setqtd_pulos_dados(int pulos);
	int getqtd_pulos_dados();

	void pular();
	friend std::ostream& operator<<(std::ostream &o, Sapo &s);
	~Sapo();

};






#endif