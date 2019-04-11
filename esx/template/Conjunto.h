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

	int length();

	void imprimir();

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
	for(int i = 0; i<c.length(); i++){
		conj.push_back(c[i]);
	}
}

template<typename T>
int conjunto<T>::length(){
	return conj.size();
}

template<typename T>
void conjunto<T>::imprimir(){
	for(int i = 0; i<(int)conj.size(); ++i){
		cout<<conj[i]<<endl;
	}
}


#endif