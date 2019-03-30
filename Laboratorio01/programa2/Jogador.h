//Autor: Kaio Henrique de Sousa
#ifndef JOGADOR_H
#define JOGADOR_H
#include <iostream>

using namespace std;

class jogador{
private:
	int id;
	int pontos_agregados;
public:
	jogador();

	void set_id(int id_m);
	void set_pontos_agregados(int pa_m);

	int get_id();
	int get_pontos_agregados();

	friend ostream& operator<<(ostream& o, jogador const& j);

	~jogador();
};

#endif