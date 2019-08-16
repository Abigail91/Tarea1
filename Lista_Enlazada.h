//
// Created by abigail on 15/8/19.
//

#ifndef TAREA1_LISTA_ENLAZADA_H
#define TAREA1_LISTA_ENLAZADA_H


#include "Nodo.h"

class Lista_Enlazada {
private:
    Nodo*primero;
    Nodo*actual;
    bool ListaVacia(){
        return(this->primero == NULL);
    }
   public: Lista_Enlazada(){
        this-> primero = NULL;
        this-> actual =NULL;

    };
   void Insertar(int v){
       Nodo*nuevo = new Nodo(v);
       if(ListaVacia()){
           this->primero = nuevo;
           this->actual = nuevo;
       }else {
           this->actual->Siguiente = nuevo;
       }
   }

};


#endif //TAREA1_LISTA_ENLAZADA_H
