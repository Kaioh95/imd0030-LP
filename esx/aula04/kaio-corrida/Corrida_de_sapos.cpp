#include <iostream>
#include "Sapos.h"
#include <cstdlib>
using namespace std;
float Sapo::distancia_total = 50;
float Sapo::pulo_MAX = 10;

int main(int argc, char* argv[]){
	if(argc != 2 || atoi(argv[1])<2){
		cerr<<argv[0]<<"Uso: <QTD_sapos>"<<endl;
		return 0;
	}

	const int QTD_sapos = atoi(argv[1]);

	Sapo sapos[QTD_sapos];

	for(int i=0; i<QTD_sapos; i++){
		sapos[i].setidentificador(i+1);
	}

	for(int i = 0; i<QTD_sapos; i++){
		cout<<"Sapo "<<sapos[i].getidentificador()<<endl;
		sapos[i].pular();
		cout<<endl;
		if(sapos[i].getdistancia_percorrida() >= Sapo::getDistancia_total()){
			cout<<"O sapo vencedor foi o #"<<sapos[i].getidentificador()<<endl;
			cout<<"Quantidade de pulos: "<<sapos[i].getqtd_pulos_dados()<<endl;
			cout<<"Distância percorrida: "<<sapos[i].getdistancia_percorrida()<<endl;
			return 0;
			break;
		}
		
		if(i == QTD_sapos-1) i = -1;
	}

	return 0;
}