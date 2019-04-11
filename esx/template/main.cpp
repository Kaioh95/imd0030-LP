#include <iostream>
#include "Conjunto.h"

int main (int argv, char const *argc[]){
	conjunto<int> A;

    for(int i = 0; i<10; ++i)
		A.add(i);
	A.imprimir();

    cout << "\n\nProgram ends successfully!" <<endl;
}