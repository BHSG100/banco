#include "Caixa.hpp"

Caixa::Caixa(std::string nome, Cpf cpf, float salario,DiaDaSemana diaDoPagamento):
	Funcionario(nome, cpf, salario, diaDoPagamento)
{
}

float Caixa::bonificacao() const
{
	return recuperaSalario() * 0.1;
}