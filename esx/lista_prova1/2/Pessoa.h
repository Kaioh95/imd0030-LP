#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>

using namespace std;

class pessoa{
private:
	string nome;
	int idade;
	float altura;
public:
	pessoa();
	pessoa(string nome_m, int idade_m, float altura_m);

	string getnome();
	int getidade();
	float getaltura();

	void setnome(string nome_m);
	void setidade(int idade_m);
	void setaltura(float altura_m);

	friend ostream& operator<<(ostream &o, pessoa const &p);
	
	~pessoa();
};
#endif