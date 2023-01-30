#ifndef VOO_H
#define VOO_H

#define CAPACIDADE_MAXIMA 100

#include <string>
#include <iostream>
#include "../Pessoa/pessoa.h"
#include "../DataHorario/datahorario.h"

class Voo
{
private:
    mutable int p_Numero;
    mutable DataHorario p_DataHorario;
    Pessoa* poltronas[CAPACIDADE_MAXIMA];
    static int contadorPessoa;

public:
    Voo(const int& numero = 0, const DataHorario& dataHorario = DataHorario());

    int getNumero() const;

    void setNumero(const int&) const;

    int proximoLivre() const;

    bool verifica(const int&);

    bool ocupa(const int&, Pessoa&);

    bool desocupa(const int&);

    int vagas() const;

    void imprime();
};
#endif
