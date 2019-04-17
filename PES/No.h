//
// Created by unifkluca on 29/03/2019.
//

#ifndef PES_NO_H
#define PES_NO_H

#include <iostream>
#include "PDS.h"

template <typename T> class PDS;

template <typename P> class No{
public:
    No(): proximo(NULL), valor(0){}

    friend class PDS<P>;

private:
    No<P>* proximo;
    P valor;
};

#endif //PES_NO_H
