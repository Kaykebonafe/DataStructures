//
// Created by T-Gamer on 19/04/2019.
//

#ifndef ARVOREBIN_ARVOREBIN_H
#define ARVOREBIN_ARVOREBIN_H

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

    bool remove(No<T>* no){
        if(!no)
            return false;

        int numFilhos = filhos(no);
        No<T>* pai = no->pai;

        if(numFilhos == 0){
            if(!pai){
                delete no;
                raiz = NULL;
                return true;
            }

            if(no == pai->esq)
                pai->esq = NULL;

            else
                pai->dir = NULL;

            return true;

        } else if(numFilhos == 1){
            No<T>* filhoUnico = no->esq;

            if(!filhoUnico)
                filhoUnico = no->dir;

            if(!pai) {
                raiz = filhoUnico;
                filhoUnico->pai = NULL;
                delete no;
                return true;
            }

            if(no == pai->esq)
                pai->esq = filhoUnico;

            else
                pai->dir = filhoUnico;

            filhoUnico->pai = pai;
            delete no;

        } else {
            No<T>* suc = sucessor(no);
            no->valor = suc->valor;
            return remove(suc);
        }



    }

    bool remove(T valor){
        return remove(busca(valor));
    }

    No<T>* antecessor(No<T>* n){
        n = n->esq;
        while(n && n->dir){
            n = n->dir;
        }
        return n;

    }

    No<T>* sucessor(No<T>* n){
        n = n->dir;
        while(n && n->esq){
            n = n->esq;
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

    void imprimeEDR(No<T>* n){
        if(n != NULL){
            imprimeEDR(n->esq);
            imprimeEDR(n->dir);
            cout << n->valor << " ";
        }
    }

    void imprimeEDR(){
        imprimeEDR(raiz);
    }

    int filhos(No<T>* n){
        int f = 0;
        if(n->esq)
            f++;
        if(n->dir)
            f++;

        return f;

    }

    void desalocaSubArvore(No<T>* n){
        if(n){
            desalocaSubArvore(n->esq);
            desalocaSubArvore(n->dir);
            delete n;
        }
    }

    No<T>* getRaiz(){
        return raiz;
    }

    virtual ~ArvoreBin(){
        desalocaSubArvore(raiz);
    }

private:
    No<T>* raiz;
    T n;

};

#endif //ARVOREBIN_ARVOREBIN_H
