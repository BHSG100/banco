#pragma once
#include <string>
#include "titular.hpp"

class Conta {
private:
	static int numeroDeContas;

public:
	static int recuperaNumeroDeContas();

private:
	std::string numero;
	titular titular;
	float saldo;

public:
	Conta(std::string numeroTitular,titular titular);
	~Conta();
	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	float recuperaSaldo() const;
	std::string recuperaNomeTitular() const;
	std::string recuperaCpfTitular() const;
	std::string recuperaNumero() const;
private:
	void verificaTamanhoDoNome();
};