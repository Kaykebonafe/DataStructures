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
        No<T>* atual = raiz;
        No<T>* anterior = NULL;
        No<T>* proximo = NULL;

        while(atual){
            anterior = atual;
            if( valor < atual->valor  ){
                atual = atual->esq;

            }

            else if (valor > atual->valor){
                atual = atual->dir;

            }

            else if(valor == atual->valor){
                if(!atual->dir && !atual->esq){
                    delete atual;
                    n--;

                }

                else if(atual->dir && !atual->esq){
                    proximo = atual->dir;
                    anterior->dir = proximo;
                    proximo->pai = anterior;
                    delete atual;
                    n--;

                }

                else if(atual->esq && !atual->dir){ //1 filho esquerda
                    proximo = atual->esq;
                    anterior->esq = proximo;
                    proximo->pai = anterior;
                    delete atual;
                    n--;

                }else{
                    proximo = atual->dir;
                    while(proximo->esq){
                        proximo = proximo->esq;
                    }

                    No<T>* aux = NULL;
                    if(!proximo->dir){
                        atual->valor = proximo->valor;
                        delete proximo;
                    }

                    else if(proximo->dir){
                        aux = proximo->pai;
                        aux->esq = proximo->dir;
                        proximo->dir->pai = aux;
                        atual->valor = proximo->valor;
                        delete proximo;

                    }

                }

            }

        }

    }

private:
    No<T>* raiz;
    T n;

};

#endif //ARVORE_ARVOREBIN_H
