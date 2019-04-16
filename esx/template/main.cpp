#include <iostream>
#include "Conjunto.cpp"

int main (int argv, char const *argc[]){
	conjunto<int> A;
	conjunto<int> B;
	conjunto<int> C;

	B.add(1); B.add(2); B.add(3); B.add(4); B.add(5); B.add(6); B.add(7);
	C.add(4); C.add(5); C.add(6); C.add(7); C.add(8); C.add(9); C.add(10);

    for(int i = 0; i<10; ++i)
		A.add(i);
	cout<<A;

	conjunto<int> S = B-C;
	cout<<S;

    cout << "\n\nProgram ends successfully!" <<endl;
}