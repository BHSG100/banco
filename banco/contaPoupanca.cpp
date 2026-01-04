#include "contaPoupanca.hpp"
#include <iostream>

contaPoupanca::contaPoupanca(std::string numero, Titular titular) :
	Conta(numero, titular) 
{
}

contaPoupanca::~contaPoupanca() 
{
	std::cout << "Destrutor da conta poupança" << std::endl;
}

float contaPoupanca::taxaDeSaque() const
{
	std::cout << "Chamando metodo de conta polpanca" << std::endl;
	return 0.3;
}
