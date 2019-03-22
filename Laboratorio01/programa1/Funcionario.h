#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>
#include <iostream>
#include "date.h"

using namespace std;

class funcionario{
private:
	string nome;
	float salario;
	date data_admissao;
public:
	funcionario();

	string getnome();
	void setnome(string n);

	float getsalario();
	void setsalario(float s);

	date getdata_admissao();
	void setdata_admissao(date d);

	friend istream& operator>>(istream &i, funcionario &f);
	friend ostream& operator<<(ostream &o, funcionario &f);

	bool operator==(funcionario const &f);

	~funcionario();
};
#endif