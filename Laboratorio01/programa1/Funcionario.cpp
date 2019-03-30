#include "Funcionario.h"

using namespace std;

funcionario::funcionario(){}

//Métodos get
string funcionario::getnome(){
	return nome;
}
float funcionario::getsalario(){
	return salario;
}
date funcionario::getdata_admissao(){
	return data_admissao;
}

//Métodos set
void funcionario::setnome(string n){
	nome = n;
}
void funcionario::setsalario(float s){
	salario = s;
}
void funcionario::setdata_admissao(date d){
	data_admissao = d;
}

//Sobrecarga de operador de extração.
istream& operator>>(istream &i, funcionario &f){
	i>>f.nome>>f.salario;
	return i;
}
//Sobrecarga de operador de inserção.
ostream& operator<<(ostream &o, funcionario &f){
	o<<"Nome: "<<f.nome<<endl;
	o<<"Salário: "<<f.salario<<endl;
	cout<<"Data de admissao:"<<f.data_admissao<<endl;
	return o;
}

//Sobrecarga de operador de comparação
bool funcionario::operator==(funcionario const &f){
	if(nome.compare(f.nome) == 0){
		return true;
	}
	else
		return false;
}

funcionario::~funcionario(){}