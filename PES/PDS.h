//
// Created by unifkluca on 29/03/2019.
//

#ifndef PES_PDS_H
#define PES_PDS_H

#include<iostream>
#include "No.h"

using std::cout;
using std::endl;

template <typename T> class PDS{
public:
    PDS(): n(0), topo(NULL){}

    void empilha(T x){
        No<T>* novo = new No<T>;
        novo->valor = x;

        novo->proximo = topo;
        topo = novo;

        n++;

    }

    bool desempilha(T* x = NULL){
        No<T>* atual = topo;

        if (atual == NULL)
            return false;

        topo = topo->proximo;

        if (x)
            *x = atual->valor;

        n--;

        delete atual;
        return true;
    }

    void print(){
        No<T>* atual = topo;

        while(atual){
            cout << atual->valor << " ";
            atual = atual->proximo;
        }
        cout << endl;
    }

    virtual ~PDS() {
        No<T>* atual = topo, *prox = NULL;

        while(atual){
            prox = atual->proximo;
            delete atual;
            atual = prox;
        }

    }

    PDS<T>& operator << (const T& x){

    }

private:
    No<T>* topo;
    int n;

};

#endif //PES_PDS_H
