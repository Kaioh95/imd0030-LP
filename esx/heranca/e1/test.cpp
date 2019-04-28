#include <iostream>
#include "Produto.h"
#include "Bebida.h"
#include "Fruta.h"
#include "Roupa.h"

int main(int argc, char* agrv[]){
	Bebida b(001, "Cachaca", 25.5, 8.5);
	Roupa r(101, "Camisa", 40, "T-shirt", 'F', 'P');
	Fruta f(100, "uva", 5, "25/04/2019", "01/05/2019");

	Produto p(100, "limao", 5);

	cout<< b <<endl<< r <<endl<< f <<endl<< p <<endl;

	cout<<"r+b :"<< r+b <<" r-b:"<< r-b <<endl;
	cout<<(f==p)<<endl;

	return 0;
}