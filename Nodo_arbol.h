//
// Created by abigail on 17/8/19.
//

#ifndef TAREA1_NODO_ARBOL_H
#define TAREA1_NODO_ARBOL_H


#include <clocale>

class Nodo_arbol {
    Nodo_arbol*hijo_derecho;
    Nodo_arbol*hijo_izquierdo;
public:

    Nodo_arbol(int v, Nodo_arbol*der=NULL,Nodo_arbol*iz=NULL){

        this->valor = v;
        this->hijo_derecho = der;
        this->hijo_izquierdo = iz;
    }
    friend class arbol_binario;

    int valor;
};


#endif //TAREA1_NODO_ARBOL_H
