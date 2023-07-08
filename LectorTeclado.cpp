//
// Created by Ali Gonzalez on 7/8/20.
//

#include "LectorTeclado.h"

char LectorTeclado::leer() {
    char tecla;
    cin.get(tecla);
    return tecla;
}