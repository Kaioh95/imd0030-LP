#include "Pessoa.h"
pessoa::pessoa(): nome(""), idade(0), altura(0.0){}
pessoa::pessoa(string nome_m, int idade_m, float altura_m){
	nome = nome_m;
	idade = idade_m;
	altura = altura_m;
}

string pessoa::getnome(){
	return nome;
}
int pessoa::getidade(){
	return idade;
}
float pessoa::getaltura(){
	return altura;
}

void pessoa::setnome(string nome_m){
	nome = nome_m;
}
void pessoa::setidade(int idade_m){
	idade = idade_m;
}
void pessoa::setaltura(float altura_m){
	altura = altura_m;
}

ostream& operator<<(ostream &o, pessoa const &p){
	o<<"Nome: "<<p.nome<<endl
	<<"Idade: "<<p.idade<<endl
	<<"Altura: "<<p.altura<<endl;
	return o;
}

pessoa::~pessoa(){}