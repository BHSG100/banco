#include "Titular.hpp"
#include <iostream>
#include <string>

Titular::Titular(std::string nome, Cpf cpf, std::string senha):
	Pessoa(nome, cpf),
	Autenticavel(senha)
{
}