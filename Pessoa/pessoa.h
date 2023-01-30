#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include <iostream>

class Pessoa
{
private:
    mutable std::string p_Cpf, p_Nome;
public:
    Pessoa(const std::string& cpf = "000.000.000-00", 
            const std::string& nome = "Desconhecido");

    std::string getCPF() const ;

    std::string getNome() const ;

    void setCPF(const std::string& cpf);

    void setNome(const std::string& nome);

    virtual void imprime();
};

#endif
