//
// Created by T-Gamer on 17/04/2019.
//

#ifndef LDE_NO_H
#define LDE_NO_H

#include "LDE.h"

template <typename T> class LDE;

template <typename P> class No{
public:
    No(): val(0), proximo(nullptr) {}

    friend class LDE<P>;

private:
    P val;
    No<P>* proximo;
};

#endif //LDE_NO_H
