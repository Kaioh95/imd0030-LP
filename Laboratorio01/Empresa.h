#ifndef EMPRESA_H
#define EMPRESA_H
#include <string>
#include <vector>

class empresa{
private:
	string nome_empresa;
	int cnpj;
	vector<funcionario> lista_funcionarios;

public:
	empresa();

	static int num_empresas;
	static  int getnum_empresas();

	static int num_funcionarios;
	static int getnum_funcionarios();

	void addFuncionario(string n, int sal, int data);
/*	void aumento(float x);
	void list_func_exp();
*/
	~empresa();
};
#endif