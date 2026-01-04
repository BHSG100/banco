#pragma once
#include <string>
#include "Conta.hpp"

class contaPoupanca final : public Conta
{
public:
	contaPoupanca(std::string numero, Titular titular);
	~contaPoupanca();
	float taxaDeSaque() const override;
};