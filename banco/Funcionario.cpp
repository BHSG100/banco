#include "Funcionario.hpp"

Funcionario::Funcionario(std::string nome, Cpf cpf, float salario, DiaDaSemana diaDoPagamanto):
	Pessoa(nome, cpf),
	salario(salario),
	diaDoPagamento(diaDoPagamanto)
{
}

std::string Funcionario::recuperaNome() const
{
	return nome;
}

float Funcionario::recuperaSalario() const
{
	return salario;
}