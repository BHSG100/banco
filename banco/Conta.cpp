#include <iostream>
#include <string>
#include "conta.hpp"

void Conta::sacar(float valorASacar)
{
	if (valorASacar < 0)
	{
		std::cout << "Não é posivel sacar um valor negativo !!!" << std::endl;
		return;
	}
	else if (valorASacar > saldo) 
	{
		std::cout << "Saldo insuficiente" << std::endl;
		return;
	}

	saldo -= valorASacar;
}

void Conta::depositar(float valorADepositar)
{
	if (valorADepositar < 0)
	{
		std::cout << "Não é posivel depositar um valor negativo !!!" << std::endl;
		return;
	}
	saldo += valorADepositar;
}

float Conta::recuperaSaldo() const 
{
	return saldo;
}

std::string Conta::recuperaCpfTitular() const
{
	return cpfTitular;
}

std::string Conta::recuperaNomeTitular() const
{
	return nomeTitular;
}

std::string Conta::recuperaNumero() const
{
	return numero;
}

Conta::Conta(std::string numero, std::string nomeTitular, std::string cpfTitular) :
	numero(numero), 
	nomeTitular(nomeTitular),
	cpfTitular(cpfTitular),
	saldo(0)
{}