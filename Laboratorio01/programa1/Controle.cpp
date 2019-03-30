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
//Fução parametrizada que utiliza um vector para adicionar empresas
void controle::addEmpresa(string n, int cnp){
	empresas.resize(empresas.size()+1);
	empresas[empresas.size()-1].set_nome_empresa(n);
	empresas[empresas.size()-1].set_cnpj(cnp);
}
void controle::operacoes(){
	int i=-1, j=0;
	//Empresas padrão para texte
	addEmpresa("Emp0", 111);
	addEmpresa("Emp1", 112);
	addEmpresa("Emp2", 113);
	empresas[0].addFuncionario("Maria", 2000, 01, 03, 2019);
	empresas[1].addFuncionario("Maria", 2000, 05, 01, 2019);
	empresas[2].addFuncionario("Maria", 2000, 20, 12, 2018);

	/*
	O seguinte while loop permite navegar pelas
	empresas criadas. Uma vez que estiver em uma
	das empresas, é possível adicionar funcionários,
	dar aumentos aos funcionários, listar todos funcioanrios,
	Lista funcionarios em experiência e mostrar e média de
	funcionários por empresa.
	*/
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

/*Este destrutor apaga cada elemento do 
vector de empresas, pois o mesmo é criado dinâmicamente*/
controle::~controle(){
	int tam = empresas.size();

	for(int i=0; i<tam; i++){
		empresas.pop_back();
	}
}