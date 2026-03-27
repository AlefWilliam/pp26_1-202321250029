#ifndef IMPLEMENTADOR_H
#define IMPLEMENTADOR_H

#include <iostream>
using namespace std;

class Implementador {
public:
    virtual void getDados(string tipo) = 0;
};

#endif
