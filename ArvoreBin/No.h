//
// Created by T-Gamer on 19/04/2019.
//

#ifndef ARVOREBIN_NO_H
#define ARVOREBIN_NO_H

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

#endif //ARVOREBIN_NO_H
