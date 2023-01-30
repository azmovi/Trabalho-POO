#ifndef UTILITY_H
#define UTILITY_H
#include <iostream>
#include <string>

bool validDate(int dia, int mes, int ano);

bool validTime(int hora, int minuto, int segundo);

std::string convert(const int& num, const int& casa);

#endif
