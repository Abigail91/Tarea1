//
// Created by abigail on 17/8/19.
//

#ifndef TAREA1_NODO_ARBOL_H
#define TAREA1_NODO_ARBOL_H


#include <clocale>

class Nodo_arbol {
    Nodo_arbol*hijo_derecho;
    Nodo_arbol*hijo_izquierdo;
    Nodo_arbol*padre;
public:

    Nodo_arbol(int v, Nodo_arbol*der=NULL,Nodo_arbol*iz=NULL,Nodo_arbol*padre=NULL){

        this->valor = v;
        this->hijo_derecho = der;
        this->hijo_izquierdo = iz;
        this->padre =padre;
    }
    friend class arbol_binario;

    int valor;
};


#endif //TAREA1_NODO_ARBOL_H
