#include "Bebida.h"

Bebida::Bebida(){}
Bebida::Bebida(int cod, string desc, float p, 
	float ta): Produto(cod, desc, p), teor_alcoolico(ta){}

Bebida::~Bebida(){}

ostream& operator<<(ostream& o, const Bebida b){
	o<<"Código de Barras: "<< b.cod_barras << endl;
	o<<"Descrição: "<< b.descricao << endl;
	o<<"Preço: "<< b.preco << endl;
	o<<"Teor Acoólico: " << b.teor_alcoolico << endl;
	return o;
}