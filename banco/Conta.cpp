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
	std::cout << "Destrutor da conta" << std::endl;
	numeroDeContas--;
}

std::variant <Conta::resultadoSaque, float> Conta::sacar(float valorASacar)
{
	if (valorASacar < 0)
	{
		std::cout << "Não é posivel sacar um valor negativo !!!" << std::endl;
		return valorNegativo;
	}

	float tarifaSaque = valorASacar * taxaDeSaque();
	double totalSaque = valorASacar + tarifaSaque;

	if (totalSaque > saldo) 
	{
		std::cout << "Saldo insuficiente" << std::endl;
		return valorNegativo;
	}

	saldo -= totalSaque ;
	return saldo;

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

void Conta::operator+=(float valorADeposiatar)
{
	depositar(valorADeposiatar);
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

bool Conta::operator<(Conta& outro) const 
{
	return this->saldo < outro.saldo;
}