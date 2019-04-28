#include <iostream>
#include "Agenda.h"

int main(){
	Agenda a;
	cout<<"OK"<<endl;
	a.insereContato("deku", 14, 1.60);
	a.insereContato("maria", 14, 1.60);
	a.insereContato("joao", 14, 1.60);
	a.insereContato("kaio", 14, 1.69);
	
	a.imprimeContato(1);
	a.removeContato("maria");
	a.imprimeContato(1);

	int i = a.buscaContato("joao");
	cout<<i<<endl<<endl;

	a.listaContato('j');

	a.imprimeContato(3);

}