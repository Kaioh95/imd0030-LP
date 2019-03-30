#include "Jogo_de_dados.h"

jogo::jogo(){}

int jogo::run(int num_de_jogadores, int num_alvo){
	random_device rd;
	default_random_engine gen(rd());
	uniform_int_distribution<> dis(1, 6);

	jogadores.resize(num_de_jogadores);
	//Criação dos jogadores.
	for(int i = 0; i < (int)jogadores.size(); i++){
		jogadores[i].set_id(i);
	}

	int acao_do_jogador;
	for(int i=0; i < (int)jogadores.size(); i++){
		//A 2 linhas abaixo, perguntam a ação que o jogador deseja tomar.
		cout<<endl<<"JOGADOR "<<jogadores[i].get_id()<<", digite (1)se deseja jogar ou (0)se deseja parar: ";
		cin>>acao_do_jogador;
		//Caso o ele(a) queira jogar, os dados são jogados e os pontos são agregados.
		if(acao_do_jogador == 1){
			cout<<endl<<"Jogador: "<<jogadores[i].get_id()<<endl;
			dado1 = dis(gen);
			dado2 = dis(gen);
			cout<<"Dado 1 = "<<dado1<<endl;
			cout<<"Dado 2 = "<<dado2<<endl;
			jogadores[i].set_pontos_agregados(dado1+dado2);
			//Verifica se o jogador atingiu os pontos alvo.
			if(jogadores[i].get_pontos_agregados() == num_alvo){
				cout<<"O jogador vencedor foi: "<<endl;
				cout<<jogadores[i]<<endl;
				return 1;
			}
			//Verfica se ele(a) ultrapassou os pontos alvo e apaga o jogador do jogo.
			else if(jogadores[i].get_pontos_agregados() > num_alvo){
				cout<<"O jogador "<<jogadores[i].get_id()<<", estourou!"<<endl;
				jogadores.erase(jogadores.begin()+i);
				i -= 1;
			}
		}
		//Caso o jogador não queira jogar ele se torna um jogador inativo.
		else if(acao_do_jogador == 0){
			list_jogadores_fora.push_back(jogadores[i]);
			jogadores.erase(jogadores.begin()+i);
			i -= 1;
		}
		//Verfica se há apenas um jogador restante e o declara vencedor.
		if(jogadores.size() == 1 && list_jogadores_fora.empty()){
			cout<<"O jogador vencedor foi: "<<endl;
			cout<<jogadores[0]<<endl;
			return 0;
		}
		//Verifca se todos os jogadores optaram por parar e declara o vencedor.
		if(!list_jogadores_fora.empty() && jogadores.empty()){
			int vencedor;
			int pontos = 0;

			for(int j=0; j<(int)list_jogadores_fora.size(); j++){
				if(list_jogadores_fora[j].get_pontos_agregados() > pontos){
					pontos = list_jogadores_fora[j].get_pontos_agregados();
					vencedor = j;
				}
			}

			cout<<"O jogador vencedor foi: "<<endl;
			cout<<list_jogadores_fora[vencedor]<<endl;
			return 1;
		}
		//Declara fim da rodada e vencedor da mesma.
		if (i >= (int)jogadores.size()-1){
			int vencedor_rodada;
			int pts = 0;
			cout<<"----------------------FIM DA RODADA----------------------"<<endl; 

			for(int j=0; j<(int)jogadores.size(); j++){
				cout<<endl<<jogadores[j]<<endl;
				if(jogadores[j].get_pontos_agregados() > pts){
					pts = jogadores[j].get_pontos_agregados();
					vencedor_rodada = jogadores[j].get_id();
				}
			}
			for(int j=0; j<(int)list_jogadores_fora.size(); j++){
				cout<<endl<<list_jogadores_fora[j]<<endl;
				if(list_jogadores_fora[j].get_pontos_agregados() > pts){
					pts = list_jogadores_fora[j].get_pontos_agregados();
					vencedor_rodada = list_jogadores_fora[j].get_id();
				}
			}

			cout<<endl<<"O jogador vencedor da rodada foi: "<<vencedor_rodada<<endl;
			cout<<"Com "<<pts<<" pontos agregados."<<endl;
			i = -1;
		}
	}
	return 1;
}
//Destrutor que dele os vectors da classe Jogo_de_dados.
jogo::~jogo(){
	int tam = jogadores.size();
	for(int i=0; i<tam; i++){
		jogadores.pop_back();
	}

	tam = list_jogadores_fora.size();
	for(int i=0; i<tam; i++){
		list_jogadores_fora.pop_back();
	}
}