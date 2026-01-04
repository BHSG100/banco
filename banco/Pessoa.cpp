#include "Pessoa.hpp"

Pessoa::Pessoa(std::string nome, Cpf cpf):
	nome(nome),
	cpf(cpf)
{

}
void Pessoa::verificaTamanhoDoNome()
{
	if (nome.size() < 5)
	{
		std::cout << "Nome do titular muito curto !!!" << std::endl;
		exit(1);
	}
}