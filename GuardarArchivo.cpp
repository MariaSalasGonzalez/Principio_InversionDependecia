//
// Created by Ali Gonzalez on 7/8/20.
//

#include "GuardarArchivo.h"

GuardarArchivo::GuardarArchivo(const string &nombre) : nombre(nombre) {}


void GuardarArchivo::escribir(char tecla) {
    fstream fichero;
    fichero.open(nombre,ios::app | ios::out);
    fichero<<tecla;
    fichero.close();
}
/* void Copiar(lector& l,Escritor& e){
 * char tecla;
 *
 *
 */