#ifndef REVISTA_H
#define REVISTA_H

#include "Publicacao.h"

class Revista : public Publicacao {
public:
    Revista(Implementador* imp) : Publicacao(imp) {}

    void getArtigo() {
        cout << "Revista.getArtigo() chamado" << endl;
    }

    void getTitulo() override {
        cout << "Revista.getTitulo() chamado" << endl;
    }

    void getAutor() override {
        cout << "Revista.getAutor() chamado" << endl;
    }
};

#endif
