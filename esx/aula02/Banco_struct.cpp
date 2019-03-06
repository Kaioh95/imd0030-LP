#include<iostream>
using namespace std;
typedef struct{
	int conta;
	int agencia;
	float saldo;
}dados;

void saque(dados *sal){
	float valorSaque;
	cout<<"Digite o valor de saque"<<endl;
	cin>>valorSaque;
	if(valorSaque < sal->saldo){
		sal->saldo -= valorSaque;
	}
	else{
		cout<<"Saldo Insuficiente."<<endl;
	}
}

void deposito(dados *sal){
	float valorDeposito;
	cout<<"Digite o valor de deposito."<<endl;
	cin>>valorDeposito;
	if(valorDeposito > 0){
		sal->saldo += valorDeposito;
	}
	else{
		cout<<"Operação inválida"<<endl;
	}
}

int main(){
	dados clientes[3];
	for(int i=0; i<3; i++){
		cout<<"Digite o numero da conta, agencia e saldo iniciais."<<endl;
		cin>>clientes[i].conta>>clientes[i].agencia>>clientes[i].saldo;
	}
	int op;
	int nome;
	do{
		cout<<"Digite seu nome."<<endl;
		cin>>nome;
		cout<<"Digite (1)Ver Salso, (2)Saque, (3)Deposito"<<endl;
		cin>>op;
		if(op==1){
			cout<<"Seu Saldo é de R$"<<clientes[nome].saldo<<endl;
		}
		else if(op==2){
			saque(&clientes[nome]);

		}
		else if(op==3){
			deposito(&clientes[nome]);
		}

	}while(op);


	return 0;
}