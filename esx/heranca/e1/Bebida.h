#ifndef BEBIDA_H
#define BEBIDA_H

#include "Produto.h"
using namespace std;

class Bebida : public Produto{
private:
	float teor_alcoolico;
public:
	Bebida();
	Bebida(int cod, string desc, float p, float ta);
	~Bebida();

	friend ostream& operator<<(ostream& o, const Bebida b);

};
#endif