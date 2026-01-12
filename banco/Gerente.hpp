#pragma once
#include "Funcionario.hpp"
#include "Cpf.hpp"
#include "Autenticavel.hpp"
#include "DiaDaSemana.hpp"
#include <string>

class Gerente final : public Funcionario,public Autenticavel
{
public:
	Gerente(std::string nome, Cpf cpf, float salario,DiaDaSemana diaDoPagamento, std::string senha);
	float bonificacao() const override;
};

