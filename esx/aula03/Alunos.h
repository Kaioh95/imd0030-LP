#include <iostream>
#ifndef ALUNOS_H_INCLUDE
#define ALUNOS_H_INCLUDE

class Aluno{
private:
	std::string nome;
	int matricula;
	float nota;
	int codigoDaTurma;
	std::string situacao;
public:
	std::string getnome();
	void setnome(std::string nome_m);
	int getmatricula();
	void setmatricula(int matricula_m);
	float getnota();
	void setnota(float nota_m);
	int getcodigoDaTurma();
	void setcodigoDaTurma(int cod_m);
	std::string getsituacao();
	void setsituacao(std::string situacao_w);
};
#endif