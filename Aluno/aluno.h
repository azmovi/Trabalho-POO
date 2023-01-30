#ifndef ALUNO_H
#define ALUNO_H

#include <string>
#include <iostream>
#include "../Pessoa/pessoa.h"

class Aluno : public Pessoa
{
private:
    mutable int p_RA;
    mutable double p_N1, p_N2, p_Trab;
public:
    Aluno(const std::string& cpf = "000.000.000-00",
            const std::string& nome = "Desconhecido",const int& ra = 0,
            const double& n1 = 0,  const double& n2 = 0,const double& trab = 0);

    int getRA() const;

    double getN1() const;

    double getN2() const;

    double getTrab() const;

    void setRA(const int&);

    void setN1(const double&);

    void setN2(const double&);

    void setTrab(const double&);

    double media() const;

    bool aprovado() const;

    bool sac() const;

    double notaSAC() const;

    void imprime() override;

};

#endif



