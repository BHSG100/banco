#pragma once
#include <string>
#include "Titular.hpp"

class Conta {
private:
	static int numeroDeContas;

public:
	static int recuperaNumeroDeContas();

private:
	std::string numero;
	Titular titular;
	float saldo;

public:
	Conta(std::string numeroTitular,Titular titular);
	~Conta();
	void sacar(float valorASacar);
	void depositar(float valorADepositar);
	float recuperaSaldo() const;
	std::string recuperaNumero() const;
};