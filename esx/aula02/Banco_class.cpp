#include <iostream>
#include "Banco.h"
using namespace std;

int main(){
	banco clientes[2];
	int cont, agen;
	float sal;
	for(int i=0; i<2; i++){
		cout<<"Digite o número da conta, agencia e saldo de "<<i<<endl;
		cin>>cont>>agen>>sal;
		clientes[i].conta = cont;
		clientes[i].agencia = agen;
		clientes[i].setsaldo(sal);
	}

	int op;
	int nome;
	do{
		cout<<"Digite seu nome."<<endl;
		cin>>nome;
		cout<<"Digite (1)Ver Salso, (2)Saque, (3)Deposito, (0)Sair:"<<endl;
		cin>>op;
		if(op==1){
			cout<<"Seu Saldo é de R$"<<clientes[nome].getsaldo()<<endl;
		}
		else if(op==2){
			clientes[nome].saque();

		}
		else if(op==3){
			clientes[nome].deposito();
		}

	}while(op);


	return 0;
}