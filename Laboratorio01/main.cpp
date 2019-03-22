#include <iostream>
#include "Empresa.h"

using namespace std;

int main(void){
	int i=-1;
	empresa emp;
	while(i){
		cout<<"digite (1) para add func ou (2) para dar aumento ou (3) média, (4) listar: ";
		cin>>i;
		if(i==1)
			emp.addFuncionario();
		else if(i==2){
			emp.aumento(0.10);
		}
		else if(i==3){
			emp.media();
		}
		else if(i==4){
			emp.listar_func();
		}
	}

}







/*
{
    time_t mytime;
    mytime = time(NULL);
    std::cout<<(ctime(&mytime))<<__DATE__<<std::endl;

    return 0;
}
#include <stdio.h>
#include <time.h>

int main(void) {
    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);
    printf("Data: %d/%d/%d/\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
}
*/