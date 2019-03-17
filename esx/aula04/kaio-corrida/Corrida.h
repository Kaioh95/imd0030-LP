#ifndef CORRIDA_H
#define CORRIDA_H
#include "Sapos.h"
#include <vector>
#include <cstdlib>

class corrida{
private:
	std::vector<Sapo> sapos;
public:
	corrida();
	void addSapo();
	void run();
	~corrida();
};

#endif