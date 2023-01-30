#include <string>
#include <iostream>
#include "datahorario.h"
#include "../Utility/utility.h"

DataHorario::DataHorario(const int& dia, const int& mes, const int& ano,
        const int& hora, const int& minuto, const int& segundo)
    :p_Dia(dia), p_Mes(mes), p_Ano(ano), p_Hora(hora), p_Minuto(minuto),
    p_Segundo(segundo)
{
    bool dataValida = validDate(p_Dia, p_Mes, p_Ano);
    bool horaValida = validTime(p_Hora, p_Minuto, p_Segundo);
    
    if(!dataValida || !horaValida)
    {
        p_Dia = 1;
        p_Mes = 1;
        p_Ano = 1;
        p_Hora = 0;
        p_Minuto = 0;
        p_Segundo = 0;
        p_Padrao = 1;
    }
}

DataHorario::~DataHorario() {}

int DataHorario::getDia() const
{
    return p_Dia;
}

int DataHorario::getMes() const
{
    return p_Mes;
}

int DataHorario::getAno() const
{
    return p_Ano;
}

int DataHorario::getHora() const
{
    return p_Hora;
}

int DataHorario::getMinuto() const
{
    return p_Minuto;
}

int DataHorario::getSegundo() const
{
    return p_Segundo;
}

int DataHorario::compara(const DataHorario& obj) const
{
    int anoOBJ = obj.getAno(), mesOBJ = obj.getMes(), diaOBJ = obj.getDia();

    int horaOBJ = obj.getHora(), minutoOBJ = obj.getMinuto(), segundoOBJ = obj.getSegundo();

    int resultado = 0;
    
    if(p_Ano != anoOBJ)
    {
        resultado = (p_Ano > anoOBJ) ? 1 : -1;
    }
    else if(p_Mes != mesOBJ)
    {
        resultado = (p_Mes > mesOBJ) ? 1 : -1;
    }
    else if(p_Dia != diaOBJ)
    {
        resultado = (p_Dia > diaOBJ) ? 1 : -1;
    }
    else if(p_Hora != horaOBJ)
    {
        resultado = (p_Hora > horaOBJ) ? 1 : -1;
    }
    else if(p_Minuto != minutoOBJ)
    {
        resultado = (p_Minuto > minutoOBJ) ? 1 : -1;
    }
    else if(p_Segundo != segundoOBJ)
    {
        resultado = (p_Segundo > segundoOBJ) ? 1 : -1;
    }
    
    return resultado;

}

void DataHorario::imprime(const bool& eua)
{
    std::cout << convert(p_Dia, 2) << '/' << convert(p_Mes, 2) << '/' 
        << convert(p_Ano, 4);
    
    if(eua && !p_Padrao)
    {
        std::string modulo = " AM.";
        int novaHora = p_Hora;

        bool horaValida = validTime(p_Hora, p_Minuto, p_Segundo);
        bool dataValida = validDate(p_Dia, p_Mes, p_Ano);

        if (p_Hora == 0 && dataValida && horaValida)
        {
            novaHora = 12;
        }
        else if (p_Hora >= 12)
        {
            modulo = " PM.";
            if(p_Hora > 12)
            {
                novaHora -= 12;
            }
        }

        std::cout << ' ' << convert(novaHora, 2) << ':' << convert(p_Minuto, 2)
            << ':' << convert(p_Segundo, 2) << modulo << std::endl;
    }
    else
    {
         std::cout << ' ' << convert(p_Hora, 2) << ':' << convert(p_Minuto, 2)
             << ':' << convert(p_Segundo, 2) << std::endl;
    }
}

void DataHorario::imprimePorExtenso()
{
    if(!p_Padrao)
    {
        std::string meses[12] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio",
            "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro",
            "Dezembro"};

        std::cout << p_Dia << " de " << meses[p_Mes - 1] << " de "<< p_Ano << " - ";

        std::cout << p_Hora << " horas, " << p_Minuto << " minutos e "
            << p_Segundo << " segundos" << std::endl;
    }
    else
    {
        std::cout << "Data Default" << std::endl;
    }
}





