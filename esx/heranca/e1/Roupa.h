#ifndef ROUPA_H
#define ROUPA_H

#include "Produto.h"
using namespace std;

class Roupa :  public Produto{
private:
	string marca;
	char sexo;
	char tamanho;

public:
	Roupa();
	Roupa(int cod, string desc, float p,
		string m, char s, char t);
	~Roupa();
	friend ostream& operator<<(ostream& o, const Roupa& r);
};
#endif