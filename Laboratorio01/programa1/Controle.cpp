#include "Controle.h"

int empresa::num_empresas = 0;
int empresa::num_funcionarios = 0;

controle::controle(){}

void controle::set_empresas(vector<empresa> e){
	empresas = e;
}
vector<empresa> controle::get_empresas(){
	return empresas;
}

void controle::operacoes(){
	int i=-1, j=0;

	empresas.resize(empresas.size()+1);
	empresas[empresas.size()-1].set_nome_empresa("emp0");
	empresas[empresas.size()-1].set_cnpj(111);

	empresas.resize(empresas.size()+1);
	empresas[empresas.size()-1].set_nome_empresa("emp1");
	empresas[empresas.size()-1].set_cnpj(112);

	empresas.resize(empresas.size()+1);
	empresas[empresas.size()-1].set_nome_empresa("emp2");
	empresas[empresas.size()-1].set_cnpj(113);


	while(j>=0){
		cout<<"______________________________________________________________"<<endl;
		for(int k=0; k < (int)empresas.size(); k++){
			cout<<"Número correspondente:("<<k<<")"<<endl;
			cout<<empresas[k];
			cout<<endl;
			cout<<endl;
		}

		cout<<"Digite um número que correnponde a uma das empresas: ";
		cin>>j;
		while(j>(int)empresas.size()-1){
			cout<<"empresa inexistente, digite novamente: ";
			cin>>j;
		}
		i = -1;
		while(i){
			cout<<"______________________________________________________________"<<endl;
			cout<<"digite:"<<endl;
			cout<<"(1) Para adicionar um funcionario"<<endl;
			cout<<"(2) Para dar aumento de 10%(padrão) a todos os funcionarios da empresa"<<endl;
			cout<<"(3) Para exibir a média de funcionarios por empresa"<<endl;
			cout<<"(4) Listar dado de todos os funcionarios"<<endl;
			cout<<"(5) Listar dado de todos os funcionarios em período de experiência"<<endl;
			cout<<"(0) Para voltar ao menu inicial"<<endl;
			cin>>i;
			if(i==1)
				empresas[j].addFuncionario();
			else if(i==2){
				empresas[j].aumento(0.10);
			}
			else if(i==3){
				empresas[j].media();
			}
			else if(i==4){
				empresas[j].listar_func();
			}
			else if(i==5){
				empresas[j].listar_func_exp();
			}
			cout<<endl;
		}
	}
}

controle::~controle(){
}