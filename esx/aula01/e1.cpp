#include <iostream>
using namespace std;

int main(){
	unsigned long int i, j, k;
	unsigned long int numAmigo1=0;
	unsigned long int numAmigo2=0;

	for(i=1; i<=7000; i++){
		for(j=1; j<i; j++){
			if(i%j==0){
				numAmigo1+=j;
			}
		}
		if(numAmigo1>i){
			for(k=1; k<numAmigo1; k++){
				if(numAmigo1%k==0){
					numAmigo2+=k;
				}
			}
		}
		if(numAmigo2 == i){
			cout<<"("<<i<<", "<<numAmigo1<<")"<<endl;
		}
		numAmigo1 = 0;
		numAmigo2 = 0;

	}


	return 0;	
}
