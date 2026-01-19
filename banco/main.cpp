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

using namespace std	;

void realizaSaque(Conta& conta, float valorASacar)
{
	auto resultado = conta.sacar(valorASacar);
	auto tipoResultado = std::get<Conta::resultadoSaque>(resultado);

	if (auto saldo = std::get_if<float>(&resultado))
	{
		cout << "O saque foi realizado com sucesso" << endl;
		cout << "O novo saldo e de: " << *saldo << endl;
		
		return;
	}
	else if (tipoResultado == Conta::valorNegativo)
	{
		cout << "Por favor insira um valor positivo" << endl;
		
		return;
	}
	else if (tipoResultado == Conta::SaldoInsulficiente)
	{
		cout << "Saldo insuficiente" << endl;
		
		return;
	}
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

ostream& operator<<(ostream& cout,const Conta& conta) 
{

	Pessoa titular = conta.titular;
	
	cout << "o saldo da conta e de: " << conta.recuperaSaldo() << endl;
	cout << "O titular da conta e: " << titular.recuperaNome() << endl;
	
	return cout;
}

void mostrasaldo(Conta& conta)
{
	cout << "O saldo da conta e de: " << conta.recuperaSaldo() << endl;
}
template<typename T>
T Menor(T a,T b)
{
	return a < b ? a : b;
}

int main()
{
	contaCorrente umaConta(
		"123",
		Titular(
			"Bruno",
			Cpf("123.456.789-10"),
			"123123")
	);
	contaPoupanca outraConta(
		"456",
		Titular(
			"Carlos", 
			Cpf("987.654.321-00"),
			"321321")
	);
		
	umaConta.depositar(1000);
	umaConta.sacar(200);
	(Conta&) umaConta += 300;
	umaConta.transferePara(outraConta, 400);

	mostrasaldo(umaConta);

	cout << "O Numero De Contas E De: " << Conta::recuperaNumeroDeContas() << endl;

	cout << Menor<Conta&>(umaConta, outraConta);

	Gerente umGerente(
		"Ana dias", 
		Cpf("000.000.000-00"),
		5000,
		DiaDaSemana::Domingo,
		"1234567"
	);

}