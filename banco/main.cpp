#include <iostream>
#include <string>
#include "conta.hpp"

using namespace std;

int main()
{
	Conta umaConta;
	Conta umaOutraConta;

	umaConta.depositar(1000);
	umaOutraConta.depositar(500);

	umaConta.definirONomeTitular("joao da silva");

	cout << "saldo na primeira conta e de: " << umaConta.recuperaSaldo() << endl << "saldo em umaOutraConta e de: " << umaOutraConta.recuperaSaldo() << endl;
	return 0;
}