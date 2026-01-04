#pragma once
#include <string>
#include "conta.hpp"
#include "Titular.hpp"

class contaCorrente final : public Conta
{
public:
	contaCorrente(std::string numero, Titular titular);
	float taxaDeSaque() const override;
	void transferePara(Conta& destino, float valor);

};

