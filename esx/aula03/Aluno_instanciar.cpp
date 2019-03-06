#include <iostream>
#include "Alunos.h"
using namespace std;

int main(){
	Aluno alunos[2];
	string nome;
	int matricula;
	float nota;
	int codigoDaTurma;
	for(int i=0 ; i<2; i++){
		cout<<"Digite o nome, matricula, nota e codigo da turma do aluno "<<i<<endl;
		cin>>nome>>matricula>>nota>>codigoDaTurma;
		alunos[i].setnome(nome);
		alunos[i].setmatricula(matricula);
		alunos[i].setnota(nota);
		alunos[i].setcodigoDaTurma(codigoDaTurma);
		if(alunos[i].getnota()>=6){
			alunos[i].setsituacao("Aprovado");
		}
		else{
			alunos[i].setsituacao("Reprovado");
		}
	}
	cout<<endl<<endl;
	for(int i=0 ; i<2; i++){
		cout<<"Dados do aluno "<<i<<endl;
		cout<<alunos[i].getnome()<<endl;
		cout<<alunos[i].getmatricula()<<endl;
		cout<<alunos[i].getnota()<<endl;
		cout<<alunos[i].getcodigoDaTurma()<<endl;
		cout<<alunos[i].getsituacao()<<endl;	
	}

	return 0;
}