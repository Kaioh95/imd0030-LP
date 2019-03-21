#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

using namespace std;

class funcionario{
private:
	string nome;
	float salario;
	int data_admissao;
public:
	funcionario();

	string getnome();
	void setnome(string n);

	float getsalario();
	void setsalario(float s);

	int getdata_admissao();
	void setdata_admissao(int d);

	friend istream& operator>>(istream &i, funcionario &f);
	friend ostream& operator<<(ostream &o, funcionario &f);

	bool operator==(funcionario const &f);

	~funcionario();
};
#endif