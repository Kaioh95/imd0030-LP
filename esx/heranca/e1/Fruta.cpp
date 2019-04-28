#include "Fruta.h"

Fruta::Fruta(){}

Fruta::Fruta(int cod, string desc, float p, string f, string v):
	Produto(cod, desc, p), fabricacao(f), validade(v){}

Fruta::~Fruta(){}

ostream& operator<<(ostream& o, const Fruta f){
	o<<"Código de Barras: "<< f.cod_barras << endl;
	o<<"Descrição: "<< f.descricao << endl;
	o<<"Preço: "<< f.preco << endl;
	o<<"Data do lote:" << f.fabricacao << endl;
	o<<"Validade:" << f.validade << endl;
	return o;
}