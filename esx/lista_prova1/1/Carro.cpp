#include "Carro.h"

Carro::Carro(){

}
Carro::Carro(string m, int a, float t, float con):modelo(m), ano(a), tanque(t), consumo(con){
}

void Carro::abastecer(float litros){
	QtdeCombustivel += litros;
	if(QtdeCombustivel > tanque){
		QtdeCombustivel = tanque;
	}

	Autonomia = (QtdeCombustivel-1) * consumo;
}

void Carro::mover(float km){
	if(Autonomia >= km){
		QtdeCombustivel -= km/consumo;
		DistanciaPercorrida += km;
		Autonomia = (QtdeCombustivel-1) * consumo;
	}
	else{
		cout<<"Combustivel insuficiente para mover"<<endl;
	}
}

float Carro::getQtdeCombustivel(){
	return QtdeCombustivel;
}
float Carro::getAutonomia(){
	return Autonomia;
}
float Carro::getDistanciaPercorrida(){
	return DistanciaPercorrida;
}

ostream& operator<<(ostream& o, Carro const& c){
	o<<"Modelo = "<<c.modelo<<endl
	<<"Ano ="<<c.ano<<endl
	<<"Tanque = "<<c.tanque<<endl;
	return o;
}

Carro::~Carro(){}