#include <iostream>
#include <string>
#include "conta.hpp"

int Conta::numeroDeContas = 0;

Conta::Conta(std::string numero,titular titular) :
	numero(numero), 
	titular(titular),
	saldo(0)
{
	verificaTamanhoDoNome();
	numeroDeContas++;
}

Conta::~Conta() 
{
	numeroDeContas--;
}

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


int Conta::recuperaNumeroDeContas()
{
    return numeroDeContas;
}

void Conta::verificaTamanhoDoNome()
{
	if (nomeTitular.size() < 5)
	{
		std::cout << "Nome do titular muito curto !!!" << std::endl;
		exit(1);
	}
}