#ifndef FRUTA_H
#define FRUTA_H

#include "Produto.h"
using namespace std;

class Fruta : public Produto{
private:
	string fabricacao;
	string validade;
public:
	Fruta();
	Fruta(int cod, string desc, float p, string f, string v);
	~Fruta();

	friend ostream& operator<<(ostream& o, const Fruta f);
};
#endif