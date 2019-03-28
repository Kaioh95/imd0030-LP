#ifndef CONTROLE_H
#define CONTROLE_H

#include <iostream>
#include "Empresa.h"

using namespace std;

class controle{
private:
	vector<empresa> empresas;

public:
	controle();

	void set_empresas(vector<empresa> e);
	vector<empresa> get_empresas();

	void operacoes();

	~controle();
};

#endif