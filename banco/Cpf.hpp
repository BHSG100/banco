#pragma once
#include <iostream>
#include <string>

class Cpf
{
private:
	std::string numero;

public:
	Cpf(std::string numero);
	void verificacpf(std::string numero);
	std::string recuperaNumero() const;

};
