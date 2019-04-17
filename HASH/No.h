//
// Created by T-Gamer on 05/04/2019.
//

#ifndef HASH_NO_H
#define HASH_NO_H

#include <iostream>
#include "LDE.h"

template<typename T> class LDE;

template<typename P> class No{
public:
    No(): proximo(NULL), val(0){}

    friend class LDE<P>;

private:
    P val;
    No<P>* proximo;
};

#endif //HASH_NO_H
