#pragma once
#include <string>

class Conta {
private:
	std::string numero;
	std::string nomeTitular;
	std::string cpfTitular;
	float saldo;

public:
	Conta(std::string numeroTitular,std::string nomeTitular, std::string cpfTitular);
	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	float recuperaSaldo() const;
	std::string recuperaNomeTitular() const;
	std::string recuperaCpfTitular() const;
	std::string recuperaNumero() const;
};