class banco{
private:
	float saldo;
public:
	int conta;
	int agencia;
	float getsaldo();
	void setsaldo(float s);
	void deposito();
	void saque();
};