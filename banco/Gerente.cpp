#include "Gerente.hpp"
#include "Cpf.hpp"
#include <string> 

Gerente::Gerente(std::string nome, Cpf cpf, float salario,DiaDaSemana diaDoPagamento ,std::string senha) :
    Funcionario(nome, cpf, salario,diaDoPagamento),
    Autenticavel(senha)
{
}

float Gerente::bonificacao() const
{
    return recuperaSalario() * 0.5;
}