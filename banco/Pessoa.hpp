#pragma once
#include <string>
#include <iostream>

template<typename Documento>
class Pessoa
{
protected:
	Documento documento;
	std::string nome;

public:
	Pessoa(std::string nome,Documento documento):
		nome(nome), 
		documento(documento)
	{
		verificaTamanhoDoNome();
	}
	std::string recuperaNome() const 
	{
		return nome;
	}

private:
	void verificaTamanhoDoNome()
	{
		if(nome.size() < 5)
		{
			std::cout << "Nome muito curto" << std::endl;
			exit(1);
		}
	}

};