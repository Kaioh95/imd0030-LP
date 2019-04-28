#include "Produto.h"

Produto::Produto(){}
Produto::Produto(int cod, string desc, float p): 
cod_barras(cod), descricao(desc), preco(p){
	
}
Produto::~Produto(){}

ostream& operator<<(ostream& o, const Produto& p){
	o<<"Código de Barras: "<< p.cod_barras << endl;
	o<<"Descrição: "<< p.descricao << endl;
	o<<"Preço: "<< p.preco << endl;
	return o;
}

float Produto::operator+(const Produto& p){
	return preco + p.preco;
}
float Produto::operator-(const Produto& p){
	return preco - p.preco;
}
bool Produto::operator==(const Produto& p){
	return (cod_barras == p.cod_barras);
}