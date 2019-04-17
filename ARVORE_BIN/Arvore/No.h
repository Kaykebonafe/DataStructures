//
// Created by IoT1 on 10/04/2019.
//

#ifndef ARVORE_NO_H
#define ARVORE_NO_H

#include <iostream>

template <typename T> class ArvoreBin;

template <typename P> class No{
public:
    No(): valor(0), pai(NULL), esq(NULL), dir(NULL) {}

    P getValor(){
        return valor;
    }

    friend class ArvoreBin<P>;

private:
    P valor;
    No<P>* pai;
    No<P>* esq;
    No<P>* dir;

};

#endif //ARVORE_NO_H
