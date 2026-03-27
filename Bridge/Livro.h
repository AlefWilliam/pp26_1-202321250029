#ifndef LIVRO_H
#define LIVRO_H

#include "Publicacao.h"

class Livro : public Publicacao {
public:
    Livro(Implementador* imp) : Publicacao(imp) {}

    void getISBN() {
        cout << "Livro.getISBN() chamado" << endl;
    }

    void getTitulo() override {
        cout << "Livro.getTitulo() chamado" << endl;
    }

    void getAutor() override {
        cout << "Livro.getAutor() chamado" << endl;
    }
};

#endif
