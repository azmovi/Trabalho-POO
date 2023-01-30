#include <iostream>
#include <string>
#include "../Pessoa/pessoa.h"
#include "aluno.h"

Aluno::Aluno(const std::string& cpf,  const std::string& nome,  const int& ra,
        const double& n1,  const double& n2,  const double& trab)
    :Pessoa(cpf, nome), p_RA(ra), p_N1(n1), p_N2(n2), p_Trab(trab) {}

int Aluno::getRA()  const
{
    return p_RA;
}

double Aluno::getN1()  const
{
    return p_N1;
}

double Aluno::getN2()  const
{
    return p_N2;
}

double Aluno::getTrab()  const
{
    return p_Trab;
}

void Aluno::setRA(const int& ra)  
{
   p_RA = ra;
}

void Aluno::setN1(const double& n1)  
{
    p_N1 = n1;
}

void Aluno::setN2(const double& n2) 
{
    p_N2 = n2;
}

void Aluno::setTrab(const double& trab)  
{
    p_Trab = trab;
}

double Aluno::media() const
{
    double p_Media = (7 * p_N1 + 7 * p_N2 + 6 * p_Trab) / 20;
    return p_Media;
}

bool Aluno::aprovado() const
{

    if (media() >= 6)
    {
        return true;
    }
    return false;
}

bool Aluno::sac() const
{
    if ((media() >= 5.0) && (media() < 6.0))
    {
        return true;
    }
    return false;
}

double Aluno::notaSAC() const
{
    if (media() >= 6.0 || media() < 5.0)
    {
        return 0;
    }
    double nota = 12 - media();
    return nota;
}

void Aluno::imprime() 
{
    std::cout << "CPF: " << getCPF() << std::endl;
    std::cout << "Nome: " << getNome() << std::endl;
    std::cout << "RA: " << p_RA<< std::endl;
    if(aprovado())
    {
        std::cout << "Aprovado com media " << media() << std::endl;
    }
    else if (sac())
    {
        std::cout << "Recuperação e precisa tirar: " << notaSAC() << std::endl;
    }
    else if (!aprovado() && !sac())
    {
        std::cout << "Reprovado com media " << media() << std::endl;
    }
}


