#ifndef EMPRESA_H
#define EMPRESA_H
#include <string>
#include <vector>

class empresa{
private:
	string nome_empresa;
	int cnpj;
	vector<funcionario> lista_funcioanrios;

public:
	empresa();

	static int num_empresas;
	static  int getnum_empresas();

	static int num_funcionarios;
	static int getnum_funcionarios();
/*
	void addFuncionario();
	void aumento(float x);
	void list_func_exp();
*/
	~empresa();
};
#endif