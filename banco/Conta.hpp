#pragma once
#include <string>
#include <variant>
#include <iostream>
#include "Titular.hpp"

class Conta
{
private:
    static int numeroDeContas;

public:
    static int recuperaNumeroDeContas();

private:
    std::string numero;
    Titular titular;

protected:
    float saldo;

public:
    enum resultadoSaque
    {
        valorNegativo, SaldoInsulficiente
    };

    Conta(std::string numeroTitular, Titular titular);
    virtual ~Conta();
    virtual float taxaDeSaque() const = 0;
    std::variant<resultadoSaque, float> sacar(float valorASacar);
    void depositar(float valorADepositar);
    void operator+=(float valorADepositar);
    float recuperaSaldo() const;
    std::string recuperaNumero() const;
    bool operator<(Conta& outro) const;
    friend std::ostream& operator<<(std::ostream& cout, const Conta& conta);
};