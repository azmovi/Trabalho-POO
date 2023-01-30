#include <iostream>
#include <string>
#include "pessoa.h"

Pessoa::Pessoa(const std::string& cpf, const std::string& nome)
    :p_Cpf(cpf), p_Nome(nome) {}

void Pessoa::imprime() 
{
    std::cout << "Nome: " << p_Nome << std::endl;
    std::cout << "CPF: " << p_Cpf << std::endl;
}

std::string Pessoa::getCPF() const
{
    return p_Cpf;
}
std::string Pessoa::getNome() const
{
    return p_Nome;
}

void Pessoa::setCPF(const std::string& cpf) 
{
    p_Cpf= cpf;
}

void Pessoa::setNome(const std::string& nome) 
{
    p_Nome = nome;
}

