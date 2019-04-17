//
// Created by IoT1 on 10/04/2019.
//

#ifndef ARVORE_ARVOREBIN_H
#define ARVORE_ARVOREBIN_H

#include <iostream>
#include "No.h"

using std::cout;
using std::endl;

template <typename T> class ArvoreBin{
public:
    ArvoreBin(): raiz(NULL), n(0) {}

    void insere(T valor){
        No<T>* novo = new No<T>;
        novo->valor = valor;
        novo->pai= NULL;
        novo->dir = NULL;
        novo->esq = NULL;

        No<T>* atual = raiz;
        No<T>* anterior = NULL;
        while (atual){
            anterior = atual;

            if (valor < atual->valor){
                atual = atual->esq;

            } else {
                atual = atual->dir;

            }

        }

        if (anterior){
            if(valor < anterior->valor){
                anterior->esq = novo;

            } else {
                anterior->dir = novo;

            }

        } else {
            raiz = novo;

        }
        novo->pai = anterior;
        n++;

    }

    No<T>* busca(T valor){
        No<T>* atual = raiz;
        while(atual){
            if( valor < atual->valor  ){
                atual = atual->esq;

            }else if(valor > atual->valor){
                atual = atual->dir;

            }else{
                return atual;

            }
        }
        cout << "Esse número não existe" << endl;
        return NULL;
    }

    void remove(T valor){
        No<T>* atual = busca(valor);
        No<T>* anterior = atual->pai;
        if(filhos(atual) == 0){
            //if
        } else if (filhos((atual) == 1)){
            No<T>* filho = atual->esq;
            if(!filho)
                filho = atual->dir;

            if(anterior->esq == atual){
                anterior->esq = filho;
            } else {
                anterior->dir = filho;
            }
            filho->pai = anterior;
            delete atual;
        } else {
            No<T>* antes = antecessor(atual);
            T temp = antes->valor;
            remove(temp);
            atual->valor = temp;

        }

    }

    No<T>* antecessor(No<T>* n){
        n = n->esq;
        while(n && n->dir){
            n = n->dir;
        }
        return n;
    }

    void imprime(No<T>* n){
        if(n != NULL){
            imprime(n->esq);
            cout << n->valor << " ";
            imprime(n->dir);
        }
    }
    void imprime(){
        imprime(raiz);
    }

    int filhos(No<T>* n){
        if(n->esq && n->dir){
            return 2;
        }

        else if(!n->esq && !n->dir){
            return 0;
        }
        else
            return 1;

    }

private:
    No<T>* raiz;
    T n;

};

#endif //ARVORE_ARVOREBIN_H
