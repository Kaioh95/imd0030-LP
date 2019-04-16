#ifndef CONJUNTO_H
#define CONJUNTO_H
#include <iostream>
#include <vector>

using namespace std;

template<typename T>
class conjunto{
private:
	vector<T> conj;
public:
	conjunto();
	conjunto(const conjunto& c);
	~conjunto();
	T getconj();

	void add(T t);

	void add(conjunto& c);

	int Total()const;

	template<typename t>
	friend ostream& operator<<(ostream& o, const conjunto<t>& c);

	T operator[](int indice)const;

	conjunto<T> operator+(conjunto& c)const;

	conjunto<T> operator*(conjunto& c)const;

	conjunto<T> operator/(conjunto& c)const;

	conjunto<T> operator-(conjunto& c)const;
};

template<typename T>
conjunto<T>::conjunto(){}

template<typename T>
conjunto<T>::conjunto(const conjunto& c): conj(c.conj){}

template<typename T>
conjunto<T>::~conjunto(){ conj.clear(); }

template<typename T>
T conjunto<T>::getconj(){
	return conj;
}

template<typename T>
void conjunto<T>::add(T t){
	conj.push_back(t);
}

template<typename T>
void conjunto<T>::add(conjunto& c){
	for(int i = 0; i<c.Total(); i++){
		conj.push_back(c[i]);
	}
}

template<typename T>
int conjunto<T>::Total()const{
	return conj.size();
}

template<typename t>
ostream& operator<<(ostream& o, const conjunto<t>& c){
	for(int i = 0; i<(int)c.conj.size(); ++i){
		o<<c.conj[i]<<" ";
	}
	o<<endl;
	return o;
}

template<typename T>
T conjunto<T>::operator[](int indice)const{
	return conj[indice];
}

template<typename T>
conjunto<T> conjunto<T>::operator+(conjunto& c)const{
	conjunto<T> aux;
	int tam = conj.size();
	int tam_c = c.conj.size();
	aux.add(c);

	int j = 0;
	for(int i=0; i<tam; i++){

		while(j < tam_c && conj[i] != c[j]){
			j++;
		}
		if(j == tam_c){
			aux.add(conj[i]);
		}
		j = 0;
	}
	return aux;
}


template<typename T>
conjunto<T> conjunto<T>::operator*(conjunto& c)const{
	conjunto<T> aux;
	int tam = conj.size();
	int tam_c = c.conj.size();

	int j = 0;
	for(int i=0; i<tam; i++){

		while(j < tam_c){
			if(conj[i] == c[j]){
				aux.add(conj[i]);
			}
			j++;
		}

		j = 0;
	}
	return aux;
}

template<typename T>
conjunto<T> conjunto<T>::operator/(conjunto& c)const{
	conjunto<T> aux;
	int tam = conj.size();
	int tam_c = c.conj.size();

	int j = 0;
	for(int i=0; i<tam; i++){
		aux.add(conj[i]);
		while(j < tam_c){
			if(conj[i] == c[j]){
				aux.conj.pop_back();
			}
			j++;
		}
		j = 0;
	}
	return aux;
}

template<typename T>
conjunto<T> conjunto<T>::operator-(conjunto& c)const{
	conjunto<T> aux;
	int tam = conj.size();
	int tam_c = c.conj.size();

	int j = 0;
	for(int i=0; i<tam; i++){
		aux.add(conj[i]);
		while(j < tam_c){
			if(conj[i] == c[j]){
				aux.conj.pop_back();
			}
			j++;
		}
		j = 0;
	}

	j = 0;
	for(int i=0; i<tam_c; i++){
		aux.add(c[i]);
		while(j < tam){
			if(c[i] == conj[j]){
				aux.conj.pop_back();
			}
			j++;
		}
		j = 0;
	}

	return aux;
}



#endif