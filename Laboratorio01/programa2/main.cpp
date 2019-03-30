//Autor: Kaio Henrique de Sousa
#include <iostream>
#include "Jogo_de_dados.h"

using namespace std;

int main(int argc, char* const argv[]){
	if(argc < 3){
		cerr<<endl<<argv[0]<<" Uso: <Número de jogadores> <Número alvo>"<<endl;
		return 0;
	}
	jogo Game;
	Game.run(atoi(argv[1]), atoi(argv[2]));

	return 0;
}