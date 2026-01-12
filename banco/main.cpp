#include <iostream>
#include <string>
#include "conta.hpp"
#include "Titular.hpp"
#include "Cpf.hpp"
#include "Funcionario.hpp"
#include "contaPoupanca.hpp"
#include "contaCorrente.hpp"
#include "Caixa.hpp"
#include "Gerente.hpp"
#include "Autenticavel.hpp"
#include "DiaDaSemana.hpp"

using namespace std;

void realizaSaque(Conta& conta, float valorASacar)
{
	conta.sacar(valorASacar);
}
void fazLogin(Autenticavel& alguem, string senha)
{
	if(alguem.autentica(senha))
	{
		cout << "Login realizado com sucesso" << endl;
		return;
	}
	cout << "Falha no login" << endl;
}

int main()
{
	contaCorrente umaConta("123", Titular("Bruno", Cpf("123.456.789-10"),"123123"));

	umaConta.depositar(1000);
	umaConta.sacar(200);

	cout << "saldo na primeira conta e de: " << umaConta.recuperaSaldo() << endl;

	cout << "O Numero De Contas E De: " << Conta::recuperaNumeroDeContas() << endl;

	Gerente umGerente(
		"Ana dias", 
		Cpf("000.000.000-00"),
		5000, 
		DiaDaSemana::Domingo, 
		"1234567"
	);

}