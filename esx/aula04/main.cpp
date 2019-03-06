#include <iostream>
#include <cstdlib>
#include "dado.h"

int main(int argc, char const *argv[]){
	if(argc < 3){
		std::cerr<< argv[0] << "Uso: <QTD_dados>" << "<QTd_lados>" <<std::endl;
		return 0;
	}

	dado meu_dado(atoi(argv[2]));
	for (int i=0;i<atoi(argv[1]);++i) {
		std::cout << meu_dado.jogar() << std::endl;
	}
	return 0;
}