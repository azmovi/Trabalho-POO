#ifndef DATAHORARIO_H
#define DATAHORARIO_H

#include <string>
#include <iostream>

class DataHorario
{
private:
    mutable int p_Dia, p_Mes, p_Ano, p_Hora, p_Minuto, p_Segundo;
    bool p_Padrao;
public:
    DataHorario(const int& dia = 1, const int& mes = 1, const int& ano = 1,
            const int& hora = 0, const int& minuto = 0, const int& segundo = 0);

    ~DataHorario();

    int getDia() const;

    int getMes() const;

    int getAno() const;

    int getHora() const;

    int getMinuto() const;

    int getSegundo() const;
    
    int compara(const DataHorario& objeto) const;

    void imprime(const bool& am);

    void imprimePorExtenso();
};

#endif

