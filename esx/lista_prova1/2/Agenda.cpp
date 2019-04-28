#include "Agenda.h"

using namespace std;

void Agenda::insereContato(string nome_, int idade_, float altura_){
	if(m_total_cantatos<100)
		m_total_cantatos++; 

	for(int i = 0; i<max_contatos; i++){
		if(m_contatos[i].getnome().compare("") == 0){
			cout<<"set: "<<nome_<<endl;
			m_contatos[i].setnome(nome_);
			m_contatos[i].setidade(idade_);
			m_contatos[i].setaltura(altura_);
			return;
		}
	}
}
	
void Agenda::removeContato(string nome_){
	for(int i = 0; i<max_contatos; i++){
		if(m_contatos[i].getnome().compare(nome_) == 0){
			if(m_total_cantatos>0)
				m_total_cantatos--;

			m_contatos[i].setnome("");
			m_contatos[i].setidade(0);
			m_contatos[i].setaltura(0.0);
		}
	}
}

int Agenda::buscaContato(string nome_){
	for(int i = 0; i<max_contatos; i++){
		if(m_contatos[i].getnome().compare(nome_) == 0){
			return i;
		}
	}
	return -1;
}

void Agenda::listaContato(char letra){
	char* cstr;

	for(int i = 0; i<max_contatos; i++){
		cstr = new char[m_contatos[i].getnome().length()+1];
		strcpy(cstr, m_contatos[i].getnome().c_str());

		if(cstr[0] == letra){
			cout<<m_contatos[i]<<endl;
		}
	}
	delete[] cstr;
}

void Agenda::imprimeContato(int i){
	cout<<m_contatos[i]<<endl;
}