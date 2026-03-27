#ifndef PUBLICACAOIMPLXML_H
#define PUBLICACAOIMPLXML_H

#include "Implementador.h"

class PublicacaoImplXML : public Implementador {
public:
    void getDados(string tipo) override {
        cout << "PublicacaoImplXML.getDados() chamado para tipo: " << tipo << endl;
    }
};

#endif
