#pragma once
#include <string>
#include "Cpf.hpp"
#include "DiaDaSemana.hpp"
#include "Pessoa.hpp"

class Funcionario : public Pessoa
{
private:
	float salario;
	DiaDaSemana diaDoPagamento;

public:
	Funcionario(std::string nome, Cpf cpf, float salario,DiaDaSemana diaDoPagamento);
	std::string recuperaNome() const;
	virtual float bonificacao() const = 0;
	float recuperaSalario() const;
};

