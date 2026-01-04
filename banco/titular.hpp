#pragma once
#include <string>
#include "Pessoa.hpp"
#include "Cpf.hpp"

class Titular : public Pessoa
{
public:
	Titular(std::string nome, Cpf cpf);

};