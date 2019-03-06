#include <iostream>
#include <cmath>
using namespace std;

int fatorial(const int n);
int primalidade(const int n, int i);
int primo(const int n);
int maior_primo_anterior(int valor);

int fatorial(const int n){
	//Calcula recursivamente o fatorial de n
	if(n!=1){
		return n * fatorial(n-1);
	}
	else return 1;
}
int primalidade(const int n, int i){
	//Testa recursivamente os divisores impares de i ate a raiz
	//quadrada do N
	if(n%i!=0 && i<sqrt(n))
		return primalidade(n, i+2);
	else if(n%i==0)
		return primo(n-1);
	else
		return n;
}

int primo(const int n){
	//testa se é divisível por 2 executa a funcao primalidade()
	//para testar os divisores impares de 3 ate raiz quadrada do N
	if(n%2==0)
		return primalidade(n-1, 3);
	return primalidade(n, 3);
}

int maior_primo_anterior(int valor){
	//Busca recursiva pelo maior valor primo anterior a valor
	if(valor != 0){
		return primo(valor-1);
	}
	else 
		return 0;
}

int main(int argc, char const *argv[]){
	int x = 5;
	//imprime: X =5 (5! = 120) => 113
	cout<<"X= "<<x<<"("<< x <<"! = "<<fatorial(x)<<") =>"
	<<maior_primo_anterior(fatorial(x))<<endl;

	x = 3;
	// Imprime: X =3 (3! = 6) => 5
	cout << "X = " << x << "(" << x << "! = " <<fatorial(x)<< 
	") => "<<maior_primo_anterior(fatorial(x))<<endl;

	x = 9;
	// Imprime: X =9 (9! = 362880) => 362867
	cout << "X = " << x << "(" << x << "! = " <<fatorial(x)<<
	 ") => "<< maior_primo_anterior(fatorial(x)) <<endl;

	return 0;
}