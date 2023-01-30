#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include "utility.h"


bool validDate(int dia, int mes, int ano)
{
    bool bissexto = ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0));

    int diaMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(mes < 1 || mes > 12)
    {
        return false;
    }
    if(bissexto && mes == 2)
    {
        diaMes[1] == 29;
    }

    return ((dia > 0) && (dia <= diaMes[mes - 1]));
}

bool validTime(int hora, int minuto, int segundo)
{
    
    if(hora < 0 || hora > 23)
    {
        return false;
    }
    if(minuto < 0 || minuto > 59)
    {
        return false;
    }
    if(segundo < 0 || segundo > 59)
    {
        return false;
    }
    return true;
}

std::string convert(const int& num, const int& casa)
{
    std::ostringstream format;
    format << std::setfill('0') << std::setw(casa) << num;
    return format.str();
}
