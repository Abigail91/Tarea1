//
// Created by abigail on 17/8/19.
//

#ifndef TAREA1_ARBOL_BINARIO_H
#define TAREA1_ARBOL_BINARIO_H


#include <iostream>
#include "Nodo_arbol.h"

class arbol_binario {
public:
    arbol_binario(Nodo_arbol*raiz= NULL){
        this->raiz = raiz;
        this->len=0;
    }
    bool vacio(){
        return (this->raiz == NULL);
    }
    void insertar(Nodo_arbol*&arbol,int valor ){
        if(arbol == NULL){
            Nodo_arbol*nuevo = new Nodo_arbol(valor);
            arbol = nuevo;
        }else{
            int val_raiz = arbol->valor;
            if(valor < val_raiz){
                insertar(arbol->hijo_izquierdo,valor);
            }else{
                insertar(arbol->hijo_derecho,valor);
            }


        }
        this->len++;

    }
    void print(Nodo_arbol*arbol, int i){
        if(arbol == NULL){
            return;
        }else{
            print(arbol->hijo_derecho,i++);
            for(int j = 0;j<i;j++){
                std::cout << "  ";
            }
            std::cout<<arbol->valor<<std::endl;
            print(arbol->hijo_izquierdo,i++);

        }
    }

#endif //TAREA1_ARBOL_BINARIO_H


    Nodo_arbol*raiz;

    int len;
};

