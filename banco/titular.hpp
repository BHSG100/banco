#pragma once
#include <string>
#include "Cpf.hpp"

class Titular
{
private:
	std::string nome;
	Cpf cpf;
public:
	Titular(std::string nome, Cpf cpf);
	std::string recuperaNomeTitular() const;
	std::string recuperaCpfTitular() const;
private:
	void verificaTamanhoDoNome();
};