#ifndef PUBLICACAOIMPLBD_H
#define PUBLICACAOIMPLBD_H

#include "Implementador.h"

class PublicacaoImplBD : public Implementador {
public:
    void getDados(string tipo) override {
        cout << "PublicacaoImplBD.getDados() chamado para tipo: " << tipo << endl;
    }
};

#endif
