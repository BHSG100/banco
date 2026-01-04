#pragma once
#include <string>
#include "Conta.hpp"

class contaPoupanca : public Conta
{
public:
	contaPoupanca(std::string numero, Titular titular);
	void sacar(float valorASacar);
};

