#ifndef PRODUTO_H
#define PRODUTO_H

#include <iostream>

using namespace std;

class Produto{
protected:
	int cod_barras;
	string descricao;
	float preco;
public:
	Produto();
	Produto(int cod, string desc, float p);
	~Produto();

	friend ostream& operator<<(ostream& o, const Produto& p);

	float operator+(const Produto& p);
	float operator-(const Produto& p);
	bool operator==(const Produto& p);
};

#endif