#include "Funcionario.h"
#include <iostream>

funcionario::funcioanrio(){}

string getnome(){
	return nome;
}
void funcionario::setnome(string n){
	nome = n;
}

float funcionario::getsalario(){
	return salario;
}
void funcionario::setsalario(float s){
	salario = s;
}

int funcionario::getdata_admissao(){
	return data_admissao;
}
void funcionario::getdata_admissao(int d){
	data_admissao = d;
}

istream& operator>>(istream &i, funcionario &f){
	i>>f.nome>>f.salario>>f.data_admissao;
	return i;
}
ostream& operator<<(ostream &o, funcionario &f){
	o<<f.nome<<f.salario<<f.data_admissao;
	return o;
}

bool operator==(funcionario const &f){
	if(nome.compare(f.nome) == 0){
		return true;
	}
	else
		return false;
}

funcioanrio::~funcionario(){}