//
// Created by unifkluca on 08/03/2019.
//

#ifndef LDDE_NO_H
#define LDDE_NO_H

#include <iostream>
#include "LDDE.h"

template<typename T> class LDDE;

template<typename T> class No{
public:
    No(): valor(0), anterior(NULL), proximo(NULL){};

    T getValor(){
        return valor;
    }

    friend class LDDE<T>;
private:
    No<T>* anterior;
    No<T>* proximo;
    T valor;

};

#endif //LDDE_NO_H
