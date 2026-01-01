#include "Cpf.hpp"

Cpf::Cpf(std::string numero) : 
	numero(numero)
{
	verificacpf(numero);
}

void Cpf::verificacpf(std::string numero)
{
	if (numero.size() != 14)
	{
		std::cout << "CPF invalido !!!" << std::endl;
		exit(1);
	}
}

std::string Cpf::recuperaNumero() const
{
	return numero;
}