#include "Empresa.h"

empresa::empresa(){ num_empresas++; }

empresa::empresa(string n, int c, vector<funcionario> lf){
	string nome_empresa = n;
	cnpj = c;
	vector<funcionario> lista_funcionarios = lf;
	num_empresas++;
}

string empresa::get_nome_empresa(){ return nome_empresa; }
int empresa::get_cnpj(){ return cnpj; }
vector<funcionario> empresa::get_lista_funcionarios(){ return lista_funcionarios; }

void empresa::set_nome_empresa(string nome_emp){ nome_empresa = nome_emp; }
void empresa::set_cnpj(int cnpj_m){ cnpj = cnpj_m; }
void empresa::set_lista_funcioanrios(vector<funcionario> lista_f){ lista_funcionarios = lista_f; }

int empresa::getnum_empresas(){
	return num_empresas;
}
int empresa::getnum_funcionarios(){
	return num_funcionarios;
}

void empresa::addFuncionario(){
	string n;
	float sal;
	date d;

	funcionario f;
	cout<<"Digite os dados do novo funcionario no formato:"
	<<endl<<"<nome>"
	<<endl<<"<salario>"
	<<endl<<"<dd mm aa>"<<endl;
	cin>>f;
	cin>>d;
	f.setdata_admissao(d);

	for(int i=0; i < (int)lista_funcionarios.size(); i++){
		if(lista_funcionarios[i] == f){
			cout<<"Nome existente, digite outro nome: ";
			cin>>n;
			f.setnome(n);
			i=-1;
		}
	}

	while(f.getsalario()<1){
		cout<<"Digite o salário novamente: ";
		cin>>sal;
		f.setsalario(sal);
	}
	
	while(!d.valid()){
		cout<<"data inválida, digite novamente <dd mm aa>: ";
		cin>>d;
		f.setdata_admissao(d);
	}
	
	lista_funcionarios.push_back(f);
	num_funcionarios++;
}

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

void empresa::media(){
	cout<<"funcionarios = "<<num_funcionarios<<endl; 
	cout<<"empresas = "<<num_empresas<<endl;
	float m = (float)num_funcionarios/(float)num_empresas;
	cout<<"A média de funcionarios por empresas é: "<<m<<endl;
}

void empresa::listar_func(){
	cout<<endl<<"Lista de funcionarios:"<<endl;
	for(int i = 0; i < (int)lista_funcionarios.size(); i++){
		cout<<lista_funcionarios[i]; 
		cout<<endl;
	}
}

void empresa::listar_func_exp(){
	time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);

	date data_atual;
	data_atual.set_day(tm.tm_mday);
	data_atual.set_month(tm.tm_mon + 1);
	data_atual.set_year(tm.tm_year + 1900);
	cout<<endl<<"Lista de funcionarios em período de experiência:"<<endl;

	for(int i = 0; i < (int)lista_funcionarios.size(); i++){
		
		if((data_atual - lista_funcionarios[i].getdata_admissao()) < 91 && (data_atual - lista_funcionarios[i].getdata_admissao())>0){
			cout<<lista_funcionarios[i]; 
			cout<<endl;
		}
	}
}

ostream& operator<<(ostream& o, empresa const &e){
	o<<"Nome da empresa: "<<e.nome_empresa<<endl;
	o<<"CNPJ: "<<e.cnpj<<endl;
	return o;
}

empresa::~empresa(){
}