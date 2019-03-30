#include "Empresa.h"
//Costrutor padrão
empresa::empresa(){ num_empresas++; }
//Contrutor parametrizado
empresa::empresa(string n, int cn){
	string nome_empresa = n;
	cnpj = cn;
	num_empresas++;
}
//Métodos get
string empresa::get_nome_empresa(){ return nome_empresa; }
int empresa::get_cnpj(){ return cnpj; }
vector<funcionario> empresa::get_lista_funcionarios(){ return lista_funcionarios; }
//Métodos set
void empresa::set_nome_empresa(string nome_emp){ nome_empresa = nome_emp; }
void empresa::set_cnpj(int cnpj_m){ cnpj = cnpj_m; }
void empresa::set_lista_funcioanrios(vector<funcionario> lista_f){ lista_funcionarios = lista_f; }
//Métodos get dos atributos estáticos
int empresa::getnum_empresas(){
	return num_empresas;
}
int empresa::getnum_funcionarios(){
	return num_funcionarios;
}
/*Função sem parametros 
para adicionar funcionários,
permitindo que usários adicionem funcionários
novos às empresas.
*/
void empresa::addFuncionario(){
	string n;
	float sal;
	date d;

	funcionario f;
	cout<<"Digite os dados do novo funcionario no formato:"
	<<endl<<"<nome>"
	<<endl<<"<salario>"
	<<endl<<"<dd mm aa>"<<endl;
	cin>>f; //Esta atribuição de falores utilaza sobrecarga do operador de extração.
	cin>>d;//Esta atribuição de falores utilaza sobrecarga do operador de extração.
	f.setdata_admissao(d);
	/*O seguinte for loop, verifica se há 
	funcionários com o mesmo nome, digitado
	pelo usuário.
	*/
	for(int i=0; i < (int)lista_funcionarios.size(); i++){
		if(lista_funcionarios[i] == f){
			cout<<"Nome existente, digite outro nome: ";
			cin>>n;
			f.setnome(n);
			i=-1;
		}
	}
	/*O seguinte for loop, se o usuário
	digitou um salário válido, ou seja,
	maior que zero.
	*/
	while(f.getsalario()<1){
		cout<<"Digite o salário novamente: ";
		cin>>sal;
		f.setsalario(sal);
	}
	/*O seguinte for loop, verifica se o 
	usuário digitou uma data válida.
	*/
	while(!d.valid()){
		cout<<"data inválida, digite novamente <dd mm aa>: ";
		cin>>d;
		f.setdata_admissao(d);
	}
	/*Depois das verificações, finalmente
	o funcionário é realmente adicionado.*/
	lista_funcionarios.push_back(f);
	num_funcionarios++;
}
//Sobrecarga da função de adicionar funcionários. 
void empresa::addFuncionario(string n, int s, int dd, int mm, int aa){
	date d(dd, mm, aa);
	lista_funcionarios.resize(lista_funcionarios.size()+1);
	lista_funcionarios[lista_funcionarios.size()-1].setnome(n);
	lista_funcionarios[lista_funcionarios.size()-1].setsalario(s);
	lista_funcionarios[lista_funcionarios.size()-1].setdata_admissao(d);
	num_funcionarios++;
}
//A seguinte função, dá um aumento aos funcionários da empresa.
void empresa::aumento(float x){
	float aumento;
	while(x<=0){
		cout<<"Digite a porcentagem de aumento novamente: ";
		cin>>x;
	}

	for(int i = 0; i < (int)lista_funcionarios.size(); i++){
		aumento = lista_funcionarios[i].getsalario()*x;
		lista_funcionarios[i].setsalario(lista_funcionarios[i].getsalario() + aumento);
	}
}
//Função que exibe a média de funcionarios/empresas.
void empresa::media(){
	cout<<"funcionarios = "<<num_funcionarios<<endl; 
	cout<<"empresas = "<<num_empresas<<endl;
	float m = (float)num_funcionarios/(float)num_empresas;
	cout<<"A média de funcionarios por empresas é: "<<m<<endl;
}
//Listagem de todos os funcionários da empresa
void empresa::listar_func(){
	cout<<endl<<"Lista de funcionarios:"<<endl;
	for(int i = 0; i < (int)lista_funcionarios.size(); i++){
		cout<<lista_funcionarios[i];//Utilza sobrecarga de operador de inserção.
		cout<<endl;
	}
}
//Lista funcionários em tempo de experiência.
void empresa::listar_func_exp(){
	time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);
    //As 3 linhas seguintes extraem a data atual do sistema.
	date data_atual;
	data_atual.set_day(tm.tm_mday);
	data_atual.set_month(tm.tm_mon + 1);
	data_atual.set_year(tm.tm_year + 1900);
	cout<<endl<<"Lista de funcionarios em período de experiência:"<<endl;
	//O seguinte for, calcula e imprime funcionários em experiência.
	for(int i = 0; i < (int)lista_funcionarios.size(); i++){
		
		if((data_atual - lista_funcionarios[i].getdata_admissao()) < 91 && (data_atual - lista_funcionarios[i].getdata_admissao())>0){
			cout<<lista_funcionarios[i]; 
			cout<<endl;
		}
	}
}
//Sobrecarga do operador de inserção.
ostream& operator<<(ostream& o, empresa const &e){
	o<<"Nome da empresa: "<<e.nome_empresa<<endl;
	o<<"CNPJ: "<<e.cnpj<<endl;
	return o;
}

empresa::~empresa(){
	int tam = lista_funcionarios.size();

	for(int i=0; i<tam; i++){
		lista_funcionarios.pop_back();
	}
}