#include <iostream>
#include <string>
#include "conta.hpp"

using namespace std;

int main()
{
	Conta umaConta("123","Bruno","123.456.789-10");

	umaConta.depositar(1000);

	cout << "saldo na primeira conta e de: " << umaConta.recuperaNomeTitular() << endl;
	return 0;
}