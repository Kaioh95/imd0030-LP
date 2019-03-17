#include <iostream>
#include "Corrida.h"

using namespace std;

int main(){
	int i=-1;
	corrida game;
	while(i){
		cout<<"digite (1) para add sapo ou (2) para iniciar a corrida: ";
		cin>>i;
		if(i==1)
			game.addSapo();
		else if(i==2){
			game.run();
			i = 0;
		}
	}

	return 0;
}