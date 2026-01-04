#pragma once
#include <string>
#include "Cpf.hpp"
#include "Pessoa.hpp"

class Funcionario : public Pessoa
{
private:
	float salario;
public:
	Funcionario(std::string nome, Cpf cpf, float salario);
	std::string recuperaNome() const;

};

