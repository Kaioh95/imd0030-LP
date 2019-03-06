#include <iostream>
#include "Banco.h"
using namespace std;

float banco::getsaldo(){
	return saldo;
}

void banco::setsaldo(float s){
	saldo = s;
}

void banco::deposito(){
	float valorDeposito;
	cout<<"Digite o valor de deposito: ";
	cin>>valorDeposito;
	if(valorDeposito>=0){
		setsaldo(getsaldo()+valorDeposito);
	}
	else{
		cout<<"Opereção Iválida"<<endl;
	}
}

void banco::saque(){
	float valorSaque;
	cout<<"Digite o valor de saque: ";
	cin>>valorSaque;
	if(valorSaque <= getsaldo()){
		setsaldo(getsaldo()-valorSaque);
	}
	else{
		cout<<"Saldo Inválido."<<endl;
	}
}