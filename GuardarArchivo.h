//
// Created by Ali Gonzalez on 7/8/20.
//

#ifndef INVERSION_DEPENDECIA_GUARDARARCHIVO_H
#define INVERSION_DEPENDECIA_GUARDARARCHIVO_H
#include <iostream>
#include <fstream>
using namespace std;

#include "Escritor.h"
class GuardarArchivo:public Escritor {
private:
    string nombre;
public:
    GuardarArchivo(const string &nombre);
    void escribir(char);
};


#endif //INVERSION_DEPENDECIA_GUARDARARCHIVO_H
