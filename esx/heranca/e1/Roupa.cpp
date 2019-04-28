#include "Roupa.h"

Roupa::Roupa(){}

Roupa::Roupa(int cod, string desc, float p,
		string m, char s, char t): 
		Produto(cod, desc, p), marca(m), sexo(s), tamanho(t){}

Roupa::~Roupa(){}

ostream& operator<<(ostream& o, const Roupa& r){
	o<<"Código de Barras: "<< r.cod_barras << endl;
	o<<"Descrição: "<< r.descricao << endl;
	o<<"Preço: "<< r.preco << endl;
	o<<"Marca: "<< r.marca << endl;
	o<<"Sexo: "<< r.sexo  << endl;
	o<<"Tamanho: "<< r.tamanho<< endl;
	return o;
}