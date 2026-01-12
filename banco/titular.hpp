#pragma once
#include "Pessoa.hpp"
#include "Cpf.hpp"
#include "Autenticavel.hpp"
#include <string>

class Titular : public Pessoa, Autenticavel
{
public:
	Titular(std::string nome, Cpf cpf, std::string senha);

};