#include "Titular.hpp"
#include <iostream>


Titular::Titular(std::string nome, Cpf cpf): 
	nome(nome),
	cpf(cpf)
{
	verificaTamanhoDoNome();
}

std::string Titular::recuperaNomeTitular() const
{
	return nome;
}

void Titular::verificaTamanhoDoNome()
{
	if (nome.size() < 5)
	{
		std::cout << "Nome do titular muito curto !!!" << std::endl;
		exit(1);
	}
}