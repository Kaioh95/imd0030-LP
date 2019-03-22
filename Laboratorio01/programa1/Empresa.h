#ifndef EMPRESA_H
#define EMPRESA_H
#include <string>
#include <vector>
#include <iostream>
#include <time.h>
#include "Funcionario.h"


using namespace std;

class empresa{
private:
	string nome_empresa;
	int cnpj;
	vector<funcionario> lista_funcionarios;

public:
	empresa();
	empresa(string n, int c, vector<funcionario> lf);

	string get_nome_empresa();
	int get_cnpj();
	vector<funcionario> get_lista_funcionarios();

	void set_nome_empresa(string nome_emp);
	void set_cnpj(int cnpj_m);
	void set_lista_funcioanrios(vector<funcionario> lista_f);

	static int num_empresas;
	static  int getnum_empresas();

	static int num_funcionarios;
	static int getnum_funcionarios();

	void addFuncionario();
	void aumento(float x);
	void media();
	void listar_func();
	void listar_func_exp();

	friend ostream& operator<<(ostream& o, empresa const &e);

	~empresa();
};
#endif