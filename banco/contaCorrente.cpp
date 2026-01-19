#include "contaCorrente.hpp"
#include <iostream>

contaCorrente::contaCorrente(std::string numero, Titular titular) :
	Conta(numero, titular)
{
}

void contaCorrente::transferePara(Conta& destino,float valor) 
{
	sacar(valor);
	destino.depositar(valor);
}

void contaCorrente::operator+=(contaCorrente& contaOrigem) 
{
	contaOrigem.transferePara(*this, contaOrigem.recuperaSaldo()/2);
}

float contaCorrente::taxaDeSaque() const
{
	return 0.05;
}