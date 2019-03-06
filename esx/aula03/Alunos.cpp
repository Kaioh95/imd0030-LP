#include "Alunos.h"
#include <iostream>


std::string Aluno::getnome(){
	return nome;
}
void Aluno::setnome(std::string nome_m){
	nome = nome_m;
}
int Aluno::getmatricula(){
	return matricula;
}
void Aluno::setmatricula(int matricula_m){
	matricula = matricula_m;
}
float Aluno::getnota(){
	return nota;
}
void Aluno::setnota(float nota_m){
	nota = nota_m;
}
int Aluno::getcodigoDaTurma(){
	return codigoDaTurma;
}
void Aluno::setcodigoDaTurma(int cod_m){
	codigoDaTurma = cod_m;
}
std::string Aluno::getsituacao(){
	return situacao;
}
void Aluno::setsituacao(std::string situacao_w){
	situacao = situacao_w;
}