#include <iostream>
#include <string>
#include "conta.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"

using namespace std;

int main()
{
	Titular ("Bruno",Cpf("123.456.789-10"));
	Conta umaConta("123", Titular("Bruno", Cpf("123.456.789-10")));

	umaConta.depositar(1000);

	cout << "saldo na primeira conta e de: " << umaConta.recuperaSaldo() << endl;

	cout << "O Numero De Contas E De: " << Conta::recuperaNumeroDeContas() << endl;

}