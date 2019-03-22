#include "Funcionario.h"

using namespace std;

funcionario::funcionario(){}


string funcionario::getnome(){
	return nome;
}
float funcionario::getsalario(){
	return salario;
}
date funcionario::getdata_admissao(){
	return data_admissao;
}


void funcionario::setnome(string n){
	nome = n;
}
void funcionario::setsalario(float s){
	salario = s;
}
void funcionario::setdata_admissao(date d){
	data_admissao = d;
}


istream& operator>>(istream &i, funcionario &f){
	i>>f.nome>>f.salario;
	return i;
}

ostream& operator<<(ostream &o, funcionario &f){
	o<<"Nome: "<<f.nome<<endl;
	o<<"Salário: "<<f.salario<<endl;
	cout<<"Data de admissao:"<<f.data_admissao<<endl;
	return o;
}


bool funcionario::operator==(funcionario const &f){
	if(nome.compare(f.nome) == 0){
		return true;
	}
	else
		return false;
}

funcionario::~funcionario(){}