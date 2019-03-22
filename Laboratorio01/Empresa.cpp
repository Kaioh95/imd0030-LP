#include "Empresa.h"

int empresa::num_empresas = 0;
int empresa::num_funcionarios = 0;

empresa::empresa(){num_empresas++;}

int empresa::getnum_empresas(){
	return num_empresas;
}

int empresa::getnum_funcionarios(){
	return num_funcionarios;
}

void empresa::addFuncionario(){
	//lista_funcionarios.resize(lista_funcionarios.size()+1);
	//lista_funcioanarios[listafuncionarios.size()-1].setnome(n);
	string n;
	float sal;
	date d;

	cout<<"Digite o nome do funcionario: ";
	cin>>n;
	funcionario f;
	f.setnome(n);

	for(int i=0; i < (int)lista_funcionarios.size(); i++){
		if(lista_funcionarios[i] == f){
			cout<<"Nome existente, digite outro nome: ";
			cin>>n;
			f.setnome(n);
			i=-1;
		}
	}

	cout<<"Digite o salário: ";
	cin>>sal;
	while(sal<1){
		cout<<"Digite o salário novamente: ";
		cin>>sal;
	}
	f.setsalario(sal);

	cout<<"Digite a data de admissão no formato(dd mm ano): ";
	cin>>d;
	while(!d.valid()){
		cout<<"data inválida, digite novamente: ";
		cin>>d;
	}
	f.setdata_admissao(d);
	lista_funcionarios.push_back(f);

	num_funcionarios++;
}

void empresa::aumento(float x){
	float aumento;
	for(int i = 0; i < (int)lista_funcionarios.size(); i++){
		aumento = lista_funcionarios[i].getsalario();
		aumento *= x;
		lista_funcionarios[i].setsalario(lista_funcionarios[i].getsalario() + aumento);
	}
}

void empresa::media(){
	cout<<"Média de fun/emp é: "<<num_funcionarios/num_empresas<<endl;
}

void empresa::listar_func(){
	cout<<endl<<"Lista de funcionarios:"<<endl;
	for(int i = 0; i < (int)lista_funcionarios.size(); i++){
		cout<<lista_funcionarios[i]; 
		cout<<endl;
	}
}

empresa::~empresa(){}