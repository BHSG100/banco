#include <iostream>
#include <string>
#include "conta.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"
#include "contaPoupanca.hpp"

using namespace std;

int main()
{
	Conta umaConta("123", Titular("Bruno", Cpf("123.456.789-10")));

	umaConta.depositar(1000);
	umaConta.sacar(200);

	cout << "saldo na primeira conta e de: " << umaConta.recuperaSaldo() << endl;

	cout << "O Numero De Contas E De: " << Conta::recuperaNumeroDeContas() << endl;

	Funcionario umfuncionario("funcionario1", Cpf("987.654.321-00"), 2500);

	cout << "O Nome Do Funcionario E: " << umfuncionario.recuperaNome() << endl;

}