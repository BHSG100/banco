#include <iostream>
#include <string>
#include "Conta.hpp"
#include "Titular.hpp"

int Conta::numeroDeContas = 0;

Conta::Conta(std::string numero,Titular titular) :
	numero(numero), 
	titular(titular),
	saldo(0)
{
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

std::string Conta::recuperaNumero() const
{
	return numero;
}


int Conta::recuperaNumeroDeContas()
{
    return numeroDeContas;
}