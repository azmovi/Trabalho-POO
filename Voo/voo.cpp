#include <string>
#include <iostream>
#include <cstring>
#include "voo.h"
#include "../Pessoa/pessoa.h"
#include "../DataHorario/datahorario.h"

Voo::Voo(const int& numero, const DataHorario& dataHorario)
    :p_Numero(numero), p_DataHorario(dataHorario)
{
    for(int i = 0; i < CAPACIDADE_MAXIMA; ++i)
    {
        poltronas[i] = nullptr;
    }
}

int Voo::getNumero() const
{
    return p_Numero;
}

void Voo::setNumero(const int& novoNumero) const
{
    p_Numero = novoNumero;
}

int Voo::proximoLivre() const
{
    for(int i = 1; i < CAPACIDADE_MAXIMA; ++i)
    {
        if(poltronas[i] == nullptr)
        {
            return i;
        }
    }
    return 0;
}

bool Voo::verifica(const int& posicao)
{
    return poltronas[posicao] == 0? true : false;
}

bool Voo::ocupa(const int& posicao, Pessoa& pessoa)
{
    if(poltronas[posicao] == nullptr)
    {
        poltronas[posicao] = &pessoa;
        return true;
    }
    return false;
}

bool Voo::desocupa(const int& posicao)
{
    if(poltronas[posicao] != nullptr)
    {
        poltronas[posicao] = nullptr;
        return true;
    }
    return false;

}
int Voo::vagas() const
{
    int cont = 0;
    for(int i = 0; i < CAPACIDADE_MAXIMA; ++i)
    {
        if(poltronas[i] == nullptr)
        {
            cont++;
        }
    }
    
    return cont;
}
void Voo::imprime()
{
    std::cout << "Numero do Voo: " << p_Numero << std::endl;
    p_DataHorario.imprime(false);
    std::cout << std::endl;
    std::cout << "Quantidade de Vagas: " << vagas() << std::endl;
    for(int i = 0; i < CAPACIDADE_MAXIMA; ++i)
    {
        int cont = 0;
        if(poltronas[i] != nullptr)
        {
            std::cout << "Poltrona " << cont++ << ": ";
            std::cout << poltronas[i] ->getCPF() << ", " << poltronas[i] -> getNome()
                <<std::endl;
        }
    }
}

