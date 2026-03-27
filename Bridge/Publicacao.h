#ifndef PUBLICACAO_H
#define PUBLICACAO_H

#include "Implementador.h"

class Publicacao {
protected:
    Implementador* imp;

public:
    Publicacao(Implementador* imp) {
        this->imp = imp;
    }

    void obterDados(string tipo) {
        cout << "Publicacao.obterDados() chamado" << endl;
        imp->getDados(tipo);
    }

    virtual void getTitulo() = 0;
    virtual void getAutor() = 0;
};

#endif
