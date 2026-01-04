#include "contaPoupanca.hpp"
#include <iostream>

contaPoupanca::contaPoupanca(std::string numero, Titular titular) :
	Conta(numero, titular) 
{
}

void contaPoupanca::sacar(float valorASacar)
{
	if (valorASacar < 0)
	{
		std::cout << "Não é posivel sacar um valor negativo !!!" << std::endl;
		return;
	}

	float tarifaSaque = valorASacar * 0.03;
	double totalSaque = valorASacar + tarifaSaque;

	if (totalSaque > saldo)
	{
		std::cout << "Saldo insuficiente" << std::endl;
		return;
	}

	saldo -= totalSaque;
}
