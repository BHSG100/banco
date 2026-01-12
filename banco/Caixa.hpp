#pragma once
#include "Funcionario.hpp"
#include "Cpf.hpp"
#include "DiaDaSemana.hpp"
#include <string>

class Caixa final : public Funcionario
{
public:
	Caixa(std::string nome, Cpf cpf, float salario, DiaDaSemana diaDoPagamento);
	float bonificacao() const override;		
};

