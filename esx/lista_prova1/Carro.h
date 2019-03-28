#ifndef CARRO_H
#define CARRO_H

#include <iostream>
using namespace std;

class Carro{
private:
	string modelo;
	int ano;
	float tanque;
	float consumo;
	float QtdeCombustivel;
	float Autonomia;
	float DistanciaPercorrida;
public:
	Carro();
	Carro(string m, int a, float t, float con);

	void abastecer(float litros);
	void mover(float km);

	float getQtdeCombustivel();
	float getAutonomia();
	float getDistanciaPercorrida();

	friend ostream& operator<<(ostream& o, Carro const &c);

	~Carro();
};
#endif