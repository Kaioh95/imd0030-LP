#include "Jogador.h"

using namespace std;

jogador::jogador(){ pontos_agregados = 0;}


void jogador::set_id(int id_m){ 
	id = id_m;
}
void jogador::set_pontos_agregados(int pa_m){ 
	pontos_agregados += pa_m;
}


int jogador::get_id(){
	return id;
}
int jogador::get_pontos_agregados(){
	return pontos_agregados;
}


ostream& operator<<(ostream& o, jogador const& j){
	o<<"Jogador: "<<j.id<<endl<<"Pontos agregados: "<<j.pontos_agregados;
	return o;
}

jogador::~jogador(){}